#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.


    
    //carta n1
    char codigocidadeum[5], nomeum[50];
    int populacaoum, pontosturisticosum;
    float areaum, densidadepopum;
    double pibum, pibcapitaum;

    //carta n2
    char codigocidadedois[5], nomedois[50];
    int populacaodois, pontosturisticosdois;
    float areadois, densidadepopdois;
    double pibdois, pibcapitadois;
    


    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.



    //Leitura dos dados da carta1 do usuário.
    printf("Digite o código da cidade 1: ");
    scanf("%s", codigocidadeum);

    printf("Digite o nome da cidade 1: ");
    scanf("%s", nomeum);

    printf("Digite a população da cidade 1: ");
    scanf("%d", &populacaoum);

    printf("Digite o número de pontos turísticos da cidade 1: ");
    scanf("%d", &pontosturisticosum);

    printf("Digite a área da cidade 1 em km²: ");
    scanf("%f", &areaum);

    printf("Digite o PIB da cidade 1: ");
    scanf("%lf", &pibum);


    //calculos carta n1
    densidadepopum = populacaoum / areaum;
    pibcapitaum = pibum / populacaoum;


     // Retorno dos dados da carta1 do usuário.
    printf("Dados da Carta 1 \n");
    printf("Código da cidade: %s\n", codigocidadeum);
    printf("Nome da cidade: %s\n", nomeum);
    printf("População da cidade: %d habitantes\n", populacaoum);
    printf("Pontos turísticos: %d\n", pontosturisticosum);
    printf("Área da cidade: %.2f km²\n", areaum);
    printf("PIB da cidade: R$%.2f\n", pibum); 
    printf("Densidade populacional: %.1f\n", densidadepopum);
    printf("PIB per capita: R$%.2f\n", pibcapitaum); 



    //Leitura dos dados da carta2 do usuário.
    printf("Digite o código da cidade 2: ");
    scanf("%s", codigocidadedois);

    printf("Digite o nome da cidade 2: ");
    scanf("%s", nomedois);

    printf("Digite a população da cidade 2: ");
    scanf("%d", &populacaodois);

    printf("Digite o número de pontos turísticos da cidade 2: ");
    scanf("%d", &pontosturisticosdois);

    printf("Digite a área da cidade 2 em km²: ");
    scanf("%f", &areadois);

    printf("Digite o PIB da cidade 2: ");
    scanf("%lf", &pibdois);


    //calculos carta n2
    densidadepopdois = populacaodois / areadois;
    pibcapitadois = pibdois / populacaodois;

     // Retorno dos dados da carta2 do usuário.
    printf("Dados da Carta 2\n");
    printf("Código da cidade: %s\n", codigocidadedois);
    printf("Nome da cidade: %s\n", nomedois);
    printf("População da cidade: %d habitantes\n", populacaodois);
    printf("Pontos turísticos: %d\n", pontosturisticosdois);
    printf("Área da cidade: %.2f km²\n", areadois); 
    printf("PIB da cidade: R$%.2f\n", pibdois);
    printf("Densidade populacional: %.1f\n", densidadepopdois); 
    printf("PIB per capita: R$%.2f\n", pibcapitadois); 

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
