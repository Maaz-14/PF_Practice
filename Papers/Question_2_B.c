#include<stdio.h>
int main(){
	int digit,number,a[6];
	printf("Enter Number: ");
	scanf("%d",&number);
	if(number>999999 || number<100000){
		printf("Not a six digit number!! ");
		return 1;
	}
	for(i=5;i>=0;i++){
		digit=number%10;
		number=number/10;
		a[i]=digit;
		
	}
	printf("Digit %d (Starting from MSD): ",a[0]);
	switch (a[0]){
		case 1:
			printf("Item 1 is low in stock, restocking required");
			break;
		case 2:
			printf("Item 1 is out of stock");
			break;
		case 3:
			printf("Item 1 No change.");
			break;
		case 4:
			printf("Item 1 No change.");
			break;
		case 5:
			printf("Item 1 No change.");
			break;
		case 6: 
			printf("Item 1 No change.");
			break;
		case 7:
			printf("Restricted item,access requires manager approval.");
			break;
		default:
			printf("Item 1 No change.");
	
	}
			
	


	return 0;
}


