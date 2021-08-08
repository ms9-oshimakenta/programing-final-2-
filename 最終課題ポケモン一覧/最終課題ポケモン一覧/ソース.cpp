#include<iostream>
#include<fstream>


using namespace std;

int main()
{
	ofstream outfile("初代ポケモン図鑑.txt", ios_base::out);
	outfile << "009 カメックス みず -" << endl;
	outfile << "001 フシギダネ くさ どく" << endl;
	outfile << "002 フシギソウ くさ どく" << endl;
	outfile << "003 フシギバナ くさ どく" << endl;
	outfile << "007 ゼニガメ みず -" << endl;
	outfile << "008 カメール みず -" << endl;
	outfile << "004 ヒトカゲ ほのお -" << endl;
	outfile << "005 リザード ほのお -" << endl;
	outfile << "006 リザードン ほのお ひこう" << endl;
	outfile << "010 キャタピー むし -" << endl;
	outfile << "011 トランセル むし -" << endl;
	outfile << "012 バタフリー むし ひこう" << endl;

	outfile << "013 ビードル むし どく" << endl;
	outfile << "014 コクーン むし どく" << endl;
	outfile << "015 スピアー むし どく" << endl;
	outfile << "016 ポッポ ノーマル ひこう" << endl;
	outfile << "017 ピジョン ノーマル ひこう" << endl;
	outfile << "018 ピジョット ノーマル ひこう" << endl;
	outfile << "019 コラッタ ノーマル -" << endl;
	outfile << "020 ラッタ ノーマル -" << endl;
	outfile << "021 オニスズメ ノーマル ひこう" << endl;
	outfile << "022 オニドリル ノーマル ひこう" << endl;
	outfile << "023 アーボ どく -" << endl;
	outfile << "024 アーボック どく -" << endl;

	outfile << "025 ピカチュウ でんき -" << endl;
	outfile << "026 ライチュウ でんき -" << endl;
	outfile << "027 サンド じめん -" << endl;
	outfile << "028 サンドパン じめん -" << endl;
	outfile << "029 ニドラン♀ どく	-" << endl;
	outfile << "030 ニドリーナ どく -" << endl;
	outfile << "031 ニドクイン どく じめん" << endl;
	outfile << "032 ニドラン♂ どく -" << endl;
	outfile << "033 ニドリーノ どく -" << endl;
	outfile << "034 ニドキング どく じめん" << endl;
	outfile << "035 ピッピ ノーマル -" << endl;
	outfile << "036 ピクシー ノーマル -" << endl;

	outfile << "037 ロコン ほのお -" << endl;
	outfile << "038 キュウコン ほのお -" << endl;
	outfile << "039 プリン ノーマル -" << endl;
	outfile << "040 プクリン ノーマル -" << endl;
	outfile << "041 ズバット どく ひこう" << endl;
	outfile << "042 ゴルバット どく ひこう" << endl;
	outfile << "043 ナゾノクサ くさ どく" << endl;
	outfile << "044 クサイハナ くさ どく" << endl;
	outfile << "045 ラフレシア くさ どく" << endl;
	outfile << "046 パラス むし くさ" << endl;
	outfile << "047 パラセクト むし くさ" << endl;
	outfile << "048 コンパン むし どく" << endl;

	outfile << "049 モルフォン むし どく" << endl;
	outfile << "050 ディグダ じめん -" << endl;
	outfile << "051 ダグトリオ じめん -" << endl;
	outfile << "052 ニャース ノーマル -" << endl;
	outfile << "053 ペルシアン ノーマル -" << endl;
	outfile << "054 コダック みず -" << endl;
	outfile << "055 ゴルダック みず -" << endl;
	outfile << "056 マンキー かくとう -" << endl;
	outfile << "057 オコリザル かくとう -" << endl;
	outfile << "058 ガーディ ほのお -" << endl;
	outfile << "059 ウインディ ほのお -" << endl;
	outfile << "060 ニョロモ みず -" << endl;

	outfile << "061 ニョロゾ みず -" << endl;
	outfile << "062 ニョロボン みず かくとう" << endl;
	outfile << "063 ケーシィ エスパー -" << endl;
	outfile << "064 ユンゲラー エスパー -" << endl;
	outfile << "065 フーディン エスパー -" << endl;
	outfile << "066 ワンリキー かくとう -" << endl;
	outfile << "067 ゴーリキー かくとう -" << endl;
	outfile << "068 カイリキー かくとう -" << endl;
	outfile << "069 マダツボミ くさ どく" << endl;
	outfile << "070 ウツドン くさ どく" << endl;
	outfile << "071 ウツボット くさ どく" << endl;
	outfile << "072 メノクラゲ みず どく" << endl;

	outfile << "073 ドククラゲ みず どく" << endl;
	outfile << "074 イシツブテ いわ じめん" << endl;
	outfile << "075 ゴローン いわ じめん" << endl;
	outfile << "076 ゴローニャ いわ じめん" << endl;
	outfile << "077 ポニータ ほのお -" << endl;
	outfile << "078 ギャロップ ほのお -" << endl;
	outfile << "079 ヤドン みず エスパー" << endl;
	outfile << "080 ヤドラン みず エスパー" << endl;
	outfile << "081 コイル でんき はがね" << endl;
	outfile << "082 レアコイル でんき はがね" << endl;
	outfile << "083 カモネギ ノーマル ひこう" << endl;
	outfile << "084 ドードー ノーマル ひこう" << endl;

	outfile << "085 ドードリオ ノーマル ひこう" << endl;
	outfile << "086 パウワウ みず -" << endl;
	outfile << "087 ジュゴン みず こおり" << endl;
	outfile << "088 ベトベター どく -" << endl;
	outfile << "089 ベトベトン どく -" << endl;
	outfile << "090 シェルダー みず -" << endl;
	outfile << "091 パルシェン みず こおり" << endl;
	outfile << "092 ゴース ゴースト どく" << endl;
	outfile << "093 ゴースト ゴースト どく" << endl;
	outfile << "094 ゲンガー ゴースト どく" << endl;
	outfile << "095 イワーク いわ じめん" << endl;
	outfile << "096 スリープ エスパー -" << endl;

	outfile << "097 スリーパー エスパー -" << endl;
	outfile << "098 クラブ みず -" << endl;
	outfile << "099 キングラー みず -" << endl;
	outfile << "100 ビリリダマ でんき -" << endl;
	outfile << "101 マルマイン でんき -" << endl;
	outfile << "102 タマタマ くさ エスパー" << endl;
	outfile << "103 ナッシー くさ エスパー" << endl;
	outfile << "104 カラカラ じめん -" << endl;
	outfile << "105 ガラガラ じめん -" << endl;
	outfile << "106 サワムラー かくとう -" << endl;
	outfile << "107 エビワラー かくとう -" << endl;
	outfile << "108 ベロリンガ ノーマル -" << endl;

	outfile << "109 ドガ―ス どく -" << endl;
	outfile << "110 マタドガス どく -" << endl;
	outfile << "111 サイホーン じめん いわ" << endl;
	outfile << "112 サイドン じめん いわ" << endl;
	outfile << "113 ラッキー ノーマル -" << endl;
	outfile << "114 モンジャラ くさ -" << endl;
	outfile << "115 ガルーラ ノーマル -" << endl;
	outfile << "116 タッツー みず -" << endl;
	outfile << "117 シードラ みず -" << endl;
	outfile << "118 トサキント みず -" << endl;
	outfile << "119 アズマオウ みず -" << endl;
	outfile << "120 ヒトデマン みず -" << endl;

	outfile << "121 スターミ― みず エスパー" << endl;
	outfile << "122 バリヤード エスパー -" << endl;
	outfile << "123 ストライク むし ひこう" << endl;
	outfile << "124 ルージュラ こおり エスパー" << endl;
	outfile << "125 エレブー でんき -" << endl;
	outfile << "126 ブーバー ほのお -" << endl;
	outfile << "127 カイロス むし -" << endl;
	outfile << "128 ケンタロス ノーマル -" << endl;
	outfile << "129 コイキング みず -" << endl;
	outfile << "130 ギャラドス みず -" << endl;
	outfile << "131 ラプラス みず こおり" << endl;
	outfile << "132 メタモン ノーマル -" << endl;

	outfile << "133 イーブイ ノーマル -" << endl;
	outfile << "134 シャワーズ みず -" << endl;
	outfile << "135 サンダース でんき -" << endl;
	outfile << "136 ブースター ほのお -" << endl;
	outfile << "137 ポリゴン ノーマル -" << endl;
	outfile << "138 オムナイト いわ みず" << endl;
	outfile << "139 オムスター いわ みず" << endl;
	outfile << "140 カブト いわ みず" << endl;
	outfile << "141 カブトプス いわ みず" << endl;
	outfile << "142 プテラ いわ ひこう" << endl;
	outfile << "143 カビゴン ノーマル -" << endl;
	outfile << "144 フリーザー こおり ひこう" << endl;

	outfile << "145 サンダー でんき ひこう" << endl;
	outfile << "146 ファイヤー ほのお ひこう" << endl;
	outfile << "147 ミニリュウ ドラゴン -" << endl;
	outfile << "148 ハクリュー ドラゴン -" << endl;
	outfile << "149 カイリュー ドラゴン ひこう" << endl;
	outfile << "150 ミュウツー エスパー -" << endl;
	outfile << "151 ミュウ エスパー -" << endl;
}