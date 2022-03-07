#include <stdio.h>
main(){
	int nota, notatot,div = 0, null = 0;
	int media;
	
	do{
		printf("Insira o Valor da Nota: ");
		scanf("%i", &nota);
		if(nota%2==0 && nota!=0){
			div++;
			notatot+=nota;
		}
			
	}while(nota>0);
		printf("Valor: %.2f", (float)notatot/div);	

	

}



