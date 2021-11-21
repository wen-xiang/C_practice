#include <stdio.h>
 
struct ListStruct{
    unsigned int DataH;
    unsigned int DataL;
    unsigned int NextPtr;
};
struct ListStruct ListArray[1000];
#define NULL 0xFFFF
unsigned int ListHead = 0;
 
int main(void) {
	// your code goes here
 
	ListArray[0].DataH = 6;
	ListArray[0].DataL = 7;
 
	ListArray[1].DataH = 9;
	ListArray[1].DataL = 10;
 
	for(int i=0; i<2; i++) {
		printf("%d \n", ListArray[i].DataH);
		printf("%d \n", ListArray[i].DataL);
		printf("\n");
	}
 
	return 0;
}