#include <stdio.h>

int main(){

    float peso = 105.3;
    float altura = 1.80;
    float alturaXAltura = altura * altura;
    float imc = peso / alturaXAltura;

    printf("O IMC é %.2f", imc);

    return 0;
}