#include <stdio.h>
int main(){
    char Estado1[20],Estado2[20];
    char Carta1[10], Carta2[10];
    char Cidade1[50], Cidade2[50];
    int Populacao1, Populacao2;
    float Area1, Area2;
    float PIB1, PIB2;
    int Pontosturisticos1, Pontosturisticos2;
    float Densidadepopulacional1, Densidadepopulacional2;
    float PIBpercapta1, PIBpercapta2;

    // ==== Carta 1 ==== 
    printf("Digite os dados da Carta 1 \n");


        printf("Digite o Estado: ");
        scanf (" %19s", Estado1);

        printf("Digite a Carta: ");
        scanf ("%9s", Carta1);

        printf("Digite a Cidade: ");
        scanf ("%s", Cidade1);
        
        printf ("Digite a população: ");
        scanf("%i", &Populacao1);

        printf("Digite a área: ");
        scanf("%f", &Area1);

        printf("Digite o PIB: ");
        scanf("%f",  &PIB1);

        printf("Digite os pontos turistiscos: ");
        scanf("%i", &Pontosturisticos1);

        

        printf("\n");


    // ==== Carta 2 ====
    printf("Digite os dados da Carta 2 \n");


        printf("Digite o Estado: ");
         scanf (" %19s",Estado2);

        printf("Digite a Carta: ");
        scanf ("  %9s", Carta2);

        printf("Digite a Cidade: ");
        scanf ("%s", Cidade2);
        
        printf ("Digite a população: ");
        scanf("%i", &Populacao2);

        printf("Digite a área: ");
        scanf("%f", &Area2);

        printf("Digite o PIB: ");
        scanf("%f",  &PIB2);

        printf("Digite os pontos turistiscos: ");
        scanf("%i", &Pontosturisticos2);

        //CALCULOS

        Densidadepopulacional1=Populacao1/Area1;
        Densidadepopulacional2=Populacao2/Area2;
        PIBpercapta1=PIB1/Populacao1;
        PIBpercapta2=PIB2/Populacao2;

       

          // ==== Mostrar os dados ====

            printf("\n--- Dados da Carta 1 ---\n");
            printf("Estado: %s\n", Estado1);
            printf("Carta: %s\n", Carta1);
            printf("Cidade: %s\n",Cidade1);
            printf("População: %i\n", Populacao1);
            printf("Area: %f\n", Area1);
            printf("PIB: %f\n", PIB1);
            printf("Pontos Turisticos:%i\n", Pontosturisticos1);
            printf("Densidade populacional:%.2f\n", Densidadepopulacional1);
            printf("PIB per Capta: %.2f\n", PIBpercapta1);
            
            printf("\n");

        printf("\n--- Dados da Carta 2 ---\n");
           printf("Estado: %s\n", Estado2);
           printf("Carta: %s\n", Carta2);
           printf(" Cidade: %s\n",Cidade2 );
           printf("População: %i\n", Populacao2);
           printf("Área: %f\n", Area2);
           printf("PIB: %f\n", PIB2);
           printf("Pontos Turisticos:%i\n", Pontosturisticos2);
            printf("Densidade populacional:%.2f\n", Densidadepopulacional2);
            printf("PIB per Capta: %.2f\n", PIBpercapta2);





    return 0;


}