#include <iostream>
using namespace std;

bool pertenceFibonacci(int numero) {
    int a = 0, b = 1, c = 0;

    if (numero == 0 || numero == 1) {
        return true;
    }

    while (c < numero) {
        c = a + b;
        a = b;
        b = c;
    }

    return (c == numero);
}

int main() {

    int numero = 21; 

    if (pertenceFibonacci(numero)) {
        cout << "O numero " << numero << " pertence a sequencia de Fibonacci." << endl;
    } else {
        cout << "O numero " << numero << " NAO pertence a sequencia de Fibonacci." << endl;
    }

    return 0;
}
