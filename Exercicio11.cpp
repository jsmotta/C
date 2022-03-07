#include <stdio.h>
main(){
	int cont = 1, cont_fat, fat;
	
	do{
		cont_fat =1; 
		fat = 1;
		do{
			fat = fat*cont_fat;
			cont_fat = cont_fat + 1;
		}
		while(cont_fat<=cont);
		printf("\nO Fatorial de %i, sera: %i", cont,fat);
		cont=cont+2;
	}
	while(cont<=10);
}


