// How to read and print elements of a C array of any size?
#include<stdio.h>
int main()
{
	int n,i;
	printf("Enter the size of the array: ");
	scanf("%d",&n);
	int a[n];
	for (i=0;i<n;i++){
		printf("Element-%d: ",i);
		scanf("%d",&a[i]);
		
	}
	printf("Elements in the array are: ");
	for (i=0;i<n;i++){
		printf("%d ",a[i]);
	}
	return 0;
	
}
