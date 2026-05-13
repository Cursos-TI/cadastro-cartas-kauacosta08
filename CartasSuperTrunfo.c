#include <stdio.h>

int main() {
    // 1. DADOS DAS CARTAS
    int pop1 = 500000, pop2 = 400000;
    int area1 = 60000, area2 = 70000;
    int pt1 = 200, pt2 = 60;
    double pib1 = 1000000000000, pib2 = 8500000000000;
    double pib_pc1 = pib1 / pop1, pib_pc2 = pib2 / pop2;
    double dens1 = (double)pop1 / area1, dens2 = (double)pop2 / area2;

    int escolha1, escolha2;
    double v1A, v1B, v2A, v2B; // Variáveis para guardar os valores escolhidos

    printf("--- SUPER TRUNFO: NÍVEL MESTRE ---\n");
    
    // MENU DO PRIMEIRO ATRIBUTO
    printf("Escolha o 1º Atributo:\n1. Populacao\n2. Area\n3. Pontos Turisticos\n4. PIB\n5. PIB Per Capita\n6. Densidade\nOpcao: ");
    scanf("%d", &escolha1);

    // MENU DO SEGUNDO ATRIBUTO
    printf("\nEscolha o 2º Atributo (diferente do %d): ", escolha1);
    scanf("%d", &escolha2);

    // VALIDAÇÃO DE ATRIBUTO REPETIDO
    if (escolha1 == escolha2) {
        printf("\nERRO: Voce escolheu o mesmo atributo! Reinicie.\n");
        return 0;
    }

    // SWITCH PARA O ATRIBUTO 1 (Preenche v1A e v1B)
    switch(escolha1) {
        case 1: v1A = pop1; v1B = pop2; break;
        case 2: v1A = area1; v1B = area2; break;
        case 3: v1A = pt1; v1B = pt2; break;
        case 4: v1A = pib1; v1B = pib2; break;
        case 5: v1A = pib_pc1; v1B = pib_pc2; break;
        case 6: v1A = dens1; v1B = dens2; break;
        default: printf("Opcao 1 invalida!\n"); return 0;
    }

    // SWITCH PARA O ATRIBUTO 2 (Preenche v2A e v2B)
    switch(escolha2) {
        case 1: v2A = pop1; v2B = pop2; break;
        case 2: v2A = area1; v2B = area2; break;
        case 3: v2A = pt1; v2B = pt2; break;
        case 4: v2A = pib1; v2B = pib2; break;
        case 5: v2A = pib_pc1; v2B = pib_pc2; break;
        case 6: v2A = dens1; v2B = dens2; break;
        default: printf("Opcao 2 invalida!\n"); return 0;
    }

    // CÁLCULO DAS SOMAS
    double soma1 = v1A + v2A;
    double soma2 = v1B + v2B;

    // EXIBIÇÃO DOS RESULTADOS (REQUISITO: NOME, ATRIBUTOS E VALORES)
    printf("\n--- RESULTADO DO DUELO ---\n");
    printf("Carta 1 (Florianopolis): Atributo 1: %.2f | Atributo 2: %.2f | SOMA: %.2f\n", v1A, v2A, soma1);
    printf("Carta 2 (Adversaria): Atributo 1: %.2f | Atributo 2: %.2f | SOMA: %.2f\n", v1B, v2B, soma2);

    // COMPARATIVO FINAL (TRATANDO EMPATE)
    if (soma1 > soma2) {
        printf("\nRESULTADO: CARTA 1 VENCEU!\n");
    } else if (soma2 > soma1) {
        printf("\nRESULTADO: CARTA 2 VENCEU!\n");
    } else {
        printf("\nRESULTADO: EMPATE!\n");
    }

    return 0;
}