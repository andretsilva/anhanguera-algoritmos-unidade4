/*

Desenvolva um programa em C que:
1. Solicite ao usuário o valor da sua hora de trabalho e a quantidade de horas trabalhadas no
mês.
3
2. Calcule o salário bruto utilizando a função calcular_salario_bruto().
3. Calcule o desconto de 9% sobre o salário bruto utilizando a função calcular_desconto().
4. Calcule o salário líquido utilizando a função calcular_salario_liquido(), que deve subtrair o
desconto do valor bruto.
5. Exiba o salário bruto, o desconto e o salário líquido ao usuário.
Cenário: Imagine que você está desenvolvendo um programa para uma empresa que deseja
automatizar o cálculo dos salários de seus funcionários que trabalham por hora. O cálculo precisa
ser realizado de forma modular, separando o cálculo do salário bruto, os descontos e o valor líquido
a ser pago ao funcionário.
*/

#include <stdio.h>
#include <stdlib.h>

float calcular_salario_bruto(float valor_hora, float horas_trabalhadas){
    return valor_hora * horas_trabalhadas;
}

float calcular_desconto(float salario_bruto){
    return salario_bruto * 0.09;
}

float calcular_salario_liquido(float salario_bruto, float desconto){
    return salario_bruto - desconto;
}

int main(){
    float valor_hora, horas_trabalhadas, salario_bruto, desconto, salario_liquido;

    printf("Digite o valor da sua hora de trabalho: ");
    scanf("%f", &valor_hora);

    printf("Digite a quantidade de horas trabalhadas no mês: ");
    scanf("%f", &horas_trabalhadas);

    salario_bruto = calcular_salario_bruto(valor_hora, horas_trabalhadas);
    desconto = calcular_desconto(salario_bruto);
    salario_liquido = calcular_salario_liquido(salario_bruto, desconto);

    printf("Salário bruto: R$ %.2f\n", salario_bruto);
    printf("Desconto: R$ %.2f\n", desconto);
    printf("Salário líquido: R$ %.2f\n", salario_liquido);

    return 0;
}