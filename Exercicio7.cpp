#include <stdio.h>
main(){
	int voto, candidato1 = 0, candidato2 = 0, votonull = 0, votobranco = 0;
	int total;
	do{
		printf("\nVotacao\n");
		printf("\nDigite (1) Para Candidato 1");
		printf("\nDigite (2) Para Candidato 2");
		printf("\nDigite (3) Para Voto Nulo");
		printf("\nDigite (4) Para Voto em Branco\n");
		scanf("%i", &voto);
		if(voto==1){
			candidato1++;
		}	
		if(voto==2){
			candidato2++;
		}
		if(voto==3){	
			votonull++;	
		}
		if(voto==4){
			votobranco++;
		}
	}
	while(voto!=0);
	total=candidato1 + candidato2 + votonull + votobranco;
	printf("\n===RESULTADO===\n");
	printf("Candidato 1: %.2f%%\n", (float)candidato1/total*100);
	printf("Candidato 2: %.2f%%\n", (float)candidato2/total*100);
	printf("Nulos: %.2f%%\n", (float)votonull/total*100);
	printf("Brancos: %.2f%%\n", (float)votobranco/total*100);
	
	
	
}
