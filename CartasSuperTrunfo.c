int main () {
    //define as propriedades de cada carta (pt1 significa ponto turistico 1)
    int populacao1 = 500000, populacao2 = 400000, area1 = 60000, area2 = 70000, pt1 = 200, pt2 = 60;  
    double pib1 = 1000000000000, pib2 = 8500000000000, pib_pc1, pib_pc2, densidade1, densidade2;
    char cidade[50], estado[50], codigo[30];
    pib_pc1 = pib1 / populacao1;
    pib_pc2 = pib2 / populacao2;
    densidade1 = (float) populacao1 / area1;
    densidade2 = (float) populacao2 / area2;

    printf("PROTÓTIPO DE SUPERTRUNFO \n");
    printf(" \n");

    //Características da Carta 01
    printf("Código da carta: A01 \n", codigo);
    printf("Nome do estado: Santa_Catarina \n", estado);
    printf("Nome da cidade: Florianopolis \n", cidade);
    printf("População: %d Hab. \n", populacao1);
    printf("Área: %dKM² \n", area1);
    printf("Densidade demográfica: %.2fHab/KM² \n", densidade1);
    printf("PIB: R$%.2f \n", pib1);
    printf("PIB Per Capita: R$%.2f \n", pib_pc1);
    printf("Pontor turísticos: %d \n", pt1);

    printf("######################### \n");

    //Características da Carta 02
    printf("Código da carta: A02 \n", codigo);
    printf("Nome do estado: Paraná \n", estado);
    printf("Nome da cidade: Coritiba \n", cidade);
    printf("População: %d Hab. \n", populacao2);
    printf("Área: %dKM² \n", area2);
    printf("Densidade demográfica: %.2fHab/KM² \n", densidade2);
    printf("PIB: R$%.2f \n", pib2);
    printf("PIB Per Capita: R$%.2f \n", pib_pc2);
    printf("Pontor turísticos: %d \n", pt2);


    return 0;
    
}