#include <stdio.h>
int main(){
    int populaçao;
    int numerodepontosturisticos;
    char estado[20];
    char códigodacarta[10];
    char nomedacidade[20];
    float areaemkm²;
    float pib;

    // estava dando erro na hora de dar espaço nas declarações, nao entendi o porque!!!

    printf("CARTA 1 \n");

    printf("\n");

    printf("Qual o nome da sua cidade: \n");
    scanf("%s", &nomedacidade);

    printf("\n");

    printf("Qual estado ela está localizada: \n");
    scanf("%s", &estado);

    printf("Qual o código da sua cidade: \n");
    scanf("%s", &códigodacarta);
    printf("\n");

    printf("Qual o numero da população: \n");
    scanf("%d", &populaçao);

    printf("\n");

    printf("Quantos pontos turisticos tem sua cidade \n");
    scanf("%d", &numerodepontosturisticos);

    printf("\n");

    printf("Qual o pib da sua cidade: \n");
    scanf("%f", &pib);

    printf("\n");

    printf("Qual a área em km²: \n");
    scanf("%f", &areaemkm²);

    printf("DADOS DA CARTA 1 \n");

    printf("\n");

    printf("Estado: %s", estado);
    printf("\n");
    printf("Código da cidade: %s", códigodacarta);
    printf("\n");
    printf("Nome da cidade: %s", nomedacidade);
    printf("\n");
    printf("População: %d", populaçao);
    printf("\n");
    printf("Área: %f", areaemkm²);
    printf("\n");
    printf("PIB: %f", pib);
    printf("\n");
    printf("Número de pontos turisticos: %d", numerodepontosturisticos);
    printf("\n");
    

    printf("CARTA 2 \n");

    printf("\n");

    printf("Qual o nome da sua cidade: \n");
    scanf("%s", &nomedacidade);

    printf("\n");

    printf("Qual estado ela está localizada: \n");
    scanf("%s", &estado);

    printf("\n");

    printf("Qual o numero da população: \n");
    scanf("%d", &populaçao);

    printf("\n");

    printf("Quantos pontos turisticos tem sua cidade \n");
    scanf("%d", &numerodepontosturisticos);

    printf("\n");

    printf("Qual o pib da sua cidade: \n");
    scanf("%f", &pib);

    printf("\n");

    printf("Qual a área em km²: \n");
    scanf("%f", &areaemkm²);

    printf("DADOS DA CARTA 2 \n");

    printf("\n");

    printf("Estado: %s", estado);
    printf("\n");
    printf("Código da cidade: %s", códigodacarta);
    printf("\n");
    printf("Nome da cidade: %s", nomedacidade);
    printf("\n");
    printf("População: %d", populaçao);
    printf("\n");
    printf("Área: %f", areaemkm²);
    printf("\n");
    printf("PIB: %f", pib);
    printf("\n");
    printf("Número de pontos turisticos: %d", numerodepontosturisticos);
    printf("\n");


    return 0;

}

