#include <stdio.h>
 
void swap(int* a, int* b ) {
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}
 
int partition(int* arr, int front, int end) {
	int i, j;
	int midNum = arr[end];
	i = front - 1;
	//j = 0;
	for(j=front; j < end; j++) {
		if( arr[j] < midNum ) {
			i++;
			swap( &arr[i], &arr[j] );
		}
	}
	i++;
	swap ( &arr[i], &arr[end] );
	return i;
}
 
void quick_sort(int* arr, int front, int end) {
	int mid;
	if( front < end ) {
		mid = partition(arr, front, end);
		quick_sort(arr, front, mid-1);
		quick_sort(arr, mid+1, end);
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
 
	quick_sort(a, 0, n-1);
 
	printf("\n\n");
	for(i=0;i<n;i++) {
		printf("%d, ", a[i]);
	}
 
 
	return 0;
}