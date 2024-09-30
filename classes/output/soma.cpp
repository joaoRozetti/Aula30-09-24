#include<iostream>

using namespace std;

int extern operacao();
int a, b;

int soma(int a, int b){
    return a+b;
}

int sub(int a, int b){
    return a-b;
}

int mult(int a, int b){
    return a*b;
}

int divi(int a, int b){
    return a/b;
}

int main(){
    cout<<"Escreva os numeros que deseja fazer as operacoes";
    cin>>a>>b;
    cout<<"A soma eh: "<<soma<<"A sub eh: "<<sub<<"A mult eh: "<<mult<<"A divisao eh: "<<divi<<endl;
}
