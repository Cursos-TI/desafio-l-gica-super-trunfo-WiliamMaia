#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

	char estado1, estado2;
    char nomedoestado1[20], nomedoestado2[20];
    char codigo1[4], codigo2[4];
    char nomedacidade1[20], nomedacidade2[20];
    unsigned int populacao1, populacao2;
    double area1, area2;
    long double PIB1, PIB2;
    int numerodepontosturisticos1, numerodepontosturisticos2;
    float densidadepopulacional1, densidadepopulacional2;
    float PIBpercapta1, PIBpercapta2;
    long double superpoder1, superpoder2;
    srand(time(0));
    int escolhadojogador, escolhadocomputador, comparacao1, comparacao2;

    printf("Vamos cadastrar uma carta !\n");
	printf("Começaremos com a carta 1\n\n");
    printf("____________________\n\n");
    printf("Qual será a letra que representará o grupo do estado? Por exemplo, A do grupo A\n");
    scanf(" %c", &estado1);
    printf("Qual será o nome do estado? Por favor sem acentuação e espaços, exemplo: SP, ou Sao_Paulo\n");
    scanf(" %s", &nomedoestado1);
    printf("Qual o número da carta? Adicione a letra também para atribuí-la ao grupo. Exemplo: A01\n");
    scanf(" %s", &codigo1);
    printf("Qual o nome da cidade? Por favor sem espaços e acentuação\n");
    scanf(" %s", &nomedacidade1);
    printf("Informe a população apenas com números: \n");
    scanf(" %u", &populacao1);
    printf("Qual a área? \n");
    scanf(" %lf", &area1);
    printf("Qual é o PIB? \n");
    scanf(" %Lf", &PIB1);
    printf("Quanrtos pontos turísticos? \n");
    scanf(" %d", &numerodepontosturisticos1);
    densidadepopulacional1 = (double) populacao1 / area1;
    PIBpercapta1 = (long double) PIB1 / populacao1;
    superpoder1 = (long double) populacao1 + area1 + PIB1 + numerodepontosturisticos1 + PIBpercapta1 - densidadepopulacional1;

    printf("____________________\n\n");
    printf("A carta 1 ficou assim: \n\n");
    printf("Esrado grupo: %c\n", estado1);
    printf("Nome do Estado: %s\n", nomedoestado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomedacidade1);
    printf("População: %u\n", populacao1);
    printf("Área: %.3f km²\n", area1);
    printf("PIB: R$ %.2Lf\n", PIB1);
    printf("Número de Pontos Turísticos: %d\n", numerodepontosturisticos1);
    printf("Densidade Populacional: %.2f\n", densidadepopulacional1);
    printf("PIB per Capita: R$ %.2f\n", PIBpercapta1);
    printf("Super Poder: %.2Lf\n\n", superpoder1);

	printf("Agora a carta 2\n\n");
    printf("____________________\n\n");
	printf("Qual será a letra que representará o grupo do estado? Por exemplo, A do grupo A\n");
	scanf(" %c", &estado2);
    printf("Qual será o nome do estado? Por favor sem acentuação e espaços, exemplo: SP, ou Sao_Paulo\n");
    scanf(" %s", &nomedoestado2);
	printf("Qual o número da carta? Adicione a letra também para atribuí-la ao grupo. Exemplo: A01\n");
	scanf(" %s", &codigo2);
	printf("Qual o nome da cidade? Por favor sem espaços e acentuação\n");
	scanf(" %s", &nomedacidade2);
	printf("Informe a população apenas com números: \n");
	scanf(" %u", &populacao2);
	printf("Qual a área? \n");
	scanf(" %lf", &area2);
	printf("Qual é o PIB? \n");
	scanf(" %Lf", &PIB2);
	printf("Quanrtos pontos turísticos? \n");
	scanf(" %d", &numerodepontosturisticos2);
    densidadepopulacional2 = (double) populacao2 / area2;
    PIBpercapta2 = (long double) PIB2 / populacao2;
    superpoder2 = (long double) populacao2 + area2 + PIB2 + numerodepontosturisticos2 + PIBpercapta2 - densidadepopulacional2;

	printf("____________________\n\n");
    printf("A carta 2 ficou assim: \n\n");
    printf("Esrado grupo: %c\n", estado2);
    printf("Nome do Estado: %s\n", nomedoestado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomedacidade2);
    printf("População: %u\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: R$ %.2Lf\n", PIB2);
    printf("Número de Pontos Turísticos: %d\n", numerodepontosturisticos2);
    printf("Densidade Populacional: %.2f\n", densidadepopulacional2);
    printf("PIB per Capita: R$ %.2f\n", PIBpercapta2);
    printf("Super Poder: %.2Lf\n\n", superpoder2);

	printf("Pronto, agora vamos comparar as cartas !\n\n");
    printf("__________________________\n\n");

    // aqui aplicarei o "switch"

    printf("Escolha qual categoria irá comparar: \n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Número de Pontos Turísticos\n");
    printf("5. Densidade Populacional\n");
    printf("6. PIB per Capita\n");
    printf("7. Superpoder\n");
    scanf("%d", &escolhadojogador);

    switch (escolhadojogador) {

        // Aqui esta sendo aplicado 'if' e 'else' para resultados de comparações de variaveis

        case 1:
        printf("Carta 1: %s População de %u\n", nomedacidade1, populacao1);
        printf("VS\n");
        printf("Carta 2: %s População de %u\n", nomedacidade2, populacao2);
        if (populacao1 > populacao2) {
            printf(" %s venceu !\n\n", nomedacidade1);
            comparacao1 = 1;
        } else if (populacao1 == populacao2){
            printf("Empate !\n");
            comparacao1 = 0;
        } else {
            printf(" %s venceu !\n\n", nomedacidade2);
            comparacao1 = 0;
        } break;
        case 2:
        printf("Carta 1: %s Área de %.3f km²\n", nomedacidade1, area1);
        printf("VS\n");
        printf("Carta 2: %s Área de %.3f km²\n", nomedacidade2, area2);
        if (area1 > area2) {
            printf(" %s venceu !\n\n", nomedacidade1);
            comparacao1 = 1;
        } else if (area1 == area2){
            printf("Empate !\n");
            comparacao1 = 0;
        } else {
            printf(" %s venceu !\n\n", nomedacidade2);
            comparacao1 = 0;
        } break;
        case 3:
        printf("Carta 1: %s PIB de R$ %.2Lf\n", nomedacidade1, PIB1);
        printf("VS\n");
        printf("Carta 2: %s PIB de R$ %.2Lf\n", nomedacidade2, PIB2);
        if (PIB1 > PIB2) {
            printf(" %s venceu !\n\n", nomedacidade1);
            comparacao1 = 1;
        } else if (PIB1 == PIB2){
            printf("Empate !\n");
            comparacao1 = 0;
        } else {
            printf(" %s venceu !\n\n", nomedacidade2);
            comparacao1 = 0;
        } break;
        case 4:
        printf("Carta 1: %s Número de Pontos Turísticos de %d\n", nomedacidade1, numerodepontosturisticos1);
        printf("VS\n");
        printf("Carta 2: %s Número de Pontos Turísticos de %d\n", nomedacidade2, numerodepontosturisticos2);
        if (numerodepontosturisticos1 > numerodepontosturisticos2) {
            printf(" %s venceu !\n\n", nomedacidade1);
            comparacao1 = 1;
        } else if (numerodepontosturisticos1 == numerodepontosturisticos2){
            printf("Empate !\n");
            comparacao1 = 0;
        } else {
            printf(" %s venceu !\n\n", nomedacidade2);
            comparacao1 = 0;
        } break;
        case 5:
        printf("Carta 1: %s Densidade Populacional de %.2f\n", nomedacidade1, densidadepopulacional1);
        printf("VS\n");
        printf("Carta 2: %s Densidade Populacional de %.2f\n", nomedacidade2, densidadepopulacional2);
        if (densidadepopulacional1 < densidadepopulacional2) {
            printf(" %s venceu !\n\n", nomedacidade1);
            comparacao1 = 1;
        } else if (densidadepopulacional1 == densidadepopulacional2){
            printf("Empate !\n");
            comparacao1 = 0;
        } else {
            printf(" %s venceu !\n\n", nomedacidade2);
            comparacao1 = 0;
        } break;
        case 6:
        printf("Carta 1: %s PIB per Capita de R$ %.2f\n", nomedacidade1, PIBpercapta1);
        printf("VS\n");
        printf("Carta 2: %s PIB per Capita de R$ %.2f\n", nomedacidade2, PIBpercapta2);
        if (PIBpercapta1 > PIBpercapta2) {
            printf(" %s venceu !\n\n", nomedacidade1);
            comparacao1 = 1;
        } else if (PIBpercapta1 == PIBpercapta2){
            printf("Empate !\n");
            comparacao1 = 0;
        } else {
            printf(" %s venceu !\n\n", nomedacidade2);
            comparacao1 = 0;
        } break;
        case 7:
        printf("Carta 1: %s Sperpoder de %.2Lf\n", nomedacidade1, superpoder1);
        printf("VS\n");
        printf("Carta 2: %s Sperpoder de %.2Lf\n", nomedacidade2, superpoder2);
        if (superpoder1 > superpoder2) {
            printf(" %s venceu !\n\n", nomedacidade1);
            comparacao1 = 1;
        } else if (superpoder1 == superpoder2){
            printf("Empate !\n");
            comparacao1 = 0;
        } else {
            printf(" %s venceu !\n\n", nomedacidade2);
            comparacao1 = 0;
        } break;
        default:
            printf("Opção inválida !\n");
        break;
    }

    // Aqui decidi aplicar um rand para o computador escolher a segunda comparação.

    escolhadocomputador = rand() % 7 + 1;
    if (escolhadocomputador == escolhadojogador){
        escolhadocomputador = rand() % 7 + 1;
    }

    switch (escolhadocomputador) {

        case 1:
        printf("Carta 1: %s População de %u\n", nomedacidade1, populacao1);
        printf("VS\n");
        printf("Carta 2: %s População de %u\n", nomedacidade2, populacao2);
        if (populacao1 > populacao2) {
            printf(" %s venceu !\n\n", nomedacidade1);
            comparacao2 = 1;
        } else if (populacao1 == populacao2){
            printf("Empate !\n");
            comparacao2 = 0;
        } else {
            printf(" %s venceu !\n\n", nomedacidade2);
            comparacao2 = 0;
        } break;
        case 2:
        printf("Carta 1: %s Área de %.3f km²\n", nomedacidade1, area1);
        printf("VS\n");
        printf("Carta 2: %s Área de %.3f km²\n", nomedacidade2, area2);
        if (area1 > area2) {
            printf(" %s venceu !\n\n", nomedacidade1);
            comparacao2 = 1;
        } else if (area1 == area2){
            printf("Empate !\n");
            comparacao2 = 0;
        } else {
            printf(" %s venceu !\n\n", nomedacidade2);
            comparacao2 = 0;
        } break;
        case 3:
        printf("Carta 1: %s PIB de R$ %.2Lf\n", nomedacidade1, PIB1);
        printf("VS\n");
        printf("Carta 2: %s PIB de R$ %.2Lf\n", nomedacidade2, PIB2);
        if (PIB1 > PIB2) {
            printf(" %s venceu !\n\n", nomedacidade1);
            comparacao2 = 1;
        } else if (PIB1 == PIB2){
            printf("Empate !\n");
            comparacao2 = 0;
        } else {
            printf(" %s venceu !\n\n", nomedacidade2);
            comparacao2 = 0;
        } break;
        case 4:
        printf("Carta 1: %s Número de Pontos Turísticos de %d\n", nomedacidade1, numerodepontosturisticos1);
        printf("VS\n");
        printf("Carta 2: %s Número de Pontos Turísticos de %d\n", nomedacidade2, numerodepontosturisticos2);
        if (numerodepontosturisticos1 > numerodepontosturisticos2) {
            printf(" %s venceu !\n\n", nomedacidade1);
            comparacao2 = 1;
        } else if (numerodepontosturisticos1 == numerodepontosturisticos2){
            printf("Empate !\n");
            comparacao2 = 0;
        } else {
            printf(" %s venceu !\n\n", nomedacidade2);
            comparacao2 = 0;
        } break;
        case 5:
        printf("Carta 1: %s Densidade Populacional de %.2f\n", nomedacidade1, densidadepopulacional1);
        printf("VS\n");
        printf("Carta 2: %s Densidade Populacional de %.2f\n", nomedacidade2, densidadepopulacional2);
        if (densidadepopulacional1 < densidadepopulacional2) {
            printf(" %s venceu !\n\n", nomedacidade1);
            comparacao2 = 1;
        } else if (densidadepopulacional1 == densidadepopulacional2){
            printf("Empate !\n");
            comparacao2 = 0;
        } else {
            printf(" %s venceu !\n\n", nomedacidade2);
            comparacao2 = 0;
        } break;
        case 6:
        printf("Carta 1: %s PIB per Capita de R$ %.2f\n", nomedacidade1, PIBpercapta1);
        printf("VS\n");
        printf("Carta 2: %s PIB per Capita de R$ %.2f\n", nomedacidade2, PIBpercapta2);
        if (PIBpercapta1 > PIBpercapta2) {
            printf(" %s venceu !\n\n", nomedacidade1);
            comparacao2 = 1;
        } else if (PIBpercapta1 == PIBpercapta2){
            printf("Empate !\n");
            comparacao2 = 0;
        } else {
            printf(" %s venceu !\n\n", nomedacidade2);
            comparacao2 = 0;
        } break;
        case 7:
        printf("Carta 1: %s Sperpoder de %.2Lf\n", nomedacidade1, superpoder1);
        printf("VS\n");
        printf("Carta 2: %s Sperpoder de %.2Lf\n", nomedacidade2, superpoder2);
        if (superpoder1 > superpoder2) {
            printf(" %s venceu !\n\n", nomedacidade1);
            comparacao2 = 1;
        } else if (superpoder1 == superpoder2){
            printf("Empate !\n");
            comparacao2 = 0;
        } else {
            printf(" %s venceu !\n\n", nomedacidade2);
            comparacao2 = 0;
        } break;
    }

    // Aqui apliquei um caso de desempate para uma melhor de 3
    
    if (comparacao1 != comparacao2) {
        printf("Hora do desempate ! Melhor de 3 !!!!\n\n");
        printf("Escolha qual categoria irá comparar: \n");
        printf("1. População\n");
        printf("2. Área\n");
        printf("3. PIB\n");
        printf("4. Número de Pontos Turísticos\n");
        printf("5. Densidade Populacional\n");
        printf("6. PIB per Capita\n");
        printf("7. Superpoder\n");
        scanf("%d", &escolhadojogador);
    
        switch (escolhadojogador) {
            case 1:
            printf("Carta 1: %s População de %u\n", nomedacidade1, populacao1);
            printf("VS\n");
            printf("Carta 2: %s População de %u\n", nomedacidade2, populacao2);
            if (populacao1 > populacao2) {
                printf(" %s venceu !\n\n", nomedacidade1);
                comparacao1 = 1;
            } else if (populacao1 == populacao2){
                printf("Empate !\n");
                comparacao1 = 0;
            } else {
                printf(" %s venceu !\n\n", nomedacidade2);
                comparacao1 = 0;
            } break;
            case 2:
            printf("Carta 1: %s Área de %.3f km²\n", nomedacidade1, area1);
            printf("VS\n");
            printf("Carta 2: %s Área de %.3f km²\n", nomedacidade2, area2);
            if (area1 > area2) {
                printf(" %s venceu !\n\n", nomedacidade1);
                comparacao1 = 1;
            } else if (area1 == area2){
                printf("Empate !\n");
                comparacao1 = 0;
            } else {
                printf(" %s venceu !\n\n", nomedacidade2);
                comparacao1 = 0;
            } break;
            case 3:
            printf("Carta 1: %s PIB de R$ %.2Lf\n", nomedacidade1, PIB1);
            printf("VS\n");
            printf("Carta 2: %s PIB de R$ %.2Lf\n", nomedacidade2, PIB2);
            if (PIB1 > PIB2) {
                printf(" %s venceu !\n\n", nomedacidade1);
                comparacao1 = 1;
            } else if (PIB1 == PIB2){
                printf("Empate !\n");
                comparacao1 = 0;
            } else {
                printf(" %s venceu !\n\n", nomedacidade2);
                comparacao1 = 0;
            } break;
            case 4:
            printf("Carta 1: %s Número de Pontos Turísticos de %d\n", nomedacidade1, numerodepontosturisticos1);
            printf("VS\n");
            printf("Carta 2: %s Número de Pontos Turísticos de %d\n", nomedacidade2, numerodepontosturisticos2);
            if (numerodepontosturisticos1 > numerodepontosturisticos2) {
                printf(" %s venceu !\n\n", nomedacidade1);
                comparacao1 = 1;
            } else if (numerodepontosturisticos1 == numerodepontosturisticos2){
                printf("Empate !\n");
                comparacao1 = 0;
            } else {
                printf(" %s venceu !\n\n", nomedacidade2);
                comparacao1 = 0;
            } break;
            case 5:
            printf("Carta 1: %s Densidade Populacional de %.2f\n", nomedacidade1, densidadepopulacional1);
            printf("VS\n");
            printf("Carta 2: %s Densidade Populacional de %.2f\n", nomedacidade2, densidadepopulacional2);
            if (densidadepopulacional1 < densidadepopulacional2) {
                printf(" %s venceu !\n\n", nomedacidade1);
                comparacao1 = 1;
            } else if (densidadepopulacional1 == densidadepopulacional2){
                printf("Empate !\n");
                comparacao1 = 0;
            } else {
                printf(" %s venceu !\n\n", nomedacidade2);
                comparacao1 = 0;
            } break;
            case 6:
            printf("Carta 1: %s PIB per Capita de R$ %.2f\n", nomedacidade1, PIBpercapta1);
            printf("VS\n");
            printf("Carta 2: %s PIB per Capita de R$ %.2f\n", nomedacidade2, PIBpercapta2);
            if (PIBpercapta1 > PIBpercapta2) {
                printf(" %s venceu !\n\n", nomedacidade1);
                comparacao1 = 1;
            } else if (PIBpercapta1 == PIBpercapta2){
                printf("Empate !\n");
                comparacao1 = 0;
            } else {
                printf(" %s venceu !\n\n", nomedacidade2);
                comparacao1 = 0;
            } break;
            case 7:
            printf("Carta 1: %s Sperpoder de %.2Lf\n", nomedacidade1, superpoder1);
            printf("VS\n");
            printf("Carta 2: %s Sperpoder de %.2Lf\n", nomedacidade2, superpoder2);
            if (superpoder1 > superpoder2) {
                printf(" %s venceu !\n\n", nomedacidade1);
                comparacao1 = 1;
            } else if (superpoder1 == superpoder2){
                printf("Empate !\n");
                comparacao1 = 0;
            } else {
                printf(" %s venceu !\n\n", nomedacidade2);
                comparacao1 = 0;
            } break;
            default:
                printf("Opção inválida !\n");
            break;
        }
    } else {
        printf("FIM !\n\n");
    }

    
return 0;

}

// Aqui eu deixei um exemplo para 2 cartas para sempre que for testar as informações
// estão mais práticas, pesquisei em relação a 2022 as informações abaico.

// São Paulo em 2022
// População: 44 420 459 
// Área: 248 219,481 km²
// PIB: 3130333000000
// Número de pontos Turísticos: 36
// Densidade Populacional: 178,96
// PIB per Capita: 70.471,00
// ==============
// Rio de Janeiro em 2022
// População: 16 055 174
// Área: 43 750,425 km²
// PIB: 1153512000000
// Número de pontos Turísticos: 58
// Densidade Populacional: 366,97
// PIB per Capita: 71.850