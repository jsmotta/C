#include <stdio.h>
main(){
	int i=92, j, qdiv;
	while(i<=147800){
		j=2;
		qdiv=0;
		while(j<=i/2){
		if(i%j==0){
		qdiv++;
		break;
		}
		j++;
		}
		if(qdiv==0){
		printf("Primo: %i\n",i);}
		i++;
	}
}
