#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
//111360238
int main(void)
{
	int x;

	for ( x = 1; x <=10; x++)
	{
		printf("%.2f ", sqrt(x));
	}
	printf("\n");
	system("pause");
	return 0;
}