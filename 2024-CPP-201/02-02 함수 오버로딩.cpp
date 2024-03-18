#include <iostream>

using namespace std;

// 함수 오버로딩을 사용하면 함수이름을 짓는데 부담을 줄일 수 있다.
int sum(int a, int b)
{
	return a + b;
}
float sum(float a, float b)
{
	return a + b;
}

void main(void)
{
	cout << sum(1, 2) << sum(1.1f, 2.2f) << endl;
}