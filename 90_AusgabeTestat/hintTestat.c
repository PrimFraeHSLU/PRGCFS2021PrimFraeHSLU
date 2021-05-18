
#include <stdio.h>
#include <stdlib.h>



// declare a struct, matching the dataframe
struct DataFrame {
	long long timeStamp;
 	int pressure;
 	char systemState;
 	char alarmState;
};


int main()
{
	FILE *fin = fopen("pressureSpike.bin", "rb");
	// check if file opening worked
	if( fin != NULL )
	{
		// prepare a buffer of correct length
		const int BYTES_IN_LINE = 14;
		unsigned char lineBuffer[BYTES_IN_LINE]; 
		
		FILE *fp= fopen("testat.csv", "wb");
		if(fp != NULL)
		{
		
			while( fread(lineBuffer,BYTES_IN_LINE, 1, fin) )
		{
			fprintf(fp, "%lld;%d;%d;%d;\n", ((struct DataFrame *)lineBuffer)->timeStamp,((struct DataFrame *)lineBuffer)->pressure,((struct DataFrame *)lineBuffer)->systemState,((struct DataFrame *)lineBuffer)->alarmState);
			
			// anstellen von "printf"s kann man natürlich jetzt das Felder systemStata weiter auspacken..
			// -> BitOps... 
			
		}

	fclose(fin);
	fclose(fp);
	
	}


	return 0;
}
}
