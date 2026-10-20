// Questões Fundamentos 1 - 8 - 19 - 20 - 9
// Questões Intermediário 11 - 12 - 23 - 21 - 13
// Questões Avançado 16 - 17 - 18 - 29 - 32
// Questão Obrigatória 35

// Questão 1. Média de duas notas

#include <stdio.h>
#include <string.h>
#include <windows.h>

int main(void)
{
    SetConsoleOutputCP (CP_UTF8);

    char nome[15];
    float n1, n2;

    printf("===== Sistema de Nota ===== \n");

    printf("Digite o nome do aluno(a): ");
    fgets(nome, sizeof(nome), stdin);
    nome[strcspn(nome, "\n")] = '\0';

    printf("Digite a nota da N1: ");
    scanf("%f", &n1);
    
    printf("Digite a nota da N2: ");
    scanf("%f", &n2);

    float media = (n1 + n2) / 2;

    printf("A média do(a) aluno(a) %s é %.2f: ", nome, media);
}

// Questão 8. Maior de dois números

#include <stdio.h>
#include <windows.h>

int main(void)
{
    SetConsoleOutputCP (CP_UTF8);
    int num1, num2;

    printf("===== Qual número é o maior =====\n");

    printf("Digite o primeiro número: ");
    scanf("%d", &num1);

    printf("Digite o segundo número: ");
    scanf("%d", &num2);

    if (num1 > num2) {
        printf("O número %d é maior que o número %d", num1, num2);
    } else if (num2 > num1)
    {
        printf("O número %d é maior que o número %d", num2, num1);
    } else
    {
        printf("Os dois números são iguais.");
    }
}

// Questão 19. Contagem regressiva

#include <stdio.h>
#include <windows.h>

int main(void)

{
    SetConsoleOutputCP(CP_UTF8);
    
    int numero;

    printf("===== Contagem Regressiva =====\n");
    
    printf("Digite o número que deseja fazer a contagem regressiva: ");
    scanf("%d", &numero);

    while (numero >= 0)
    {
        printf("%d\n", numero);
        numero--;
    }

    return 0;
}

// Questão 20. Tabela de conversão

#include <stdio.h>
#include <windows.h>

int main(void)
{
    float polegadas = 0.0;
    float centimetros;

    printf("===== Tabela de conversão ====\n");
    printf("Polegadas   Centímetros\n");

    while (polegadas <= 10.0)
    {
        centimetros = polegadas * 2.54;

        printf("%.1f         %.2f\n", polegadas, centimetros);

        polegadas = polegadas + 0.5;
    }

    return 0;
}

// Questão 9.Valor absoluto

#include <stdio.h>
#include <windows.h>
#include <math.h>

int main(void)
{
    SetConsoleOutputCP(CP_UTF8);

    double numero;

    printf("Digite um numero real: ");
    scanf("%lf", &numero);

    printf("Valor absoluto: %.1f\n", fabs(numero));

    return 0;
}

// Questão 11. Reajuste salarial

#include <stdio.h>
#include <windows.h>

int main(void)
{
    SetConsoleOutputCP(CP_UTF8);

    float reajuste;
    float salario;
    int abono;

    printf("===== Reajuste salarial =====\n");

    printf("Digite seu salario: R$ ");
    scanf("%f", &salario);

    reajuste = salario * 0.05;
    float novoSalario = salario + reajuste;

    novoSalario = (int)(novoSalario * 100 + 0.5) / 100.0;

    printf("Seu antigo salario era de R$ %.2f, "
           "com reajuste de 5%%, seu novo salario ficou em R$ %.2f\n",
           salario, novoSalario);

    if (novoSalario <= 750)
    {
        abono = 100;
        float newSalario = novoSalario + abono;

        printf("Funcionario que ganha ate R$ 750,00 recebe abono "
               "de R$ 100,00. Com isso, o novo salario ficou em R$ %.2f\n",
               newSalario);
    }

    return 0;
}

