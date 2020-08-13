#include<stdio.h>
int main()
{
	int n,sum=0,i;
	scanf_s("%d", &n);
	for (i = 1; i < n; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			sum = sum + i;
		}
	}
	printf("%d", sum);
	return 0;
}