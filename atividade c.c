#include <stdio.h>
//João Papo-de-Pescador, homem de bem, comprou um microcomputador para controlar o rendimento diário de seu trabalho.
//Toda vez que ele traz um peso de peixes maior que o estabelecido pelo regulamento de pesca do estado de São Paulo (50 quilos) deve pagar uma multa de R$ 4,00 por quilo excedente.
//João precisa que você faça um programa que leia a variável peso (peso de peixes) e calcule o excesso.
//Gravar na variável excesso a quantidade de quilos além do limite e na variável multa o valor da multa que João deverá pagar. Imprima os dados do programa com as mensagens adequadas.
int main(){
    float peso_peixe=0,valor_multa=0,calculo_multa=0;
    printf("*******************BEM VINDO AO CALCULO DE MULTA*******************");
    printf("\nDigite o peso do peixe pescado:");  
    scanf("%f",&peso_peixe);
    if (peso_peixe>50)
    {
        calculo_multa=peso_peixe-50;
        valor_multa=calculo_multa*4.00;
        printf("O peixe pescado tem %.2lf lembrando que o valor da multa é de R$ 4,00 por quilo excedente(50kg)",peso_peixe);
        printf("\nO valor da multa sera de R$ %.2lf",valor_multa);
    }
    else{
        printf("NÃO SERÁ NECESSERÍO PAGAR MULTA O PESO DO PEIXE É %.2lfKG E NÃO EXCEDEU O PESO REGULAMENTADO (50KG)",peso_peixe);
    }
    



}