#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
//11360238
int main()
{
	int i;
	unsigned seed;

	printf("Enter seed: ");
	scanf_s("%u", &seed);
	srand(seed);
	for (i = 1; i <= 10; i++)
	{
		printf("%10d", 1 + (rand() % 6));
		if (i % 5 == 0)
		{
			printf("\n");
		}
	}
	system("pause");
	return 0;
}