#include <stdio.h>

int main (){

    char Estado1[30], Estado2[30];
    char Carta1[30], Carta2[30];
    char Cidade1[30], Cidade2[30];
    unsigned long int População1, População2;
    float Area1,Area2;
    float PIB1, PIB2;
    int PontosTuristicos1, PontosTuristicos2;
    float DensidadePopulacional1, DensidadePopulacional2;
    float PIBpercapta1, PIBpercapta2;
    float SuperPoder1, SuperPoder2;

    //===CARTA 1===

    printf("Digite os dados da Carta 1");

    printf("Digite o estado: ");
    scanf("%29s", Estado1);

    printf("Digite o código da carta: ");
    scanf ("%29s", Carta1);

    printf("Digite o nome da cidade ");
    scanf ("%29s", Cidade1);

    printf("Digite a população: ");
    scanf("%lu",  &População1);

    printf("Digite a Area: ");
    scanf(" %f", &Area1);

    printf ("Digite o PIB: ");
    scanf ("%f", &PIB1);

    printf("Digite os Pontos Turisticos: ");
    scanf("%i", &PontosTuristicos1);


    //==CARTA 2==

   printf("Digite os dados da Carta 2");

    printf("Digite o estado: ");
    scanf("%29s", Estado2);

    printf("Digite o código da carta: ");
    scanf ("%29s", Carta2);

    printf("Digite o nome da cidade ");
    scanf ("%29s", Cidade2);

    printf("Digite a população: ");
    scanf("%lu", &População2);

    printf("Digite a Area: ");
    scanf("%f", &Area2);

    printf ("Digite o PIB: ");
    scanf ("%f", &PIB2);

    printf("Digite os Pontos Turisticos: ");
    scanf("%i", &PontosTuristicos2);

    //Calculos 

    DensidadePopulacional1=(float)População1/Area1;
    DensidadePopulacional2=(float)População2/Area2;
    PIBpercapta1=PIB1/(float)População1;
    PIBpercapta2=PIB2/(float)População2;
    SuperPoder1= (float)População1+Area1+PIB1+(float)PontosTuristicos1+PIBpercapta1+(1.0f/DensidadePopulacional1);
    SuperPoder2= (float)População2+Area2+PIB2+(float)PontosTuristicos2+PIBpercapta2+(1.0f/DensidadePopulacional2);
    

    //Mostrar dados

    //==CARTA 1==

    printf("CARTA 1\n");

    printf("Estado: %s\n ", Estado1);
    printf("Carta: %s\n", Carta1);
    printf ("Cidade: %s\n", Cidade1);
    printf("População: %lu\n", População1);
    printf("Area: %f\n", Area1);
    printf("PIB: %f\n",PIB1);
    printf("Pontos turisticos: %i\n", PontosTuristicos1);
    printf("Densidade Populacional: %f\n", DensidadePopulacional1);
    printf("PIBpercapta: %.20f\n", PIBpercapta1);
    printf("Super Poder: %f\n", SuperPoder1);


        //==CARTA 2==

    printf("CARTA 2\n");

    printf("Estado: %s\n ", Estado2);
    printf("Carta: %s\n", Carta2);
    printf ("Cidade: %s\n", Cidade2);
    printf("População: %lu\n", População2);
    printf("Area: %f\n", Area2);
    printf("PIB: %f\n",PIB2);
    printf("Pontos turisticos: %i\n", PontosTuristicos2);
    printf("Densidade Populacional: %f\n", DensidadePopulacional2);
    printf("PIBpercapta: %.20f\n", PIBpercapta2);
    printf("Super Poder: %f\n", SuperPoder2);