#include <iostream>
#include <math.h>

// Declaração de Usos
using namespace std;

// Menu de Operação.
float somar(float num1, float num2)
{
    return num1 + num2;
}

float subtrair(float num1, float num2)
{
    return num1 - num2;
}

float multiplicar(float num1, float num2)
{
    return num1 * num2;
}

float dividir(float num1, float num2)
{
    if (num2 == 0)
    {
        cout << "Erro: Divisao por zero!" << endl;
        return 0;
    }
    else
    {
        return num1 / num2;
    }
}

float media(float num1, float num2)
{
    return (num1 + num2) / 2;
}

int modulo(int num1, int num2)
{
    return num1 % num2;
}

float porcentagem(float num1, float num2)
{
    return 100.0 * (num1 / num2);
}

float quadrado(float num1)
{
    return num1 * num1;
}

float raizQuadrada(float num1)
{
    if (num1 < 0)
    {
        cout << "Erro: Raiz quadrada de um número negativo!" << endl;
        return 0;
    }
    else
    {
        return sqrt(num1);
    }
}

int main()
{
    float num1, num2;
    char operacao;

    // loop (responsável Por refazer a conta) e Receber os valores
    do
    {
        cout << "Digite o primeiro valor: ";
        cin >> num1;

        cout << "Digite o segundo valor: ";
        cin >> num2;

        cout << "Escolha a operação:" << endl;
        cout << "1 - Somar" << endl;
        cout << "2 - Subtrair" << endl;
        cout << "3 - Multiplicar" << endl;
        cout << "4 - Dividir" << endl;
        cout << "5 - Media" << endl;
        cout << "6 - Modulo" << endl;
        cout << "7 - Porcentagem" << endl;
        cout << "8 - Elevado ao quadrado" << endl;
        cout << "9 - Raiz quadrada" << endl;
        cout << "Digite a sua escolha: ";
        cin >> operacao;

        // Fazer as operações ,com base na escolha.
        switch (operacao)
        {
        case '1':
            cout << "Resultado da soma: " << somar(num1, num2) << endl;
            break;
        case '2':
            cout << "Resultado da subtração: " << subtrair(num1, num2) << endl;
            break;
        case '3':
            cout << "Resultado da multiplicação: " << multiplicar(num1, num2) << endl;
            break;
        case '4':
            cout << "Resultado da divisão: " << dividir(num1, num2) << endl;
            break;
        case '5':
            cout << "Resultado da media: " << media(num1, num2) << endl;
            break;
        case '6':
            cout << "Resultado do modulo: " << modulo((int)num1, (int)num2) << endl;
            break;
        case '7':
            cout << "Resultado da porcentagem: " << porcentagem(num1, num2) << endl;
            break;
        case '8':
            cout << "Resultado do quadrado: " << quadrado(num1) << endl;
            break;
        case '9':
            cout << "Resultado da raiz quadrada: " << raizQuadrada(num1) << endl;
            break;
        default:
            cout << "Operação inválida!" << endl;
        }
        // Verificação para Continuar Calculando ("Pause")
        cout << "Deseja fazer outro calculo? (s/n): ";
        cin >> operacao;
    } while (operacao == 's' || operacao == 'S');

    return 0;
}