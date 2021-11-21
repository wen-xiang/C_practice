#include <stdio.h>
#include <stdlib.h>
 
int main(void) {
	// your code goes here
	int i, j;
	int grid[12][12];
	int n;
 
	srand( time(0) );
 
	for( i=1; i<=10; i++) {
		for( j=1; j<=10; j++ ) {
			if( (rand()%5) == 0 ) {
				grid[i][j] = 9;
			} else {
				grid[i][j] = 0;
			}
		}
	}
 
	for( i=1; i<=10; i++) {
		printf("|");
		for( j=1; j<=10; j++ ) {
			n=0;
			if( grid[i][j]==9 ) {
				printf("*");
				printf("|");
				continue;
			}
			if( grid[i-1][j-1]==9 ) n++;
			if( grid[i-1][j]==9 ) n++;
			if( grid[i-1][j+1]==9 ) n++;
			if( grid[i][j-1]==9 ) n++;
			if( grid[i][j+1]==9 ) n++;
			if( grid[i+1][j-1]==9 ) n++;
			if( grid[i+1][j]==9 ) n++;
			if( grid[i+1][j+1]==9 ) n++;
 
			grid[i][j] = n;
 
			printf("%d", grid[i][j]);
			printf("|");
		}
 
		printf("\n");
	}
 
 
 
 
	return 0;
}