#include <stdio.h>
int main() {

	// Aufgabe 1
	int start1 = 1;
	int end1 = 500;
	
	for( int i = start1; i <= end1; i++ ){
		if(i % 19 == 0){
			printf( " %d\n", i);
		}	
	}
	printf("****************************************************************\n");
	
	
	//Aufgabe 2
	int start2 = 1;
	int end2 = 200;
	
	for( int i = start2; i <= end2; i++ ){
		if(i % 7 == 0 && i % 11 == 0 ){
			printf( "7 and 11: %d\n", i);
		}
		else if( i % 17 == 0 ){
			printf( "17: %d\n", i);
		}	
	}
	printf("****************************************************************\n");
	
	
	//Aufgabe 3
	int start3 = 1;
	int end3 = 200;
	
	for( int i = start3; i <= end3; i++ ){
		if(i % 11 == 0 ){
			if(i % 7 == 0 ){
				printf( "11 and 7: %d\n", i);
			}
			else{
				printf(  "11 but not 7: %d\n", i);
			}
		}
	}
	printf("****************************************************************\n");
			
return 0;
}