// Questão 12. Situação do aluno

#include <stdio.h>
#include <windows.h>

int main(void)
{
    SetConsoleOutputCP(CP_UTF8);

    float n1, n2;

    printf("===== Situação do aluno =====\n");

    printf("Digite a nota da N1 do(a) aluno(a): ");
    scanf("%f", &n1);
    printf("Digite a nota da N2 do(a) aluno(a): ");
    scanf("%f", &n2);

    float media = (n1 + n2) / 2;

    if (media >= 7.0)
    {
        printf("Parabés, você foi aprovado(a) com a nota %.2f ", media);
    } else if (media <= 3.0)
    {
         printf("Infelizmente você foi reprovado(a) com a nota %.2f ", media);
    } else
    {
         printf("Felizmente você foi para a recuperação com a nota %.2f ", media);
    }
    
    return 0;
}

// Questão 23. Números e seus quadrados

#include <stdio.h>
#include <windows.h>

int main(void)
{
    SetConsoleOutputCP(CP_UTF8);

    int natural;

    printf("===== Numeros e seus quadrados =====\n");

    printf("Digite o numero que deseja ver os seus respectivos quadrados: ");
    scanf("%d", &natural);

    for (int i = 1; i <= natural; i++)
    {
        printf("Numero: %d → Quadrado: %d\n", i, i * i);
    }

    return 0;
}

// Questão 21. Fatorial

#include <stdio.h>
#include <windows.h>

int main(void)
{
    SetConsoleOutputCP(CP_UTF8);

    int n;
    int fatorial = 1;

    printf("Digite um numero: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        fatorial = fatorial * i;
    }

    printf("%d! = ", n);

    for (int i = n; i >= 1; i--)
    {
        printf("%d", i);

        if (i > 1)
        {
            printf(" x ");
        }
    }

    printf(" = %d\n", fatorial);

    return 0;
}

// Questão 13. Maior de três números

#include <stdio.h>
#include <windows.h>

int main(void)
{
    SetConsoleOutputCP(CP_UTF8);

    float num1, num2, num3;
    float maior;

    printf("Digite o primeiro numero: ");
    scanf("%f", &num1);

    printf("Digite o segundo numero: ");
    scanf("%f", &num2);

    printf("Digite o terceiro numero: ");
    scanf("%f", &num3);

    if (num1 >= num2 && num1 >= num3)
    {
        maior = num1;
    }
    else if (num2 >= num3)
    {
        maior = num2;
    }
    else
    {
        maior = num3;
    }

    printf("O maior numero é: %.2f\n", maior);

    return 0;
}

// Questão 16. Menu de operações

#include <stdio.h>
#include <windows.h>
#include <string.h>

int main(void)
{
    SetConsoleOutputCP(CP_UTF8);

    int num1, num2;
    char operacoes;
    
    printf("===== Calculadora =====\n");

    printf("Digite o primeiro número: ");
    scanf("%d", &num1);

    printf("Escolha a operacao: +, -, * ou /: ");
    scanf(" %c", &operacoes);
    
    printf("Digite o segundo número: ");
    scanf("%d", &num2);

    switch (operacoes)
{
    case '+':
        int soma = num1 + num2;
        printf("A soma de %d + %d = %d",  num1, num2, soma);
        break;

    case '-':
        int subtracao = num1 - num2;
        printf("A soma de %d - %d = %d",  num1, num2, subtracao);
        break;

    case '*':
        int multiplicacao = num1 * num2;
        printf("A soma de %d * %d = %d",  num1, num2, multiplicacao);
        break;

    case '/':
        if (num2 != 0) {
            printf("Resultado: %.2f\n", (float)num1 / num2);
        }
        else {
            printf("Erro: divisao por zero!\n");
        }
        break;

    default:
        printf("Operacao invalida!\n");
        break;
}
    return 0;
}

// Questão 17. Operador alternativo de divisão

#include <stdio.h>
#include <windows.h>
#include <string.h>

