#include <iostream>
using namespace std;

extern int soma(int a, int b);
extern int subtrai(int a, int b);
extern int multiplica(int a, int b);
extern int divide(int a, int b);

int operacao(int a, int b, char op) {
    switch (op) {
        case '+':
            return soma(a, b);
        case '-':
            return subtrai(a, b);
        case '*':
            return multiplica(a, b);
        case '/':
            return divide(a, b);
        default:
            cout << "Operação invalida!" << endl;
            return 0;
    }
}

int main() {
    int a, b;
    char op;

    cout << "Digite dois numeros: ";
    cin >> a >> b;

    cout << "Escolha uma operacao (+, -, *, /): ";
    cin >> op;

    cout << "Resultado: " << operacao(a, b, op) << endl;

    return 0;
}
