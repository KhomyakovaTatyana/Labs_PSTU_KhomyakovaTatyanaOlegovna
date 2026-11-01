#include <iostream>
#include <cmath>
using namespace std;
int main(){
    double x, Sn, Se, y, a;
    double eps = 0.0001;
    int n = 40;
    double h = 0.2;
    for (x = -2; x <= 0.001; x += h){
        Sn = 0;
        //Сумма с 40 слагаемыми
        for (int i = 1; i <= n; i++){
            a = pow(-1, i) * pow(1+x, 2 * i) / i;
            Sn += a;
        }
        //Сумма с заданной точностью
        Se = 0;
        int i = 1;
        do{
            a = pow(-1, i) * pow(1+x, 2 * i) / i;
            Se += a;
            i++;
        }while(fabs(a) >= eps);
        //Точное значение функции
        y = -log(1+pow(1+x, 2));
        cout << "x = " << x << " ";
        cout << "Sn = " << Sn << " ";
        cout << "Se = " << Se << " ";
        cout << "y = " << y << endl;
    }
    return 0;
}