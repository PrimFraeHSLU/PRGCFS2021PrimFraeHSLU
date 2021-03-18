#include <stdio.h>
#include <stdlib.h>

const int NUM_VALUES = 3;

int main(int argc, char *argv[] )
{
	//falls NICHT 3 Argumente erhalten, dann if Schleife
	if( argc != NUM_VALUES + 1 ){
		printf("Usage: \n");
		printf("logicOperators Input1 Input2 Input3 \n");
	}
	else
	{	
		// genau 3 argumente erhalten
		int val1 = atoi(argv[1]);
		int val2 = atoi(argv[2]);
		int val3 = atoi(argv[3]);
		int sum = 0;
		float average = 0.0f;
		
		printf("%d, %d, %d\n", val1, val2, val3);
		
		if( !(val1 > 0) || !(val2 > 0) || !(val3 > 0) )
		{
			printf("All inputs must be stricly greater than zero.\n");
		}
		else
		{
			if( val1 >= val2 && val1 >= val3 )
			{
				printf("%d is the greatest\n", val1);
			}
			else if( val2 >= val1 && val2 >= val3 )
			{
				printf("%d is the greatest\n", val2);
			}
			else
			{
				printf("%d is the greatest\n", val3);
			}
			
			if( val1 <= val2 && val1 <= val3 )
			{
				printf("%d is the smallest\n", val1);
			}
			else if( val2 <= val1 && val2 <= val3 )
			{
				printf("%d is the smallest\n", val2);
			}
			else
			{
				printf("%d is the smallest\n", val3);
			}
			
			printf("inputs valid\n");
			
			sum = val1 + val2 + val3;
			printf("The sum is: %d\n", sum );
			
			average = (float)sum/NUM_VALUES;
			printf("The average is: %.2f\n", average );
		}	
	}
		
#if 0		
		if(
		
		printf("Number of input arguments: %d \n", argc ); //anzahl args. printen

		for( int i = 0; i < argc; i++ )
		{
			printf("Argument %d was %s \n", i , argv[i]);
		}
	}
#endif		
	return 0;
}
