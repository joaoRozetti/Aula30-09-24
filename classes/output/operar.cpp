#include <iostream>

using namespace std;

extern int operacao();
int a, b;

int soma(int a, int b) {
    return a + b;
}

int subtrai(int a, int b) {
    return a - b;
}

int multiplica(int a, int b) {
    return a * b;
}

int divide(int a, int b) {
    return a/b;
}

int main() {
    int a, b;
    char op;

    cout << "Digite dois numeros: ";
    cin >> a >> b;

    cout << "Escolha uma operaçao (+, -, *, /): ";
    cin >> op;

        switch (op) {
            case '+':
                cout << "Resultado: " << soma(a, b) << endl;
                break;
            case '-':
                cout << "Resultado: " << subtrai(a, b) << endl;
                break;
            case '*':
                cout << "Resultado: " << multiplica(a, b) << endl;
                break;
            case '/':
                cout << "Resultado: " << divide(a, b) << endl;
                break;
            default:
                cout << "Operação invalida!" << endl;
        }
  
    return 0;
}
