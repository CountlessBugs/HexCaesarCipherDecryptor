#include <iostream>
using namespace std;

const string hexNumList = "123456789ABCDEF0";

char sumHexChar(char num1, char num2)
{
	int sum = (hexNumList.find(num1) + hexNumList.find(num2)) % 16;
	return hexNumList[sum];
}

int main()
{
	// PLACE YOUR PASSWORD HERE
	// eg: "1234 5678 ABCD"
	string password = "";

	if (password.empty())
	{
		cout << "Have not input any password";
		return 1;
	}

	for (int i = 0; i < 16; i++)
	{
		string text = "\\u";
		for (int j = 0; password.length() > j; j++)
		{
			if (password[j] == ' ') text += "\\u";
			else text += sumHexChar(password[j], hexNumList[i]);
		}

		cout << text << endl;
	}

	return 0;
}
