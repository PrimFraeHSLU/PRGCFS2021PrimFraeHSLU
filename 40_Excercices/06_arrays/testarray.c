#include <stdio.h>


#define ARRAY_LENGTH 6

void printArray( int *myArray, int arrayLength ) {
	for(int i=0; i< arrayLength; i++)
	{
		printf("%d\n", myArray[i]);
	}
	printf("finished.\n");
}



int main(int argc, char *argv[] )
{
	int intarray[6] = {0};
	printArray(intarray, ARRAY_LENGTH);
	
	//fill indices into array
	for(int i = 0; i < ARRAY_LENGTH; i++){
		intarray[i] =  i;
	}
	
	
	printArray(intarray, ARRAY_LENGTH);

	return 0;
}
