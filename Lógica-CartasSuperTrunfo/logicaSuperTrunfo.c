#include <stdio.h>
#include <string.h>

int main(){
    
    // Atributos - Define os detalhes das cartas.
    char estado_1 ='A';
    char estado_2 = 'B';
    char codigo_1[20] = "A01";
    char codigo_2[20] = "B02";
    char nome_cidade_1[50] = "Florianopolis";
    char nome_cidade_2[50] = "Sao Paulo";
    int num_pontos_turisticos_1 = 42, num_pontos_turisticos_2 = 15;
    float area_1 = 675.410;
    float area_2 = 1521.202;
    float pib_1 = 21312446;
    float pib_2 = 748759007;
    unsigned long int populacao_1 = 1323850 , populacao_2 = 11451999;
    float densidadePopulacional_1, densidadePopulacional_2, pibPerCapita_1, pibPerCapita_2, inversoDensidadePopulacional_1,  inversoDensidadePopulacional_2;
    float superPoder_1, superPoder_2;

    // cálculos - Determina qual é maior e o bonus de super-poder de cada carta.
    densidadePopulacional_1 = (float)populacao_1/area_1;
    densidadePopulacional_2 = (float)populacao_2/area_2;

    pibPerCapita_1 = (float)pib_1/populacao_1;
    pibPerCapita_2 = (float)pib_2/populacao_2;
   
    inversoDensidadePopulacional_1 = area_1 / (float)densidadePopulacional_1;
    inversoDensidadePopulacional_2 = area_2 / (float)densidadePopulacional_2;

    superPoder_1 = (float)populacao_1 + area_1 + pib_1 + (float)num_pontos_turisticos_1 + pibPerCapita_1 + inversoDensidadePopulacional_1;
    superPoder_2 = (float)populacao_2 + area_2 + pib_2 + (float)num_pontos_turisticos_2 + pibPerCapita_2 + inversoDensidadePopulacional_2;

    printf("--------------------------------------------------------------\n");
    printf("                         SUPER TRUNFO                         \n");
    printf("--------------------------------------------------------------\n");

    printf("\n"); 

    printf("--------------------------------------------------------------\n");
    printf("                  Bem vindo ao Super Trunfo!!                 \n");
    printf("--------------------------------------------------------------\n");
    printf("    O Super Trunfo eh um jogo de Cartas, com 2 competidores.\n");
    printf("O tema principal é Cidades e seus atributos, ex: (populacao, \n");
    printf("area, PIB...). Os atributos sao comparados entre as duas \n");
    printf("cartas e ganha o atributo com o maior valor, exceto o \n");
    printf("atributo DENSIDADE, que nesse caso ganha o de menor valor.\n");
    printf("    Boa Sorte!!! \n");
    printf("--------------------------------------------------------------\n");

    printf("--------------------------------------------------------------\n");
    printf("                      Cartas Cadastradas:                     \n");
    printf("--------------------------------------------------------------\n");

    // SAÍDA DAS CARTAS CADASTRADAS 
    printf("--------------------------------------------------------------\n");
    printf("                            CARTA 1                           \n");
    printf("--------------------------------------------------------------\n");
    printf("            ESTADO: %c\n", estado_1);
    printf("            CODIGO: %s\n", codigo_1);
    printf("            NOME DA CIDADE: %s\n", nome_cidade_1);
    printf("            POPULACAO: %lu\n", populacao_1);
    printf("            AREA: %.2f km ao quadrado\n", area_1);
    printf("            PIB: %.2f bilhoes de reais\n", pib_1);
    printf("            NUMERO DE PONTOS TURISTICOS: %d\n", num_pontos_turisticos_1);
    printf("            DENSIDADE POPULACIONAL: %.2f hab/km ao quadrado\n", densidadePopulacional_1);
    printf("            PIB per Capita: %.2f reais\n", pibPerCapita_1);
    printf("            SUPER PODER: %.2f \n", superPoder_1);
    printf("--------------------------------------------------------------\n"); 

    printf("\n"); 

    printf("--------------------------------------------------------------\n");
    printf("                            CARTA 2                           \n");
    printf("--------------------------------------------------------------\n");
    printf("            ESTADO: %c\n", estado_2);
    printf("            CODIGO: %s\n", codigo_2);
    printf("            NOME DA CIDADE: %s\n", nome_cidade_2);
    printf("            POPULACAO: %lu\n", populacao_2);
    printf("            AREA: %.2f km quadrado\n", area_2);
    printf("            PIB: %.2f  bilhoes de reais\n", pib_2);
    printf("            NUMERO DE PONTOS TURISTICOS: %d\n", num_pontos_turisticos_2);
    printf("            DENSIDADE POPULACIONAL: %.2f hab/km quadrado\n", densidadePopulacional_2);
    printf("            PIB per Capita: %.2f reais\n", pibPerCapita_2);
    printf("            SUPER PODER: %.2f \n", superPoder_2);
    printf("-------------------------------------------------------------\n");

    // menu interativo
    int opcao;
    printf("--------------------------------------------------------------\n");
    printf("                              MENU                            \n");
    printf("--------------------------------------------------------------\n");
    printf("1. Nome das Cidades\n");
    printf("2. Populacao\n");
    printf("3. Area\n");
    printf("4. PIB\n");
    printf("5. Numero de Pontos Turisticos\n");
    printf("6. Densidade Populacional\n");
    printf("Escolha a opcao (1 - 6): ");
    scanf("%d", &opcao);
    printf("--------------------------------------------------------------\n");

    printf("\n");

    switch (opcao) {
        case 1:
            printf("--------------------------------------------------------------\n");
            printf("                           Carta 1                            \n");
            printf("                         Cidade: %s                           \n", nome_cidade_1);
            printf("                           Carta 2                            \n");
            printf("                         Cidade: %s                           \n", nome_cidade_2);
            printf("--------------------------------------------------------------\n");
            break;
        case 2:
            printf("--------------------------------------------------------------\n");
            printf("                    COMPARACAO DA POPULACAO                   \n");
            printf("--------------------------------------------------------------\n");
            printf("                      Carta 1 - %s                           \n", nome_cidade_1);
            printf("                       Populacao: %lu           \n", populacao_1);
            printf("                      Carta 2 - %s                           \n", nome_cidade_2);
            printf("                       Populacao: %lu           \n", populacao_2);
            printf("--------------------------------------------------------------\n");
            if (populacao_1 > populacao_2) {
                printf("                     ### Carta 1 VENCEU ###\n");
            } else if (populacao_1 < populacao_2) {
                printf("                     ### Carta 2 VENCEU ###\n");
            } else {
                printf("EMPATE!");
            }
            printf("--------------------------------------------------------------\n");
            break;
        case 3:
            printf("--------------------------------------------------------------\n");
            printf("                      COMPARACAO DA AREA                      \n");
            printf("--------------------------------------------------------------\n");
            printf("                      Carta 1 - %s                            \n", nome_cidade_1);
            printf("                       Area: %f                               \n", area_1);
            printf("                      Carta 2 - %s                            \n", nome_cidade_2);
            printf("                       Area: %f                               \n", area_2);
            printf("--------------------------------------------------------------\n");
            if (area_1 > area_2) {
                printf("                     ### Carta 1 VENCEU ###\n");
            } else if (area_1 < area_2) {
                printf("                     ### Carta 2 VENCEU ###\n");
            } else {
                printf("                       EMPATE!\n");
            }
            printf("--------------------------------------------------------------\n");
            break;
        case 4:
        printf("--------------------------------------------------------------\n");
        printf("                       COMPARACAO DO PIB                      \n");
        printf("--------------------------------------------------------------\n");
        printf("                      Carta 1 - %s                            \n", nome_cidade_1);
        printf("                      PIB: %f                                 \n", pib_1);
        printf("                      Carta 2 - %s                            \n", nome_cidade_2);
        printf("                      PIB: %f                                 \n", pib_2);
        printf("--------------------------------------------------------------\n");    
        if (pib_1 > pib_2) {
                printf("                      ### Carta 1 VENCEU ###\n");
            } else if (pib_1 < pib_2) {
                printf("                      ### Carta 2 VENCEU ###\n");
            } else {
                printf("                      EMPATE!");
            }
            printf("--------------------------------------------------------------\n");
            break;
        case 5:
            printf("--------------------------------------------------------------\n");
            printf("               COMPARACAO DOS PONTOS TURISTICOS               \n");
            printf("--------------------------------------------------------------\n");
            printf("                      Carta 1 - %s                            \n", nome_cidade_1);
            printf("               Numeros de Pontos Turisticos: %d               \n", num_pontos_turisticos_1);
            printf("                      Carta 2 - %s                            \n", nome_cidade_2);
            printf("               Numeros de Pontos Turisticos: %d               \n", num_pontos_turisticos_2);
            printf("--------------------------------------------------------------\n");
            if (num_pontos_turisticos_1 > num_pontos_turisticos_2) {
                printf("                      ### Carta 1 VENCEU ###\n");
            } else if (num_pontos_turisticos_1 < num_pontos_turisticos_2) {
                printf("                      ### Carta 2 VENCEU ###\n");
            } else {
                printf("                      EMPATE!");
            }
            printf("--------------------------------------------------------------\n");
            break;
        case 6:
            printf("--------------------------------------------------------------\n");
            printf("              COMPARACAO DA DENSIDADE DEMOGRAFICA             \n");
            printf("--------------------------------------------------------------\n");
            printf("                      Carta 1 - %s                            \n", nome_cidade_1);
            printf("               Densidade Demografica: %.2f                    \n", densidadePopulacional_1);
            printf("                      Carta 2 - %s                            \n", nome_cidade_2);
            printf("               Densidade Demografica: %.2f                    \n", densidadePopulacional_2);
            printf("--------------------------------------------------------------\n");
            if (densidadePopulacional_1 < densidadePopulacional_2) {
                printf("                    ### Carta 1 VENCEU ###\n");
            } else if (densidadePopulacional_1 > densidadePopulacional_2) {
                printf("                    ### Carta 2 VENCEU ###\n");
            } else {
                printf("                      EMPATE!");
            }
            printf("--------------------------------------------------------------\n");
            break;
        default:
            printf("--------------------------------------------------------------\n");
            printf("                       Opcao Invalida                         \n");
            printf("--------------------------------------------------------------\n");
            break;
    }

    return 0;
}
