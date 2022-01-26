#include<stdio.h>
int main()
{
   	for(int i = 0; i<7;i++)
	{
		for(int j = 0; j<4; j++)	
		{
			if(i<4)
			{
				if(j<=i)
					printf("*");
				else
					printf(" ");
			}
			else
			{
				if(j<=6-i)
					printf("*");
				else
					printf(" ");
			}
		}
		printf("\n");
	}
	return 0;
}
