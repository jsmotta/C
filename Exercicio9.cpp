#include<stdio.h>

    main(){
        char resp, nome[20];
        float larg, comp, area, total=0;
        do{
        printf("\n\nNome comodo: ");
        scanf(" %s",&nome);
        printf("Largura: ");
        scanf("%f", &larg);
        printf("Comprimento: ");
        scanf("%f", &comp);
        area=larg*comp;
        printf("\nTotal da(o) %s = %.2f mts\n", nome, area);
        total+=area; // total = total + area
        printf("\nDeseja continuar (s/n)? ");
        scanf(" %c", &resp);}
        while(resp=='s' || resp=='S');
            printf("\n\nTOTAL RESIDENCIA: %.2f mts\n",total);
}
