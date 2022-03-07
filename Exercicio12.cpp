#include<stdio.h>
	main(){
	float qval, n, f=1, c=1;
	printf("Qtde. de calculos: ");
	scanf("%f",&qval);
	while(qval>=1){
		f=1;
		c=1;
		printf("\nNumero: ");
		scanf("%f",&n);
		while(c<=n){
		f*=c; 
		c++;
	}
	printf("Fatorial %.f! = %.f\n",n,f);
	qval--;
	}
}