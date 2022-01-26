#include<stdio.h>
int main()
{
	int a;
	char b;
	for(int i=1; i<=4;i++)
	{	a=1;
		b='A';
		for(int j=1; j<=8; j++)
		{
			if(j>=5-i && j<=4+i)
			{
				if(j<=4)
				{
					printf("%c",b);
					b++;
				}
				else
				{
					printf("%d",a);
					a++;
				}
			}
			else
				printf(" ");
		}
		printf("\n");
	}
	return 0;
}
