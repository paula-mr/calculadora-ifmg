#import "Calculadora.h"

int soma(int operadorA, int operadorB) {
    return operadorA + operadorB;
}

int subtracao(int minuendo, int subtraendo) {
    return minuendo - subtraendo;
}

float divisao(int numerador, int denominador) {
    if (denominador == 0)
        return 0;

    return (float)numerador/(float)denominador;
}

int multiplicacao(int operadorA, int operadorB) {
    return operadorA*operadorB;
}

int potenciacao(int base, int potencia) {
    return pow(base, potencia);
}

