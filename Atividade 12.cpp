# include <iostream>
# include <locale.h>

using namespace std;
int main ()
    {
        float salario, aumento, porcentagem,num, novo;

        cout << "Digite o valor do seu salario atual: " << endl;
        cin >> salario;
        cout << "Porcentagem do futuro aumento:" <<endl;
        cin >> num;

            porcentagem = num/100;

            aumento = salario * porcentagem;

            novo =  salario + aumento;

        cout << "O seu novo salario vale: " << novo << endl;
}
