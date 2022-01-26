#include<stdio.h>
int main()
{	int a;
	for(int i = 1; i<=7; i++)
	{	a=7-i;
		for(int j=1; j<=7; j++)
		{
			if(j<=8-i)
			{
				printf("%d",a);
				a--;
			}
			else 
				printf(" ");
		}
		printf("\n");
	}
	return 0;
}
