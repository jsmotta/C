#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main(){
	srand(time(NULL));
	int c=1, n, ma, me, total=0;
	while(c<=500){
	n=rand()%200+1;
	printf("\nValor %i: %i\n",c,n);
	total+=n;

		if(c==1){
			ma=n;
			me=n;
		}
		if(n>ma)
			ma=n;
		if(n<me)
			me=n;
			c++;
	}
	
	printf("\nMaior valor: %i\n",ma);
	printf("Menor valor: %i\n",me);
	printf("Media: %.2f\n",(float)total/--c);
}
