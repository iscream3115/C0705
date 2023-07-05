#include <iostream>
#include <algorithm>

using namespace std;

int main()
{

	string str1 = "abcbabc";
	string str2 = "aabbccb";


	sort(str1.begin(), str1.end());
	sort(str2.begin(), str2.end());

	if (str1 == str2) cout << "아나그램입니다." << endl;
	else cout << "아닙니다" << endl;






	return 0;
}