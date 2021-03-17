#include <stdio.h> 
#include <stdlib.h> // For exit() 

int main(int argc, const char* argv[]) 
{ 
if(argc == 1){
printf("no input file for compiling");	
}
else if(argc==2){
	FILE *fptr1, *fptr2; 
	char filename[100], c; 

	
	// Open one file for reading 
	fptr1 = fopen(argv[1], "r"); 
	if (fptr1 == NULL) 
	{ 
		printf("Cannot open file %s \n"); 
		exit(0); 
	} 

	 

	// Open another file for writing 
	fptr2 = fopen("C:\\nslang\\src\\ns.c", "w"); 
	if (fptr2 == NULL) 
	{ 
		printf("Cannot open file %s \n"); 
		exit(0); 
	} 

	// Read contents from file 
	c = fgetc(fptr1); 
	while (c != EOF) 
	{ 
		fputc(c, fptr2); 
		c = fgetc(fptr1); 
	} 

	printf("\n file compiled! For viewing result type:run\n"); 

	fclose(fptr1); 
	fclose(fptr2); 
	return 0; 
}
}
