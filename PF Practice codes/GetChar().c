#include<stdio.h>
int main(){
	char a ,b,c,d;
	printf("Enter a Character\n");
	a=getchar();
	getchar(); // if we remove this; then it will not enter the second character.
	printf("Enter a Character\n");
	b=getchar();
	getchar();
	printf("Enter a Character\n");
	c=getchar();
	getchar();
	printf("Enter a Character\n");
	d=getchar();
	printf("%c %c %c %c",a,b,c,d);
	return 0;
}
//when a=getchar() is used It stores a character and a new line in buffer. So we are using getchar(); to remove that new line (Not storing it in any variable) 
// so that we can input an another character and store it on b variable.
