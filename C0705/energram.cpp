#include <iostream>
#include <algorithm>

using namespace std;

int main()
{

	string str1 = "abcbabc";
	string str2 = "aabbccb";


	sort(str1.begin(), str1.end());
	sort(str2.begin(), str2.end());

	if (str1 == str2) cout << "�Ƴ��׷��Դϴ�." << endl;
	else cout << "�ƴմϴ�" << endl;






	return 0;
}