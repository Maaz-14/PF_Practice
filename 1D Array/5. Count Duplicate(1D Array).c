#include<stdio.h>
int main(){
	int i,n,j,count=0;
	
	printf("Enter the size of array: ");
	scanf("%d",&n); // n=4
	int a[n];
	for (i=0;i<n;i++){
		printf("element-%d: ",i);
		scanf("%d",&a[i]);
		
	}
	for (i=0;i<n;i++){
		for (j = i + 1; j < n; j++){ // j=1 2 3 4 at i=0 (j=i+1 will be equal to 1 then it will iterate.)
			if (a[i]==a[j]){
				count=count+1;
				//printf("%d %d\n ",a[i],a[j]);
				break; // Exit the inner loop as soon as a duplicate is found
			}
		}
	}
	printf("\nTotal number of duplicate elements found in the array is: %d",count);
	return 0;
}
//Without the break statement, the inner loop would continue to iterate and find additional duplicates of the same element.
// This would lead to incorrect counting, as the same duplicate element would be counted multiple times.
//By using break, the program ensures that each duplicate element is counted only once. As soon as a duplicate is found
//, the inner loop exits, and the outer loop moves on to the next element.
