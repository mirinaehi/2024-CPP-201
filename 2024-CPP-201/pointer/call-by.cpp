#include <iostream>

using namespace std;

void call_by_value(int a) {
	// 새로운 지역변수 a를 만들고 거기에 값을 넣는다.
	a = 10;
}

int main(void)
{
	int num = 3;

	// num의 값이 바뀌지 않는다.
	call_by_value(num);
	cout << num;

	return 0;
}