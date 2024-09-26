#include <iostream>

using namespace std;

void main(void)
{
	// 0 : 한식, 1 : 일식, 2 : 중식
	int style = 0;

	switch (style)
	{
	case 0:
		cout << "한식" << endl;
		break;
	case 1:
		cout << "일식" << endl;
		break;
	case 2:
		cout << "중식" << endl;
		break;
	}
}