int main(void)
{
    SetConsoleOutputCP(CP_UTF8);

    int num1, num2;
    char operacoes;
    
    printf("===== Calculadora =====\n");

    printf("Digite o primeiro número: ");
    scanf("%d", &num1);

    printf("Escolha a operacao: +, -, *, / ou : ");
    scanf(" %c", &operacoes);
    
    printf("Digite o segundo número: ");
    scanf("%d", &num2);

    switch (operacoes)
{
    case '+':
        int soma = num1 + num2;
        printf("A soma de %d + %d = %d",  num1, num2, soma);
        break;

    case '-':
        int subtracao = num1 - num2;
        printf("A soma de %d - %d = %d",  num1, num2, subtracao);
        break;

    case '*':
        int multiplicacao = num1 * num2;
        printf("A soma de %d * %d = %d",  num1, num2, multiplicacao);
        break;

    case '/':
    
    case ':':
        if (num2 != 0) {
            printf("Resultado: %.2f\n", (float)num1 / num2);
        } else {
            printf("Erro: divisao por zero!\n");
        }
        break;

    default:
        printf("Operacao invalida!\n");
        break;
}
    return 0;
}

// Questão 18. Menu interativo

#include <stdio.h>
#include <windows.h>

int main(void)
{
    SetConsoleOutputCP(CP_UTF8);

    int num1, num2;
    int opcoes;

    printf("===== Menu interativo =====\n");

    do
    {
        printf("\n1 - Somar\n");
        printf("2 - Subtrair\n");
        printf("3 - Multiplicar\n");
        printf("4 - Dividir\n");
        printf("5 - Sair\n");

        printf("Escolha uma das opções: ");
        scanf("%d", &opcoes);

        if (opcoes >= 1 && opcoes <= 4)
        {
            printf("Digite o primeiro número: ");
            scanf("%d", &num1);

            printf("Digite o segundo número: ");
            scanf("%d", &num2);
        }

        switch (opcoes)
        {
            case 1: {
                int soma = num1 + num2;
                printf("A soma de %d + %d = %d\n",
                       num1, num2, soma);
                break;
            }

            case 2: {
                int subtracao = num1 - num2;
                printf("A subtração de %d - %d = %d\n",
                       num1, num2, subtracao);
                break;
            }

            case 3: {
                int multiplicacao = num1 * num2;
                printf("A multiplicação de %d * %d = %d\n",
                       num1, num2, multiplicacao);
                break;
            }

            case 4:
                if (num2 != 0) {
                    printf("Resultado: %.2f\n",
                           (float)num1 / num2);
                } else {
                    printf("Erro: divisão por zero!\n");
                }
                break;

            case 5:
                printf("Saindo do programa...\n");
                break;

            default:
                printf("Operação inválida!\n");
                break;
        }

    } while (opcoes != 5);

    return 0;
}

// Questão 29. Construção de um número a partir de seus dígitos

#include <stdio.h>
#include <windows.h>

int main(void)
{
    SetConsoleOutputCP(CP_UTF8);

    int n;

    printf("Digite a quantidade de algarismos: ");
    scanf("%d", &n);

    int digitos[n];

    printf("Digite os %d algarismos (de 0 a 9): ", n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &digitos[i]);
    }

    long long numero = 0;

    for (int i = 0; i < n; i++)
    {
        numero = numero * 10 + digitos[i];
    }

    printf("Numero construido: %lld\n", numero);

    return 0;
}

// Questão 32. Sequência de tamanho conhecido

#include <stdio.h>
#include <windows.h>

