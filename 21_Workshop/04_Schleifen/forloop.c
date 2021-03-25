#include <stdio.h>

int main() {

	// Aufgabe 1
	int sum = 0;
	int start = 1;
	int end = 10;
	
	for( int i = start; i <= end; i++ )
	{
		sum = sum + i;
	}
	
	printf("The sum from %d to %d is equal to %d\n", start, end, sum);
	printf("\n");

	// Aufgabe 2
	int sum1 = 0;
	int start1 = 2;
	int end1 = 10;
	
	for( int i1 = start1; i1 <= end1; i1 = i1 + 2 )
	{
		sum1 = sum1 + i1;
	}
	
	printf("The sum from %d to %d is equal to %d\n", start1, end1, sum1);
	printf("\n");
	printf("****************************************************************\n");

	//Aufgabe 3
	int start2 = 40;
	int end2 = 25;
	
	for( int i2 = start2; i2 >= end2; i2 = i2-1 )
	{
		printf(" %d\n", i2);
	}
	
	printf("****************************************************************\n");


	//Aufgabe 4
	int start3 = 1;
	int end3 = 800;
	
	for( int i3 = start3; i3 <= end3; i3 = i3*3 )
	{
		printf(" %d\n", i3);
	}
	
	printf("****************************************************************\n");


	//Aufgabe 5
	int start4 = 0;
	int end4 = 10;
	
	for( int i4 = start4; i4 < end4; i4++ )
	{
		for( int y = start4 + 1; y <= end; y++)
		{
		printf(" %d", i4*10+y);
		}
		printf("\n");
	}
	
	printf("****************************************************************\n");

	//Aufgabe 6
	int start5 =1;
	int end5 = 1000;
	int limit = 555;
	int sum5 = 0;
	int counter5 = 0;
	
	for( int i = start5; i <= end5; )
	{
		sum5 = sum5 + i;
		counter5 = i;
		i = i + 1;
		if( sum5 > limit )
		{
			break;
		}	
	}
	printf("with max. sum %d, the sum of the integers from %d to %d is %d \n", limit, start5, counter5, sum5 );


	
	
	
	
	
	return 0;
}


