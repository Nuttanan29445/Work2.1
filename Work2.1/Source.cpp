#include<stdio.h>
int main()
{
	int i;
	scanf_s("%d", &i);
	for (int j = 0; j < i; j++)
	{
		for (int k = 0; k <= j; k++)
		{
			printf("* ");
		}
		printf("\n");
	}
	return 0;
}