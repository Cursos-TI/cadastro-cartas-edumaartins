#include <stdio.h>

int main(){

    int idade = 25;
    int quantidade = 1;
    float altura = 1.75;
    double peso = 90.3;
    char nome [20] = 'Eduardo';
    char letra = 'E'; 

    printf("A idade do %s é: %d\n", nome, idade);
    printf("A altura é: %e\n", altura);
    printf("O peso é: %f\n", peso);
    printf("A quantidade é: %d\n", quantidade);
    printf("A inicial do nome é: %c\n", letra);
    /*
    printf("%formato1 %formato2 %formato3 , variavel1, variavel2, variavel3)
    
    %d: Imprime um inteiro no formato decimal.
    %i: Equivalente a%d.
    %f: Imprime um numero de ponto flutuante no formato padrão.
    %e: Imprime um numero de ponto flutuante na notação cientifica.
    %c: Imprime um unico caractere.
    %s: Imprime uma cadeia  (String)") de caracteres.
    */
    
    

}