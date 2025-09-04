#include <stdio.h>
int main(){
    char Estado1,Estado2;
    char Carta1[10], Carta2[10];
    char Cidade1[50], Cidade2[50];
    int População1, População2;
    float Área1, Área2;
    float PIB1, PIB2;
    int Pontosturisticos1, Pontosturisticos2;

    // ==== Carta 1 ==== 
    printf("Digite os dados da Carta 1 \n");


        printf("Digite o Estado: ");
        scanf (" %c",&Estado1);

        printf("Digite a Carta: ");
        scanf ("%s", Carta1);

        printf("Digite a Cidade: ");
        scanf ("%s", Cidade1);
        
        printf ("Digite a população: ");
        scanf("%i", &População1);

        printf("Digite a área: ");
        scanf("%f", &Área1);

        printf("Digite o PIB: ");
        scanf("%f",  &PIB1);

        printf("Digite os pontos turistiscos: ");
        scanf("%i", &Pontosturisticos1);

        printf("\n");


    // ==== Carta 2 ====
    printf("Digite os dados da Carta 2 \n");


        printf("Digite o Estado: ");
         scanf (" %c",&Estado2);

        printf("Digite a Carta: ");
        scanf ("%s", Carta2);

        printf("Digite a Cidade: ");
        scanf ("%s", Cidade2);
        
        printf ("Digite a população: ");
        scanf("%i", &População2);

        printf("Digite a área: ");
        scanf("%f", &Área2);

        printf("Digite o PIB: ");
        scanf("%f",  &PIB2);

        printf("Digite os pontos turistiscos: ");
        scanf("%i", &Pontosturisticos2);

          // ==== Mostrar os dados ====

           printf("\n--- Dados da Carta 1 ---\n");
           printf("Estado: %c\n", Estado1);
           printf("Carta: %s\n", Carta1);
           printf("Cidade: %s\n",Cidade1);
           printf("População: %i\n", População1);
           printf("PIB: %f\n", PIB1);
           printf("Pontos Turisticos:%i\n", Pontosturisticos1);

           printf("\n");

          printf("\n--- Dados da Carta 2 ---\n");
           printf("Estado: %c\n", Estado2);
           printf("Carta: %s\n", Carta2);
           printf(" Cidade: %s\n",Cidade2 );
           printf("População: %i\n", População2);
           printf("PIB: %f\n", PIB2);
           printf("Pontos Turisticos:%i\n", Pontosturisticos2);





    return 0;


}