#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	char num[110];
	int size, sum;
	scanf("%d", &size);
	scanf("%s", num);

	sum = 0;
	for (int i = 0; i < size; i++) {
		sum = sum + num[i]-48;
	}
	printf("%d", sum);

	return 0;
}