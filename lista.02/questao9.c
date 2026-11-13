#include <stdio.h>
#include <Windows.h>

double saldo_apos_meses(double saldo, double taxa, double pagamento, int meses);

int main(void) {

    SetConsoleOutputCP (CP_UTF8);
    
    double divida, juros, pagamento;
    int meses;

    printf("Divida inicial (R$): ");
    if (scanf("%lf", &divida) != 1) return 1;
    printf("Taxa mensal (%%): ");
    if (scanf("%lf", &juros) != 1) return 1;
    printf("Pagamento mensal (R$): ");
    if (scanf("%lf", &pagamento) != 1) return 1;
    printf("Quantidade de meses: ");
    if (scanf("%d", &meses) != 1) return 1;

    if (divida < 0 || juros < 0 || pagamento <= 0 || meses < 0 || meses > 10000) {
        printf("Dados inválidos: divida e juros >= 0; pagamento > 0; meses de 0 a 10000.\n");
        return 1;
    }

    double saldo = saldo_apos_meses(divida, juros, pagamento, meses);
    printf("Saldo devedor apos %d meses: R$ %.2f\n", meses, saldo);
    return 0;
}

double saldo_apos_meses(double saldo, double taxa, double pagamento, int meses) {
    if (saldo <= 0) {
        return 0.0;
    }
    if (meses == 0) {
        return saldo;
    }
    double saldo_proximo = saldo * (1.0 + taxa / 100.0) - pagamento;
    if (saldo_proximo <= 0) {
        return 0.0;
    }
    return saldo_apos_meses(saldo_proximo, taxa, pagamento, meses - 1);
}
