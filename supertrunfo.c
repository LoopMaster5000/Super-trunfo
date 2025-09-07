//desafio super trunfo nível novato
#include <stdio.h>

int main(){

    //declaração de variáveis da primeira carta do super trunfo

    char estadocarta1;
    char codigocarta1[4];
    char cidadecarta1[10];
    int populacaocarta1;
    float areacarta1;
    float pibcarta1;
    int pontosturisticoscarta1;

    //declaração de variáveis da segunda carta do super trunfo

    char estadocarta2;
    char codigocarta2[4];
    char cidadecarta2[10];
    int populacaocarta2;
    float areacarta2;
    float pibcarta2;
    int pontosturisticoscarta2;
    
    //entrada de dados das informações da primeira carta

    printf("informe o estado da primeira carta: ");
    scanf("%c", &estadocarta1);
    
    printf("informe o codigo da primeira carta: ");
    scanf("%s", codigocarta1);

    printf("informe o nome da cidade da primeira carta: ");
    scanf("%s", cidadecarta1);

    printf("informe o número de habitantes da primeira carta: ");
    scanf("%d", &populacaocarta1);

    printf("informe a área em quilômetros quadrados da primeira carta: ");
    scanf("%f", &areacarta1);

    printf("informe o PIB da primeira carta: ");
    scanf("%f", &pibcarta1);

    printf("informe o número total de pontos turísticos da primeira carta: ");
    scanf("%d", &pontosturisticoscarta1);

    //entrada de dados das informações da segunda carta

    printf("\ninforme o estado da segunda carta: ");
    scanf(" %c", &estadocarta2); /* Quando você lê um caractere ou um número e pressiona Enter,
    a quebra de linha (\n) é deixada no buffer de entrada. Se o próximo scanf espera um 
    caractere ou um número, ele pode ler essa quebra de linha em vez do que você realmente
    quer digitar. Para o scanf ler um caractere (%c), coloquei um espaçoantes do %c no 
    formato: scanf(" %c", &variavel);. Isso instrui o scanf a pular quaisquer
    espaços em branco, incluindo quebras de linha, até encontrar o caractere real.*/
    
    printf("informe o codigo da segunda carta: ");
    scanf("%s", codigocarta2);

    printf("informe o nome da cidade da segunda carta: ");
    scanf("%s", cidadecarta2);

    printf("informe o número de habitantes da segunda carta: ");
    scanf("%d", &populacaocarta2);

    printf("informe a área em quilômetros quadrados da segunda carta: ");
    scanf("%f", &areacarta2);

    printf("informe o PIB da segunda carta: ");
    scanf("%f", &pibcarta2);

    printf("informe o número total de pontos turísticos da segunda carta: ");
    scanf("%d", &pontosturisticoscarta2);

    //saída de dados que exibe os dados das duas cartas

    printf("Os dados da carta 1:\nEstado: %c\nCódigo: %s\n Nome da Cidade: %s\npopulação: %d\n",estadocarta1, codigocarta1, cidadecarta1, populacaocarta1);
    printf("Área: %f\nPIB: %f\nNúmero de pontos turísticos: %d\n\n",areacarta1, pibcarta1, pontosturisticoscarta1);


    printf("Os dados da carta 2:\nEstado: %c\nCódigo: %s\nNome da Cidade: %s\npopulação: %d\n",estadocarta2, codigocarta2, cidadecarta2, populacaocarta2);
    printf("Área: %f\nPIB: %f\nNúmero de pontos turísticos: %d",areacarta2, pibcarta2, pontosturisticoscarta2);

}
