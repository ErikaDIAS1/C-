#include <iostream>
#include <locale.h>

using namespace std;

    int main ()
        {
            float divisao, num, quadrado;
            int dois, cinco;
            cout << "Digite um numero real:" << endl;
            cin >> num ;

            cinco = 5;
            dois = 2;

            quadrado = num*num;
            cout << quadrado << endl;
            cout << "O quadrado do numero e:" << quadrado << endl;
            divisao = quadrado/cinco;
            cout << "A quinta parte do numero :" << divisao << endl;

        }
