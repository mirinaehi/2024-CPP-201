#include <stdio.h>
#include <string.h>

void main(void)
{
	char str[100] = "Juyoung";
	// 문자열 추가
	strcat(str, " is pretty");

	printf("%s ", str);
}