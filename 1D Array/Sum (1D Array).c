//Write a program in C to find the sum of all elements of the array.
#include<stdio.h>
int main(){
	int i,j,num[3];
	int sum=0;
	
	for(i=0;i<3;i++){
		printf("element- %d: ",i);
		scanf("%d",&num[i]);
		
		j=num[i]; // OR sum=sum+num[i];
		sum=sum+j;
	}
	printf("\n Sum of all elements stored in the array is: %d",sum);
	
	return 0;
}

