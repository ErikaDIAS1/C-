# include <iostream>
# include <locale.h>
# include <string>
#include <stdio.h>

using namespace std;
int main ()
    {
        setlocale (LC_ALL, "Portuguese");
        string Snome, Sfuncao;
        double Dsalario,Ddesconto, Dvalordia;
        float Fsalariof;
        int Idias, imposto;

        cout << "Digite seu nome:" << endl;
        getline (cin,Snome);

        cout << "Digite sua função:" << endl;
        getline (cin, Sfuncao);

         cout << "Digite o valor/dia:" << endl;
        cin >> Dvalordia;

        cout << "Digite a quantidade de dias trabalhados:" << endl;
        cin >> Idias;

            imposto = 8/100;
            Dsalario = Dvalordia * Idias;
            Ddesconto = Dsalario * imposto;
            Fsalariof = Dsalario - Ddesconto ;

        cout << "O(A) Sr. (a) " << Snome << " receberá a quantia de: R$" << Fsalariof << endl;

        return 0;
}
