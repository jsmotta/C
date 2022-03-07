#include <stdio.h>
main(){
	int read = 1;
	int num;
	int div = 0;
	while(read <=5){
		printf("Insira o %ind Numero: ", read);
		scanf("%i",&num);
		read++;
		if(num!=0){
			if(num%3==0){
			div++;
		}
			else
			div == 0;
		}
		else
		div == 0;
	}
	printf("\nQuantidade de Numero Divisiveis por 3: ||%i||", div);

	
}
