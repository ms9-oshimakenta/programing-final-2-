#include<iostream>
#include<string>
#include<fstream>
#include<vector>
#include<regex>
#include<algorithm>
using namespace std;

class Pokemon
{
private:int no;
private:string name;
private:string type1;
private:string type2;

public:
	void setNo(int newNo)
	{
		no = newNo;
	}

	int getNo()
	{
		return no;
	}

	void setName(const string& newName)
	{
		name = newName;
	}

	string getName()
	{
		return name;
	}

	void setType1(const string& newType1)
	{
		type1 = newType1;
	}

	string getType1()
	{
		return type1;
	}

	void setType2(const string& newType2)
	{
		type2 = newType2;
	}

	string getType2()
	{
		return type2;
	}
	
};


void Pokesearch(vector <Pokemon> v)
{
	cout <<"タイプ一覧\n"<<"・ノーマル"<<"・ほのお" << "・みず" << "・でんき" << "・くさ" << "・こおり" << "・かくとう" << "・どく\n"
		<< "・じめん" << "・ひこう" << "・エスパー" << "・むし" << "・いわ" << "・ゴースト" << "・ドラゴン\n\n" << "タイプまたは名前を入力\n";
	string str;
	cin >> str;

	bool flag = false;
	
		
		for (size_t j = 0; j < v.size(); ++j)
		{
		
			if (str == v[j].getType1())
			{
				cout << "No." << v[j].getNo() << " " << " " << v[j].getName() << "   " << "タイプ１：" << v[j].getType1()
					<< "   " << "タイプ２：" << v[j].getType2()<<"\n";
				if (flag = true);
			}
			else if (str == v[j].getType2())
			{
				cout  << "No." << v[j].getNo() << " " << " " << v[j].getName() << "   " << "タイプ１：" << v[j].getType1()
					<< "   " << "タイプ２：" << v[j].getType2()<<"\n";
				if (flag = true);
			}
			
			else if (str == v[j].getName())
			{
				cout << "No." << v[j].getNo() << " " << " " << v[j].getName() << "   " << "タイプ１：" << v[j].getType1()
					<< "   " << "タイプ２：" << v[j].getType2() << "\n";
				if (flag = true);
			}

		}
		if (flag == false)
		{
			cout << "該当なし";
		}
	

}


int main()
{
	ifstream datafile("C:\\Users\\spoke\\source\\repos\\最終課題ポケモン一覧\\最終課題ポケモン一覧\\初代ポケモン図鑑.txt");


	vector <Pokemon> v;
	
	int i = 0;

	int no;
	string name;
	string type1;
	string type2;


	while (datafile >> no >> name >> type1 >> type2 )
	{
		v.emplace_back();
		

		v[i].setNo(no);
		v[i].setName(name);
		v[i].setType1(type1);
		v[i].setType2(type2);

		i++;

	}
	
	sort(v.begin(), v.end(),
		
		[](Pokemon lhs ,Pokemon rhs)
		{
			return lhs.getNo()< rhs.getNo();

		});
		

	Pokesearch(v);
	
}










