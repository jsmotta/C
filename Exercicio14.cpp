#include<stdio.h>
	main(){	
	int seq1=1, seq2, sdiv;
	while(seq1<=800){
		seq2=1;
		sdiv=0;
		while(seq2<seq1){
			if(seq1%seq2==0){
				sdiv+=seq2;
			}
		seq2++;
	}
		if(seq1==sdiv){printf("Numero Perfeito: %i\n",seq1);}
		seq1++;
	}
}
