//Write a program in C to read n number of values in an array and display them in reverse order.
#include<stdio.h>
int main(){
	int i,n;
	printf("Enter size of array: ");
	scanf("%d",&n); // 4 for example
	int a[n];
	for (i=0;i<n;i++){
		printf("element-%d: ",i);
		scanf("%d",&a[i]);
		
	}
	printf("Array in order is: ");
	for (i=0;i<n;i++){ //0 1 2 3  
		printf("%d  ",a[i]); // 1 2 3 4 
	}
	printf("\nArray in reverse order is: ");
	for(i=n-1;i>=0;i--){ // i=3 2 1 0 // DOING i=n means it is starting from 4 which is not in array 
	                                // as array starts from 0 1 2 3 (so it will take dummy value ) Hence program will not run PROPERLY!!
		printf("%d  ",a[i]); // 4 3 2 1
	}
	return 0;
}


