#include <stdio.h>

int main() {

    char estado [20];
    char estado_b [20];
    char cidade [20];
    char cidade_b [20];
    char codigo [10];
    char codigo_b [10];
    int habitantes;
    int habitantes_b;
    float area;
    float area_b;
    float PIB;
    float PIB_b;
    int numero_de_pontos_turisticos;
    int numero_de_pontos_turisticos_b;


    printf("Digite o estado: \n");
    scanf("%19s", estado);

    printf("Digite a cidade: \n");
    scanf("%19s", cidade);

    printf("Digite o codigo da carta: \n");
    scanf("%9s", codigo);

    printf("Quantos habitantes tem esta cidade? \n");
    scanf("%i", &habitantes);

    printf("Qual a área? \n");
    scanf("%f", &area);

    printf("Qual o PIB desta cidade? \n");
    scanf("%f", &PIB);

    printf("Quantos pontos turisticos esta cidade possui? \n");
    scanf("%d", &numero_de_pontos_turisticos);



    printf("Digite o segundo estado: \n");
    scanf("%19s", estado_b);

    printf("Digite a cidade: \n");
    scanf("%19s", cidade_b);

    printf("Digite o codigo desta carta: \n");
    scanf("%9s", codigo_b);

    printf("Quantos habitantes tem esta cidade? \n");
    scanf("%i", &habitantes_b);

    printf("Qual a area? \n");
    scanf("%f", &area_b);

    printf("Qual o PIB desta cidade? \n");
    scanf("%f", &PIB_b);

    printf("Quantos pontos turisticos esta cidade possui? \n");
    scanf("%d", &numero_de_pontos_turisticos_b);


    printf("estado: %s \n", estado);
    printf("cidade: %s \n", cidade);
    printf("codigo: %s \n", codigo);
    printf("habitantes: %i \n", habitantes);
    printf("área: %f \n", area);
    printf("PIB: %f \n", PIB);
    printf("numero_de_pontos_turisticos: %d \n", numero_de_pontos_turisticos);

    printf("estado_b: %s \n", estado_b);
    printf("cidade_b: %s \n", cidade_b);
    printf("codigo_b: %s \n", codigo_b);
    printf("habitantes_b: %i \n", habitantes_b);
    printf("área_b: %f \n", area_b);
    printf("PIB_b: %f \n", PIB_b);
    printf("numero_de_pontos_turisticos_b: %d \n", numero_de_pontos_turisticos_b);


    return 0;     
}