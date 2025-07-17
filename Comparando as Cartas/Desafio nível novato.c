#include <stdio.h>

int main(){
    //CARTA:1
    char estado_1[50];
    char codigo_da_carta_1[50];
    char nome_da_cidade_1[50];
    int populacao_1;
    float area_em_km_1;
    float pib_1;
    int numero_de_pontos_turisticos_1;
      
    //CARTA:2
    char estado_2[50];
    char codigo_da_carta_2[50];
    char nome_da_cidade_2[50];
    int populacao_2;
    float area_em_km_2;
    float pib_2;
    int numero_de_pontos_turisticos_2;


    //CARTA:1
    printf("Qual é o estado da carta:1 ");
    scanf("%s", estado_1);
    
    printf("Qual é o codigo da carta: ");
    scanf("%s", codigo_da_carta_1);
    
    printf("Qual é o nome da cidade: ");
    scanf("%s", nome_da_cidade_1);
    
    printf("Qual é a populacao: ");
    scanf("%d", &populacao_1);

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
    scanf("%d", &populacao_2);
    
    printf("Qual é a area em km: ");
    scanf("%f", &area_em_km_2);
    
    printf("Qual é o pib: ");
    scanf("%f", &pib_2);
    
    printf("Qual é o numero de pontos turisticos: ");
    scanf("%d", &numero_de_pontos_turisticos_2);

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

    printf("\n");
    
    
    printf("A variavel resultado da Populacao_1 é: %d\n", populacao_1);
    printf("A variavel resultado da Area_em_km_1 é: %f\n", area_em_km_1);
    printf("A variavel resultado  da Populacao_2 é: %d\n", populacao_2);
    printf("A variavel resultado da Area_em_km_2 é: %f\n\n", area_em_km_2);
    

    printf("O Resiltado ente a População e a Area 1e2:\n");
     
    if(populacao_1 > populacao_2){
       printf("A População_1 é maior que a População_2\n");
    } else{
       printf("A População_1 é menor que a População_2\n"); 
    }
      
    if(area_em_km_1 > area_em_km_2){
       printf("A area_em_km_1 é maior que a area_em_km_1\n");
    } else{
       printf("area_em_km_1 é menor que a area_em_km_2\n"); 
    }

    printf("\n");
     
    printf("O RESULTADO È:");
    
    printf("\n");

    if(populacao_1 < populacao_2){
       printf("A Carta_1 Venceu!\n");
    } else{
       printf("A Carta_2 Venceu!\n "); 
    }


    return 0;



}

