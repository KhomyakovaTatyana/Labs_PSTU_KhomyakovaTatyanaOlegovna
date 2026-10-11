#include <iostream>
#include <cmath>
using namespace std;
int main(){
    //float
    float a1 = 1000, b1 = 0.0001;
    float k1 =  (pow(a1-b1, 4)) - (pow(a1 ,4) - 4*pow(a1, 3)*b1+6*pow(a1,2)*pow(b1, 2));
    float r1 = pow(b1, 4) - 4*a1*pow(b1, 3);
    float num1 = k1/r1;
    cout<<"float: "<<num1<<endl;
    //double
    double a2 = 1000, b2 = 0.0001;
    double k2 =  (pow(a2-b2, 4)) - (pow(a2 ,4) - 4*pow(a2, 3)*b2+6*pow(a2,2)*pow(b2, 2));
    double r2 = pow(b2, 4) - 4*a2*pow(b2, 3);
    double num2 = k2/r2;
    cout<<"double: "<<num2<<endl;
    return 0;
}