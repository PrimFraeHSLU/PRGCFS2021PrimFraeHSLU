#include <stdio.h>

int main(int argc, char *argv[] )
{
	//falls NICHT 3 Argumente erhalten, dann if Schleife
	if( argc != 3 ){
		printf("Usage: \n");
		printf("logicOperators Input1 Input2 \n");
	}
	else
	{	
		// genau 3 argumente erhalten
		printf("Number of input arguments: %d \n", argc ); //anzahl args. printen

		for( int i = 0; i < argc; i++ )
		{
			printf("Argument %d was %s \n", i , argv[i]);
		}
	}		
	return 0;
}
