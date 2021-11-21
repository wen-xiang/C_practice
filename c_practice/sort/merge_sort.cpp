#include <stdio.h>
#include <stdlib.h>
 
int _max = 100;
 
void merge(int* arr, int front, int mid, int end) {
	int leftIndex = 0;
	int rightIndex = 0;
	int* leftArr;
	int* rightArr;
	int i,j;
 
	leftArr  = calloc( (mid-front+1)+1, sizeof(int));
	rightArr = calloc( (end-mid)+1, sizeof(int));
 
	j=0;
	for(i=front;i<=mid;i++) {
		leftArr[j] = arr[i];
		j++;
	}
	leftArr[j] = _max;
 
	j=0;
	for(i=mid+1;i<=end;i++) {
		rightArr[j] = arr[i];
		j++;
	}
	rightArr[j] = _max;
 
	for(i=front;i<=end;i++) {
		if( leftArr[leftIndex] < rightArr[rightIndex] ) {
			arr[i] = leftArr[leftIndex];
			leftIndex++;
		} else {
			arr[i] = rightArr[rightIndex];
			rightIndex++;
		}
	}
 
}
 
 
void merge_sort(int* arr, int front, int end) {
	int mid;
	if(front<end) {
		mid = (front + end)/2;
		merge_sort(arr, front, mid);
		merge_sort(arr, mid+1, end);
		merge(arr, front, mid, end);
	}
}
 
int main(void) {
	int i;
	int n=9;
	// your code goes here
	int a[]={8,9,6,5,4,3,2,7,1};
 
	for(i=0;i<n;i++) {
		printf("%d, ", a[i]);
	}
 
	merge_sort(a, 0, n-1);
 
	printf("\n\n");
	for(i=0;i<n;i++) {
		printf("%d, ", a[i]);
	}
 
 
	return 0;
}