#include <stdio.h>

int main (){

    printf("desafio cartas super trunfo!\n");
    
    // Primeira carta
    char Estado1[]="RS";

    char codigo_carta1[] = "A01";

    char cidade1[] = "Porto Alegre";

    float  populacao1 = 1388.794f;

    float area1 = 496.8f; 

    float pib = 81.56f;

    int pontos_turisticos1 = 38;

    float densidade1; // densidade populacional = populacao1/area1;

    float pib_percapita1; // pib per capita = pib/populacao1;

    printf("cidade: %s/n", cidade1);
    

    printf("populacao: %.3f/n", populacao1);


    printf("area: %.2f/n", area1);


    printf("pib: %.2f/n", pib);


    printf("pontos turisticos: %d/n", pontos_turisticos1);


    printf("densidade populacional: %.2f/n", densidade1);

    

    printf("pib per capita: %.2f/n", pib_percapita1);
    
    
    
    //Segunda Carta 
    char estado2[] = "RJ";

    char codigo_carta1[] = "B02"; 

    char cidade2[] = "Rio de Janeiro";

    float populacao2 = 179.120f;

    float area2 = 813.420f;

    float pib2 = 11.194f;

    int pontos_turisticos = 10;  

    float densidade2; // densidade populacional = populacao2/area2;

    float pib_percpita2; // pib per capita = pib/populacao2;
    printf("cidade: %s/n", cidade2);
    printf("populacao: %.3f/n", populacao2);
    printf("area: %.2f/n", area2);
    printf("pib: %.2f/n", pib2);
    printf("pontos turisticos: %d/n", pontos_turisticos);
    printf("densidaade populacional: %.2f/n", densidade2);
    printf("pib per capita: %.2f/n",  pib_percpita2);


    
    return 0;
}