#include <iostream>
#include <locale.h>

using namespace std;

    int main ()
        { setlocale(LC_ALL, "Portuguese");
            float celsius, fahrenheit, div;
            int constante;

            cout << "Digite a temperatura atual:" << endl;
            cin >> celsius ;
                 constante = 32;
                 div = 9/5;
                 fahrenheit =  div * celsius + constante;
            cout << "Em fahrenheit: "<< fahrenheit << endl;
         return 0;

        }

