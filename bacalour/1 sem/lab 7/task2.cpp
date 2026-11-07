#include <iostream>
#include <cmath>
#include <windows.h>
#include <cstdarg>
using namespace std;
double distance(double x1, double y1, double x2, double y2){
    return sqrt(pow(x2-x1, 2) + pow(y2-y1, 2));
}
double square(double x1, double y1, double x2, double y2, double x3, double y3){
    double a = distance(x1, y1, x2, y2);
    double b = distance(x2, y2, x3, y3);
    double c = distance(x3, y3, x1, y1);
    double p = (a+b+c) / 2.0;
    return sqrt(p*(p-a)*(p-b)*(p-c));
}
double squareN(int num_v, ...){
    if (num_v < 3) return 0.0;
    va_list args;
    va_start(args, num_v);
    double x0 = va_arg(args, double);
    double y0 = va_arg(args, double);
    double x1 = va_arg(args, double);
    double y1 = va_arg(args, double);
    double s = 0.0;
    for (int i = 2; i < num_v; i++){
        double x2 = va_arg(args, double);
        double y2 = va_arg(args, double);
        s+=square(x0, y0, x1, y1, x2, y2);
        x1 = x2;
        y1 = y2;

    }
    va_end(args);
    return s;
}
int main(){
    SetConsoleOutputCP(CP_UTF8);
    cout << "Площадь треугольника: " << square(0, 0, 0, 3, 4, 0) << endl;
    cout << "Площадь квадрата: " <<squareN(4, 0.0, 0.0, 2.0, 0.0, 2.0, 2.0, 0.0, 2.0) << endl;
    cout << "Площадь пятиугольника: " << squareN(5, 0.0, 0.0, 2.0, 0.0, 3.0, 2.0, 1.0, 3.0, -1.0, 2.0) << endl;
    return 0;
}