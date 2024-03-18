#include <iostream>

using namespace std;

// 전통적인 C언어는 함수명이 중복될 수 없다.
int sum_int(int a, int b)
{
	return a + b;
}

float sum_float(float a, float b)
{
	return a + b;
}

void main(void)
{
	cout << sum_int(1, 2) << sum_float(1.1f, 2.2f) << endl;
}