int main(void)
{
    SetConsoleOutputCP(CP_UTF8);

    int n, numero;
    int pares = 0, impares = 0;

    int maiorPar, menorPar;
    int maiorImpar, menorImpar;

    printf("Quantos numeros serao informados? ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        printf("Digite o numero %d: ", i);
        scanf("%d", &numero);

        if (numero % 2 == 0)
        {
            if (pares == 0)
            {
                maiorPar = numero;
                menorPar = numero;
            }
            else
            {
                if (numero > maiorPar)
                    maiorPar = numero;

                if (numero < menorPar)
                    menorPar = numero;
            }

            pares++;
        }
        else
        {
            if (impares == 0)
            {
                maiorImpar = numero;
                menorImpar = numero;
            }
            else
            {
                if (numero > maiorImpar)
                    maiorImpar = numero;

                if (numero < menorImpar)
                    menorImpar = numero;
            }

            impares++;
        }
    }

    printf("\nQuantidade de pares: %d\n", pares);
    printf("Quantidade de impares: %d\n", impares);

    if (pares > 0)
    {
        printf("Maior par: %d\n", maiorPar);
        printf("Menor par: %d\n", menorPar);
    }
    else
    {
        printf("Nao foram informados numeros pares.\n");
    }

    if (impares > 0)
    {
        printf("Maior impar: %d\n", maiorImpar);
        printf("Menor impar: %d\n", menorImpar);
    }
    else
    {
        printf("Nao foram informados numeros impares.\n");
    }

    return 0;
}

// Questão 35. Programa de conversão de unidades

#include <stdio.h>
#include <Windows.h>

int main(void)
{
    SetConsoleOutputCP (CP_UTF8);
    int opcao, conversao;
    double valor, resultado;

    do
    {
        printf("\n===== CONVERSOR DE UNIDADES =====\n");
        printf("1. Peso\n");
        printf("2. Volume\n");
        printf("3. Comprimento\n");
        printf("4. Sair\n");
        printf("Escolha uma opcão: ");
        scanf("%d", &opcao);

        if (opcao == 4)
        {
            printf("Programa encerrado!\n");
            break;
        }

        switch (opcao)
        {
        case 1:
            printf("\n--- PESO ---\n");
            printf("1. Libra para Quilograma\n");
            printf("2. Quilograma para Libra\n");
            printf("3. Onca para Grama\n");
            printf("4. Grama para Onca\n");
            break;

        case 2:
            printf("\n--- VOLUME ---\n");
            printf("1. Galao para Litro\n");
            printf("2. Litro para Galao\n");
            printf("3. Onca Liquida para Mililitro\n");
            printf("4. Mililitro para Onca Liquida\n");
            break;

        case 3:
            printf("\n--- COMPRIMENTO ---\n");
            printf("1. Milha para Quilometro\n");
            printf("2. Quilometro para Milha\n");
            printf("3. Jarda para Metro\n");
            printf("4. Metro para Jarda\n");
            break;

        default:
            printf("Opcao inválida!\n");
            continue;
        }

        printf("Escolha a conversao: ");
        scanf("%d", &conversao);

        if (conversao < 1 || conversao > 4)
        {
            printf("Conversao inválida!\n");
            continue;
        }

        printf("Digite o valor: ");
        scanf("%lf", &valor);

        switch (opcao)
        {
        case 1:
            switch (conversao)
            {
            case 1:
                resultado = valor * 0.4536;
                break;
            case 2:
                resultado = valor / 0.4536;
                break;
            case 3:
                resultado = valor * 28.3495;
                break;
            case 4:
                resultado = valor / 28.3495;
                break;
            }
            break;

        case 2:
            switch (conversao)
            {
            case 1:
                resultado = valor * 3.7854;
                break;
            case 2:
                resultado = valor / 3.7854;
                break;
            case 3:
                resultado = valor * 29.5735;
                break;
            case 4:
                resultado = valor / 29.5735;
                break;
            }
            break;

        case 3:
            switch (conversao)
            {
            case 1:
                resultado = valor * 1.6093;
                break;
            case 2:
                resultado = valor / 1.6093;
                break;
            case 3:
                resultado = valor * 0.9144;
                break;
            case 4:
                resultado = valor / 0.9144;
                break;
            }
            break;
        }

        printf("\nResultado: %.4f\n", resultado);

    } while (opcao != 4);

    return 0;
}