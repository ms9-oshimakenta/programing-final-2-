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
	cout <<"�^�C�v�ꗗ\n"<<"�E�m�[�}��"<<"�E�ق̂�" << "�E�݂�" << "�E�ł�" << "�E����" << "�E������" << "�E�����Ƃ�" << "�E�ǂ�\n"
		<< "�E���߂�" << "�E�Ђ���" << "�E�G�X�p�[" << "�E�ނ�" << "�E����" << "�E�S�[�X�g" << "�E�h���S��\n\n" << "�^�C�v�܂��͖��O�����\n";
	string str;
	cin >> str;

	bool flag = false;
	
		
		for (size_t j = 0; j < v.size(); ++j)
		{
		
			if (str == v[j].getType1())
			{
				cout << "No." << v[j].getNo() << " " << " " << v[j].getName() << "   " << "�^�C�v�P�F" << v[j].getType1()
					<< "   " << "�^�C�v�Q�F" << v[j].getType2()<<"\n";
				if (flag = true);
			}
			else if (str == v[j].getType2())
			{
				cout  << "No." << v[j].getNo() << " " << " " << v[j].getName() << "   " << "�^�C�v�P�F" << v[j].getType1()
					<< "   " << "�^�C�v�Q�F" << v[j].getType2()<<"\n";
				if (flag = true);
			}
			
			else if (str == v[j].getName())
			{
				cout << "No." << v[j].getNo() << " " << " " << v[j].getName() << "   " << "�^�C�v�P�F" << v[j].getType1()
					<< "   " << "�^�C�v�Q�F" << v[j].getType2() << "\n";
				if (flag = true);
			}

		}
		if (flag == false)
		{
			cout << "�Y���Ȃ�";
		}
	

}


int main()
{
	ifstream datafile("C:\\Users\\spoke\\source\\repos\\�ŏI�ۑ�|�P�����ꗗ\\�ŏI�ۑ�|�P�����ꗗ\\����|�P�����}��.txt");


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










