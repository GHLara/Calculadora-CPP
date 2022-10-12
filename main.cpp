#include <iostream>
#include "Calculator.h"

using namespace std;

int main()
{
    double x = 0.0;
    double y = 0.0;
    double result = 0.0;
    char oper = '+';
    cout <<"Calculadora!" << endl;
    cout <<"Digite uma operação\n" << "Ex: 10 + 12\n>>>";
    Calculator c;
    while (true)
    {
        cin >> x >> oper >> y;
        if(oper == '/' && y == 0){
            cout <<"Divisão por zero! Tente Novamente" << endl;
            continue;
        }
        else{
            result = c.Calculate(x, oper, y);
        }
        cout << "Resultado: " << result << endl;
        cout << "Digite outra operação:\n>>>";
    }
    return 0;

}
