#include <stdio.h>
main(){
	int num, mult = 1;
	
	printf("Insira um Numero: ");
	scanf("%i", &num);
	do{
		printf("\n (%ix%i) =  %i",num,mult,num*mult);
		mult++;
	}
	while(mult <=10);
	printf("\nFim da Tabuada!");
	
}
