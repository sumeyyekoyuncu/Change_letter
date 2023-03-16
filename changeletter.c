#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a,newletter;
	printf("entry a letter \n");
	scanf("%c",&a);
	if(a>=97 && a<=122){
		newletter=a-32;
	}
	else
	{
		newletter=a+32;
	}
	printf("%c",newletter);
	return 0;
}