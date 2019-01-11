#include<stdio.h>
#include<conio.h>
int * print( )
{
	static int array[5] = {10, 20, 20, 5, 60};
	int i;
	return array;
} 
int main(int arg1, char *arg2[])
{
 	int *ptr, i;
	ptr = print( );
	for(i = 0; i< 5; i++)
	{
		printf("%d       ", *(ptr+i));
	}
		
	
}

