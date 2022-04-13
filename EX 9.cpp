#include <iostream>
#include <locale.h>

using namespace std;

    int main ()
        {
            int nascimento, id, anoatual;
            cout << "Digite sua idade:" << endl;
            cin >> id ;

            cout << "Digite o ano atual:"<< endl;
            cin >> anoatual;

            nascimento = anoatual - id;
            cout << "O seu ano de nascimento foi:" << nascimento << endl;

        }
