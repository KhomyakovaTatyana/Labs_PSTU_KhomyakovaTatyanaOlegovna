#include <iostream>
#include <cmath>
#include <windows.h>
using namespace std;
int main(){
    SetConsoleOutputCP(CP_UTF8);
    /*Для a_n = e^(-sqrt(n)) рекуррентная формула получается так:
    a_n+1/a_n = e^(-sqrt(n-1))/e^(-sqrt(n)) = e^(-(sqrt(n-1)-sqrt(n))) = e^(-1/(sqrt(n) + sqrt(n+1)))
    Откуда a_n+1 = a_n * e^(-1/(sqrt(n)+sqrt(n+1))), первый член a_1 = e^-1*/
    double a = exp(-1.0);
    double s = 0;
    for (int n = 1; n <= 9; n++){
        s += a; //добавляем a_n
        a = a * exp(-1.0 / (sqrt((double)n) + sqrt((double)(n+1)))); // считаем a_n+1
    }
    cout << "Сумма 9 членов ряда = "<< s << endl;
    return 0;
}