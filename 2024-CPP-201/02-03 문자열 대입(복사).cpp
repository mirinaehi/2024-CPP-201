#include <stdio.h>
#include <string.h>

void main(void)
{
	char str[100] = "Juyoung";
	char str2[100];

	// str에 있는 내용을 str2에 복사하기
	strcpy(str2, str);

	printf("%s ", str2);

}