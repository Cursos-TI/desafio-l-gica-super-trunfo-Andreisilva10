#include <stdio.h>

int main(){
    //CARTA:1
    char estado_1[50];
    char codigo_da_carta_1[50];
    char nome_da_cidade_1[50];
    unsigned long int populacao_1;
    float area_em_km_1;
    float pib_1;
    int numero_de_pontos_turisticos_1;
    float densidade_populacional_1;
    float pib_per_capita_1;
    float superPoder_1;
      
    //CARTA:2
    char estado_2[50];
    char codigo_da_carta_2[50];
    char nome_da_cidade_2[50];
    unsigned long int populacao_2;
    float area_em_km_2;
    float pib_2;
    int numero_de_pontos_turisticos_2;
    float densidade_populacional_2;
    float pib_per_capita_2;
    float superPoder_2;


    //CARTA:1
    printf("Qual é o estado da carta:1 ");
    scanf("%s", estado_1);
    
    printf("Qual é o codigo da carta: ");
    scanf("%s", codigo_da_carta_1);
    
    printf("Qual é o nome da cidade: ");
    scanf("%s", nome_da_cidade_1);
    
    printf("Qual é a populacao: ");
    scanf("%lu", &populacao_1);

    printf("Qual é a area em km: ");
    scanf("%f", &area_em_km_1);
    
    printf("Qual é o pib: ");
    scanf("%f", &pib_1);
    
    printf("Qual é o numero de pontos turisticos: ");
    scanf("%d",  &numero_de_pontos_turisticos_1 );

    printf("\n"); 
   
    //CARTA:2
    printf("Qual é o estado da carta:2 ");
    scanf("%s", estado_2);
    
    printf("Qual é o codigo da carta: ");
    scanf("%s", codigo_da_carta_2);
    
    printf("Qual é o nome da cidade: ");
    scanf("%s", nome_da_cidade_2);
    
    printf("Qual é a populacao: ");
    scanf("%lu", &populacao_2);
    
    printf("Qual é a area em km: ");
    scanf("%f", &area_em_km_2);
    
    printf("Qual é o pib: ");
    scanf("%f", &pib_2);
    
    printf("Qual é o numero de pontos turisticos: ");
    scanf("%d", &numero_de_pontos_turisticos_2);

    densidade_populacional_1 = (float)populacao_1 / area_em_km_1;
    pib_per_capita_1 = (float)pib_1 / populacao_1;

    densidade_populacional_2 = (float)populacao_2 / area_em_km_2;
    pib_per_capita_2 = (float)pib_2 / populacao_2;

    printf("\n");


    superPoder_1 = (float)(populacao_1 + area_em_km_1 + pib_1 + numero_de_pontos_turisticos_1 + densidade_populacional_1 + pib_per_capita_1); 
    superPoder_2 = (float)(populacao_2 + area_em_km_2 + pib_2 + numero_de_pontos_turisticos_2 + densidade_populacional_2 + pib_per_capita_2);

    //CARTA:1
    printf("O RESULTADO DA CARTA-1 È: \n" );
    printf("Estado: %s\n", estado_1);
    printf("Codigo_da_carta: %s\n", codigo_da_carta_1);
    printf("Nome_da_cidade: %s\n", nome_da_cidade_1);
    printf("Populacao: %lu\n", populacao_1);
    printf("Area_em_km: %f\n", area_em_km_1);
    printf("Pib: %f\n", pib_1);
    printf("Numero_de_pontos_turisticos: %d\n", numero_de_pontos_turisticos_1);
    printf("Densidade_populacional: %f\n", densidade_populacional_1);
    printf("Pib_per_capita: %f\n", pib_per_capita_1);
    printf("Super_Poder: %f\n\n", superPoder_1);

    //CARTA:2
    printf("O RESULTADO DA CARTA-2 È: \n" );
    printf("Estado: %s\n", estado_2);
    printf("Codigo_da_carta: %s\n", codigo_da_carta_2);
    printf("Nome_da_cidade: %s\n", nome_da_cidade_2);
    printf("Populacao: %lu\n", populacao_2);
    printf("Area_em_km: %f\n", area_em_km_2);
    printf("Pib: %f\n", pib_2);
    printf("Numero_de_pontos_turisticos: %d\n", numero_de_pontos_turisticos_2);
    printf("Densidade_populacional: %f\n", densidade_populacional_2);
    printf("Pib_per_capita: %f\n", pib_per_capita_2);
    printf("Super_Poder: %f\n", superPoder_2);
    printf("\n");
    
    if(estado_1 != estado_2){
       printf("O Nome do Estado_1 é Diferemte do Nome do Estado_2.\n"); 
      } 
   
    if(codigo_da_carta_1 != codigo_da_carta_2){
       printf("O Codigi da Carta_1 é Diferente do Codigo da Carta_2.\n"); 
      } 
      
    if(nome_da_cidade_1 != nome_da_cidade_2){
       printf("O Nome_da_Cidade_1 é Diferente do Nome_da_cidade_2.\n");
      } 
      
    if(populacao_1 >= populacao_2){
       printf("A População_1 é maior ou igual que a populacao_2.\n");     
    }else{
       printf("A População_1 é menor ou igual que a populacao_2.\n");  
    }

    if(area_em_km_1 >= area_em_km_2){
       printf("A Area_em_km_1 é maior ou igual que a Area_em_km_2.\n");  
    }else{
       printf("A Area_em_km_1 é menor ou igual que a Area_em_km_2.\n");  
    }

    if(pib_1 >= pib_2){
       printf("O Pib_1 é maior ou igual que o Pib_2.\n");  
    }else{
       printf("O Pib_1 é menor ou igual que o Pib_2.\n");  
    }

    if(numero_de_pontos_turisticos_1 >= numero_de_pontos_turisticos_2){
       printf("O Numero_de_pontos_turisticos_1 é maior ou igual que o Numero_de_pontos_turisticos_1.\n");  
    }else{
       printf("O Numero_de_pontos_turisticos_1 é menor ou igual que o Numero_de_pontos_turisticos_1.\n");  
    }

    if(densidade_populacional_1 >= densidade_populacional_2){
       printf("A Densidade_populacional_1 é maior ou igual que a Densidade_populacional_2.\n");     
    }else{
       printf("A Densidade_populacional_1 é menor ou igual que a Densidade_populacional_2.\n");  
    }

    if(pib_per_capita_1 >= pib_per_capita_2){
       printf("O Pib_per_capita_1 é maior ou igual que o pib_per_capita_2.\n");  
    }else{
       printf("O Pib_per_capita_1 é menor ou igual que o pib_per_capita_2.\n");  
    }

    if(superPoder_1 >= superPoder_2){
       printf("O SuperPoder_1 é maior ou igual que o SuperPoder_2.\n");  
    }else{
       printf("O SuperPoder_1 é menor ou igual que o SuperPoder_2.\n");  
    }

    printf("\n");

    
    printf("** Atributo escolhido para a Comparação ** \n");

    if(populacao_1 > populacao_2){
       printf("A Populacao_1 é maior que a Populacao_2.\n");  
    }else{
       printf("A Populacao_1 é menor que a Populacao_2.\n");  
    }
    
    
    printf("\n");
     
    printf("O RESULTADO È:");
    
    printf("\n");

    if(superPoder_1 > superPoder_2){
       printf("A Carta_1 Venceu!\n");
    } else{
       printf("A Carta_2 Venceu!\n"); 
    }
     printf("\n");


    printf("Para a Densidade Populacional: \n");
    if(densidade_populacional_1 < densidade_populacional_2){
       printf("A Carta_1 Venceu!\n");
    } else{
       printf("A Carta_2 Venceu!\n "); 
    }


    return 0;



}
