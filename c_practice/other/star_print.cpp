#include <stdio.h>
 
int main(void) {
	// your code goes here
	int i, j;
	int temp=0;
 
	/*for(i=0; i <5;i++) {
		printf("*");
	}*/
	for(i=0; i <5;i++) {
		for(j=1; j <= 5; j++) {
			if( j-4+temp >0 ) {
				printf("*");
			}else{
				printf(" ");
			}
		}
		printf("\n");
		temp++;
	}
 
	return 0;
}