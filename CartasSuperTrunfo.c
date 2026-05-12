#include <stdio.h>

int main () {
    //define as propriedades de cada carta (pt1 significa ponto turistico 1)
    int populacao1 = 500000, populacao2 = 400000, area1 = 60000, area2 = 70000, pt1 = 200, pt2 = 60, opcao, escolhas;  
    double pib1 = 1000000000000, pib2 = 8500000000000, pib_pc1, pib_pc2, densidade1, densidade2;
    char cidade[50], estado[50], codigo[30];
    pib_pc1 = pib1 / populacao1;
    pib_pc2 = pib2 / populacao2;
    densidade1 = (float) populacao1 / area1;
    densidade2 = (float) populacao2 / area2;

    double superpoderA, superpoderB;

    printf("PROTÓTIPO DE SUPERTRUNFO \n");
    printf("Escolha uma opção: \n");
    printf("1. Iniciar jogo \n");
    printf("2. Como Jogar? \n");
    printf("3. Sair do jogo \n");
    scanf("%d", &opcao);
    printf(" \n");

    switch (opcao){
    case 1: 
    //Características da Carta 01
        printf("Código da carta: A01 \n", codigo);
        printf("Nome do estado: Santa_Catarina \n", estado);
        printf("Nome da cidade: Florianopolis \n", cidade);
        printf("1. População: %d Hab. \n", populacao1);
        printf("2. Área: %dKM² \n", area1);
        printf("3. Pontos turísticos: %d \n", pt1);
        printf("4. PIB: R$%.2f \n", pib1);
        printf("5. PIB Per Capita: R$%.2f \n", pib_pc1);
        printf("6. Densidade demográfica: %.2fHab/KM² \n", densidade1);
        break;
    case 2: printf("Como jogar: O jogador irá escolher um atributo da carta selecionando o número correspondente. O atributo será comparado ao atributo da carta adversária e o maior/melhor vencerá! Bom jogo! \n");
        printf(" \n");
        printf("Código da carta: A01 \n", codigo);
        printf("Nome do estado: Santa_Catarina \n", estado);
        printf("Nome da cidade: Florianopolis \n", cidade);
        printf("1. População: %d Hab. \n", populacao1);
        printf("2. Área: %dKM² \n", area1);
        printf("3. Pontos turísticos: %d \n", pt1);
        printf("4. PIB: R$%.2f \n", pib1);
        printf("5. PIB Per Capita: R$%.2f \n", pib_pc1);
        printf("6. Densidade demográfica: %.2fHab/KM² \n", densidade1);
        break;
    case 3: printf("Você saiu do jogo! \n");  
        return 0;
    default: printf("Opção Inválida \n");
        break;
    }

    superpoderA = populacao1 + area1 + pib1 + pib_pc1 + pt1 * (1 / densidade1);
    superpoderB = populacao2 + area2 + pib2 + pib_pc2 + pt2 * (1 / densidade2);
    printf(" \n");
    printf("Escolha seu atributo! \n");
    scanf("%d", &escolhas);

    switch(escolhas){
    case 1: if(populacao1 > populacao2){
        printf("População: Você venceu! \n");
    }
    else{
        printf("População: Você perdeu!! \n");
    }
        break;
    case 2: if(area1 > area2){
        printf("Área: Você venceu!! \n");
    }
    else{
        printf("Área: Você perdeu!! \n");
    }
        break;
    case 3:  if(pt1 > pt2){
        printf("Pontos turísticos: Você venceu!! \n");
    }
    else{
        printf("Pontos turísticos: Você perdeu!! \n");
    }
        break;
    case 4: if(pib1 > pib2){
        printf("PIB: Você venceu!! \n");
    }
    else{
        printf("PIB: Você perdeu!! \n");
    }
        break;
    case 5:  if(pib_pc1 > pib_pc2){
        printf("PIB Per Capita: Você venceu!! \n");
    }
    else{
        printf("PIB Per Capita: Você perdeu!! \n");
    }
        break;
    case 6:  if(densidade1 < densidade2){
        printf("Densidade demográfica: Você venceu!! \n");
    }
    else{
        printf("Densidade demográfica: Você perdeu!! \n");
    }
        break;
    default: printf("Opção Inválida");
        break;
    }



    return 0;
    
}