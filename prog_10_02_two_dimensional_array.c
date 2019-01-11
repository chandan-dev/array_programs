#include<stdio.h>
#include<conio.h>
void main(int arg1, char *arg2[])
{
	int row, col,i,j,element;
	printf( "enter the row and column");
	scanf("%d %d",&row,&col);
	int array[row][col];
	printf("enter the elements:");
	for(i = 0; i < row; i++)
	{
		for(j = 0; j < col; j++)
		{
			scanf("%d",&element);
			array[i][j] = element;
		}
	}
	function( row, col, array);
	getch();
//	return 0;
}
int function(int row, int col,int array[row][col])
{
	 int i, j;
	printf("elements are:\n");
	for(i = 0; i < row; i++)
	{
		for(j = 0; j < col; j++)
		{
			 printf("   %d    ",array[i][j]);			  
		}
		printf("\n\n");
	}
	
}
