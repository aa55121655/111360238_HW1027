#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

//111360238
int square(int y);

int main(void)
{
	int x;
	for (x = 1; x <= 10; x++)
	{
		printf("%d ", square(x));
	}
	printf("\n");
	system("pause");
	return 0;
}
int square(int y)
{
	return y * y;
}
