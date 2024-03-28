#include <stdio.h>

int main(void)
{
	int arr[4] = { 10, 20, 30, 40 };
	char str[4];

	// 두 코드의 결과는 같다
	printf("%d %d\n",  *(&arr[0]), *(&arr[1]));
	printf("%d %d\n", *(arr), *(arr+1));


	return 0;
}