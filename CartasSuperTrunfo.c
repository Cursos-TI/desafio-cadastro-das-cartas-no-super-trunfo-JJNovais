#include <stdio.h>
// O programa coleta dados sobre duas cidades e exibe as informações de cada uma delas.
int main() {
    // Definição de variáveis para armazenar os dados da cidade.
    char estado;
    char codigo1[3];
    char cidade1[30];
    char codigo2[3];
    char cidade2[30];
    int populacao;
    float area;
    float pib;
    int pontos_turisticos;
    float densidade_populacional;
    float pib_per_capita;
    
    printf("*** Carta 1 ***\n"); // Exibe qual a carta a ser cadastrada.

    // Perguntas sobre os dados da cidade, pedindo que digite o dado em questão.
    printf("Digite uma letra de 'A' a 'H' (representando um dos oito estados): \n");
    scanf("%c", &estado);

    printf("Digite a letra do estado seguida de um número de 01 a 04 (ex: A01, B03): \n");
    scanf("%s", codigo1);

    printf("Digite o nome da cidade: \n");
    scanf("%s", cidade1);

    printf("Digite o número de habitantes da cidade: \n");
    scanf("%d", &populacao);

    printf("Digite a área da cidade em quilômetros quadrados: \n");
    scanf("%f", &area);

    printf("Digite o Produto Interno Bruto (PIB) da cidade em bilhões de reais: \n");
    scanf("%f", &pib);

    printf("Digite a quantidade de pontos turísticos da cidade: \n");
    scanf("%d", &pontos_turisticos);

    // Cálculo da densidade populacional e do PIB per capita.
    densidade_populacional = (float) populacao / area;
    pib_per_capita = (float) (pib * 1000000000) / populacao;
    /* Como o PIB foi digitado em bilhões, 
    multiplicamos por 1 bilhão para 
    obter o valor do pib per capita em reais.*/ 

    printf("\n");
    // Exibição dos dados recolhidos anteriormente sobre a cidade, para a primeira carta.
    printf("Carta 1:\n");
    printf("Estado: %c\n", estado);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f bilhões de reais\n", pib);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita);

    printf("\n");
    
    printf("*** Carta 2 ***\n"); // Exibe qual a carta a ser cadastrada (no caso agora a segunda carta).
    
    // Perguntas sobre os dados da cidade, pedindo que digite o dado em questão.
    printf("Digite uma letra de 'A' a 'H' (representando um dos oito estados): \n");
    scanf(" %c", &estado); 
    
    printf("Digite a letra do estado seguida de um número de 01 a 04 (ex: A01, B03): \n");
    scanf("%s", codigo2);

    printf("Digite o nome da cidade: \n");
    scanf("%s", cidade2);

    printf("Digite o número de habitantes da cidade: \n");
    scanf("%d", &populacao);

    printf("Digite a área da cidade em quilômetros quadrados: \n");
    scanf("%f", &area);

    printf("Digite o Produto Interno Bruto (PIB) da cidade em bilhões de reais: \n");
    scanf("%f", &pib);

    printf("Digite a quantidade de pontos turísticos da cidade: \n");
    scanf("%d", &pontos_turisticos);

    // Cálculo da densidade populacional e do PIB per capita.
    densidade_populacional = (float) populacao / area;
    pib_per_capita = (float) (pib * 1000000000) / populacao; 
    /* Como o PIB foi digitado em bilhões, 
    multiplicamos por 1 bilhão para 
    obter o valor do pib per capita em reais.*/ 

    printf("\n");
    // Exibição dos dados recolhidos anteriormente sobre a cidade, para a segunda carta.
    printf("Carta 2:\n");
    printf("Estado: %c\n", estado);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f bilhões de reais\n", pib);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita);

    return 0;
    // Fim do programa.
}
