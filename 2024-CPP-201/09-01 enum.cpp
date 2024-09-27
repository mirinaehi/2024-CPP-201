#include <iostream>

using namespace std;

enum FoodStyle {
	KOREAN,		// 0
	JAPANESE,	// 1
	CHINESE		// 2
};

void main(void)
{
	int style = KOREAN;

	switch (style)
	{
	case KOREAN:
		cout << "한식" << endl;
		break;
	case JAPANESE:
		cout << "일식" << endl;
		break;
	case CHINESE:
		cout << "중식" << endl;
		break;
	}
}