#include <iostream>

using namespace std;

int main()
{
	string str = "aaaaabbbcccc";
	string result;

	int count = 0;

	for (int i = 0; i < str.size(); i++)
	{
		count++;

		if (str[i] != str[i + 1])
		{

			cout << str[i] << count;
			count = 0;
		}

	}

	//cout << result << endl;

	return 0;
}