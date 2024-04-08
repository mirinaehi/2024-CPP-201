#include <iostream>
#include <string>
using namespace std;

void main(void)
{
	string str = "Juyoung";
	// 문자열 길이 ('\0' 따지지 않아)
	cout << str.size() << endl;
	cout << str.length() << endl;
}