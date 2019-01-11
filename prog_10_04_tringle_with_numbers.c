#include<stdio.h>
#include<conio.h>
int main(int arg1, char *arg2[])
{
	int i,j;
	for( i = 1; i < 5; i++)
	{
		for(j = 1; j <= i; j++)
		{
			printf(" %d ",j);
		}
		printf("\n");
	}
	getch();
	return 0;
}
/*  1
	1   2   
	1   2    3
	1   2    3    4    
*/


 
