#include <stdio.h>
main(){
	int seq = 1000 ;
	do{
		if(seq%11==5){
			printf("\n %i Dividido por 11 Resulta em 5\n", seq);
		}	
		seq++;
	}	
	while(seq<=2000);

}
