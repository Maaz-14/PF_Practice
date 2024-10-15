#include<stdio.h>
int main(){
	int i,j,n;
	printf("Enter size of Array: ");
	scanf("%d",&n);
	int a[n];
	for (i=0;i<n;i++){
		printf("element-%d: ",i);
		scanf("%d",&a[i]);
		
	}	
	printf("\nThe elements stored in the first array are:\n ");
	for (i=0;i<n;i++){
		printf("%d  ",a[i]);
	}
	int b[n];
	printf("\nThe elements copied into the second array are:\n");
	
	
	for (i=0;i<n;i++){
		b[i]=a[i];
		printf("%d  ",b[i]);
	}
	return 0;
}
// printf("5%d",b[i]) it will do padding (which means the output will be padded with spaces up to 5)

