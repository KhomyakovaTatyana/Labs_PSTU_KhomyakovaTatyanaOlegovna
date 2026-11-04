#include <iostream>
#include <windows.h>
using namespace std;
int main(){
    SetConsoleOutputCP(CP_UTF8);
    int a[100], n, k;
    cout << "Введите количество элементов: ";
    cin >> n;
    cout << "Введите элементы массива: ";
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    cout << "Введите k: ";
    cin >> k;
    //Вывод массива по кругу
    cout << "Исходный массив: ";
    for (int i = k - 1; i < n; i++) cout << a[i] << " ";
    for (int i = 0; i < k - 1; i++) cout << a[i] << " ";
    cout << endl;
    //Сортировка по возрастанию
    for (int i = 0; i < n-1; i++){
        for (int j = 0; j < n-1; j++){
            if (a[j] > a[j-1]){
                int t = a[j];
                a[j] = a[j+1];
                a[j+1] = t;
            }
        }

    }
    //Удаление четных элементов
    int m = 0;
    for (int i = 0; i < n; i++){
        if (a[i] % 2 != 0){
            a[m] = a[i];
            m++;
        }
    }
    n = m; 
    //Вывод результата по кругу
    cout << "Итоговый массив: ";
    if (n>0){
        k = (k-1)%n;
        for (int i = k; i < n; i++) cout << a[i] << " ";
        for (int i = 0; i < k; i++) cout << a[i] << " ";
    }
    return 0;
}