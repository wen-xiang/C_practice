#include <stdio.h>
 
int main(void) {
	// your code goes here
	int a[] = {1,2,3,4,5,6}; 
	int *p = a; 
 
	*(p++) += 100; 
	*(++p) += 100; 
 
	for(int i = 0; i<6 ; i++) 
		printf("%d\n ",a[i]);
 
 
	return 0;
}