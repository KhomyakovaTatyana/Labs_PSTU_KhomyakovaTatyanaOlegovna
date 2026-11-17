#include <iostream>
using namespace std;
int main(){
    int a = 10, b = 20;
    int&r = a;
    r = b;
    r++;
    cout << a << " "<< b;
}