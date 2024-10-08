#include<stdio.h>
int main(){
	int i;
	printf("Number from 0 to 10: \n");
	i=0;
	while(i<=10){
		printf("%d  ",i); // Space b/w each number
		i++;
	}
	
	i=10;
	printf("\n");
	printf("\nNumbers from 10 to 0: \n");
	while(i>=0){
		printf("%d ",i);
		i--;
	}
return 0;

}

