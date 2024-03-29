#include <stdio.h>

int main(void)
{
	int arr[4] = { 10, 20, 30, 40 };
	char str[4] = "swa";

	int* pi = arr;
	char* pc = str;

	// 두 코드의 결과는 같다
	printf("%d %d\n",  arr[0], arr[1]);
	printf("%d %d\n\n", *(arr), *(arr+1));		

	printf("%d %d\n", *(pi), *(pi+1));
	printf("%d %d\n", pi[0], pi[1]);
	printf("%c %c\n", *(pc), *(pc+1));
	printf("%c %c\n", pc[0], pc[1]);

	return 0;
}