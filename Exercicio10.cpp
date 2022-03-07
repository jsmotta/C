#include <stdio.h>
main(){
	int num,f = 1;
	printf("Insira o  um Numero Inteiro: ");
	scanf("%i", &num);
	while(num>0){
		f*= num--;
	}
	printf("\nValor de F: %i", f);
	
}

