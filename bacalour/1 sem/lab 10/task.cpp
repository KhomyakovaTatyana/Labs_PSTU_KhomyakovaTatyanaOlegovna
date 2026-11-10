#include <iostream>
#include <windows.h>
#include <string>
using namespace std;
int main(){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    int n;
    cout << "Введите размер массива: ";
    cin >> n;
    cin.ignore();
    string* p = new string[n];
    cout << "Введите строки массива: " << endl;
    for (int i = 0; i < n; i++){
        getline(cin, p[i]);
    }
    int k;
    cout << "Введите количество строк, которое надо удалить: ";
    cin >> k;
    for (int i = 0; i < k; i++){
        p[i] = '\0';
    }
    cout << "Получившийся массив: ";
    for (int i = 0; i < n; i++){
        cout << p[i];
    }
    delete p;
    delete [] p;
    return 0;
}