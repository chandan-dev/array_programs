#include<stdio.h>
#include<conio.h>
int main(int arg1, char *arg2[])
{
	int i,j;
	char A;
	for( i = 1; i < 5; i++)
	{
		for(j = 1; j <= i; j++)
		{
			printf(" %c ",(97+j));
		}
		printf("\n");
	}
	getch();
	return 0;
}
/*  a
	a   b      
	a   b   c
	a   b   c   d 
    
*/

 
