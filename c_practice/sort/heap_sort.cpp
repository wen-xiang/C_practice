#include <stdio.h>
 
void swap(int* a, int* b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}
 
void MaxHeapify(int* arr, int root, int length) {
	int liftIndex = 2*root;
	int rightIndex = 2*root+1;
	int largest;
 
	if( liftIndex <= length && arr[liftIndex] > arr[root]) {
		largest = liftIndex;
	} else {
		largest = root;
	}
	if( rightIndex <= length && arr[rightIndex] > arr[largest]) {
		largest = rightIndex;
	} 
 
	if( largest != root ) {
		swap( &arr[largest], &arr[root] );
		MaxHeapify( arr, largest, length );
	}
}
 
void BuildMaxHeap(int* arr, int length) {
	for(int i= length/2; i>=1; i--) {
		MaxHeapify(arr, i, length);
	}
}
 
void heap_sort(int* arr, int length) {
	int i;
	int size = length;
	BuildMaxHeap(arr, length);
	/*printf("\nXXX:");
	for(i=0;i<length+1;i++) {
		printf("%d, ", arr[i]);
	}*/
 
	for(i=length; i>=2; i--) {
		swap( &arr[1], &arr[i] );
		size--;
		MaxHeapify( arr, 1, size );
	}
 
}
 
int main(void) {
	int i;
	int n=9;
	// your code goes here
	int a[]={0,8,9,6,5,4,3,2,7,1};
	int* b = &a[1];
 
	for(i=0;i<n+1;i++) {
		printf("%d, ", a[i]);
	}
 
	printf("\n");
	for(i=0;i<n;i++) {
		printf("%d, ", b[i]);
	}
 
	heap_sort(a, n);
 
	printf("\n\n");
	for(i=0;i<n;i++) {
		printf("%d, ", b[i]);
	}
 
 
	return 0;
}