#include <iostream>
#include <windows.h>
using namespace std;
int func(int a[10][10], int n){
    int max = a[0][0];
    int k = 0;
    for (int i = 0; i < n; i++){
        if (a[i][i]>max) max = a[i][i];
    }
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            if (a[i][j] > max) k++;
        }
    }
    return k;
}
int main(){
    SetConsoleOutputCP(CP_UTF8);
    int a[10][10];
    int n;
    cout << "Введите размер массива: ";
    cin >> n;
    cout << "Введите элементы массива: ";
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cin >> a[i][j];
        }
    }
    cout << "Количество элементов: " << func(a, n);
    return 0;
}