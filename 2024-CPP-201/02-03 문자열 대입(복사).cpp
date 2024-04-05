#include <stdio.h>

void main(void)
{
	char str[100] = "Juyoung";
	char str2[100];

	int i = 0;
	// str에 있는 내용을 str2에 복사하기
	for (; str[i] != '\0'; i++) {
		str2[i] = str[i];
	}

	str2[i] = str[i];	// '\0'

	printf("%s ", str2);

}