#include<stdio.h>
int main()
{
	int a;
	for(int i=1; i<=9; i++)
	{
		a=1;
		for(int j=1; j<=5; j++)
		{
			if(i<=5)
			{
				if(j>=6-i)
				{
					printf("%d",a);
					a++;
				}
				else
					printf(" ");
			}
			else
			{
				if(j>=i-4)
				{
					printf("%d",a);
					a++;
				}
				else
					printf(" ");
			}
		}
		printf("\n");
	}
	return 0;
}

