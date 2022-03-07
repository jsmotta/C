#include <stdio.h>
main(){
	int control = 1;
	int num;
	int neg = 0;
	while(control <=5){
		printf("Insira o %ind Numero: ", control);
		scanf("%i",&num);
		control++;
		if(num < 0){
			neg++;
		}
		else
		neg == 0;
	}
	printf("\n%i Numeros Negativos", neg);
	
}
