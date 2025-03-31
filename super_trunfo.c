#include <stdio.h>

int main(){

    //vars da primeira carta
    char estado, cidade[50];
    int id, populacao, N_ptosturismo;
    float area, pib;
    //vars da segunda carta
    char estado2, cidade2[50];
    int id2, populacao2, N_ptosturismo2;
    float area2, pib2;

    //DESAFIO NVL AVENTUREIRO
    float densidade, pib_capita;
    float densidade2, pib_capita2;

//obtenção de dados da carta 1
printf("Você está inserindo os dados da PRIMEIRA carta \n");
printf("====================================================\n");
id = 1;
printf("Insira o Estado (de A a H) \n");
scanf(" %c",&estado);
printf("Insira o nome da cidade \n");
scanf(" %[^\n]", &cidade); //FUNCIONOU
printf("Insira contigente populacional \n");
scanf("%d", &populacao);
printf("Insira a extensão de área (Km²) \n");
scanf("%f", &area);
printf("Insira o valor do PIB (em bilhões R$) \n");
scanf("%f", &pib);
printf("Insira Número de Pontos turísticos \n");
scanf("%d", &N_ptosturismo);
printf("\n\tFim da primeira carta");

//DESFIO NVL 2 - AVENTUREIRO
densidade = (float)(populacao / area);
pib_capita = (float)(pib *1000000000/ populacao);

//obtenção de dados da carta 2
printf("\n\nAgora os dados da SEGUNDA carta \n");
printf("====================================================\n");
id2 = 2;
printf("Insira o Estado (de A a H) \n");
scanf(" %c", &estado2);
printf("Insira o nome da cidade \n");
scanf(" %[^\n]", &cidade2); //FUNCIONOU
printf("Insira contigente populacional \n");
scanf("%d",&populacao2);
printf("Insira a extensão de área (Km²) \n");
scanf(" %f", &area2);
printf("Insira o valor do PIB (em bilhões R$) \n");
scanf(" %f",&pib2);
printf("Insira Número de Pontos turísticos \n");
scanf("%d", &N_ptosturismo2);

//DESFIO NVL 2 - AVENTUREIRO
densidade2 = (float)(populacao2 / area2);
pib_capita2 = (float)( pib2 *1000000000 / populacao2);


//system("cls"); //Limpar terminal no linux

//exibição de dados da carta 1
printf("\n\n====================================================\n");
printf("\n Carta %d:", id);
printf("\n Estado: %1c",estado);
printf("\n Código: %c0%d", estado, id);
printf("\n Nome da cidade: %s", cidade);
printf("\n População: %d",populacao);
printf("\n Area: %.2f Km²",area);
printf("\n PIB: %.2f bilhões de reais",pib);
printf("\n Número de pontos turísticos: %d",N_ptosturismo);
//DESAFIO NVL 2 - AVENTUREIRO
printf("\n Densidade Populacional: %.2f hab/km²",densidade);
printf("\n PIB per capita: R$ %.2f reais",pib_capita);
printf("\n\n====================================================\n");


//exibição de dados da carta 2
printf("\n Carta %d:", id2);
printf("\n Estado: %1c",estado2);
printf("\n Código: %c0%d", estado2, id2);
printf("\n Nome da cidade: %s", cidade2);
printf("\n População: %d",populacao2);
printf("\n Area: %.2f Km²",area2);
printf("\n PIB: %.2f bilhões de reais",pib2);
printf("\n Número de pontos turísticos: %d",N_ptosturismo2);
//DESAFIO NVL 2 - AVENTUREIRO
printf("\n Densidade Populacional: %.2f hab/km²",densidade2);
printf("\n PIB per capita: R$ %.2f reais",pib_capita2);
printf("\n====================================================\n");

    return 0;
}