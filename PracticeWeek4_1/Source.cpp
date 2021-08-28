#include<stdio.h>
int main()
{
	int x = 1, n = 1;
	while (n != -99)
	{
		printf("Input Integer : ");
		scanf_s("%d", &n);
		x = n;
		int i;
		for (i = 2; i < x; i++)
		{
			if (x % i == 0)
			{
				printf("\t%d is not prime number", n);
				break;
			}
		}
		if (i == n)
		{
			printf("\t%d is prime number", n);
		}
		printf("\n");
	}
	return 0;
}