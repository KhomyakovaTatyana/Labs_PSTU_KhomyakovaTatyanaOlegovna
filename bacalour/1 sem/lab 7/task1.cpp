#include <iostream>
#include <windows.h>
using namespace std;
void func(int a[], int& n){
    int m = 0;
    for (int i = 0; i < n; i++){
        if(a[i] % 2 != 0){
            a[m] = a[i];
            m++;
        }
    }
    n = m;
}
void func(char s[]){
    char res[200];
    int j = 0;
    int i = 0;
    int word_count = 0;
    while (s[i] != '\0'){
        if (s[i] == ' '){
            i++;
        }
        if (s[i]!= '\0') {
            word_count++; 
            if (word_count % 2 != 0){
                while (s[i] != ' ' && s[i] != '\0'){
                    res[j] = s[i];
                    j++;
                    i++;
                }
                res[j] = ' ';
                j++;
            }
            else{
                while (s[i] != ' ' && s[i] != '\0'){
                    i++;
                }
            }
        }
    }
    if (j > 0 && res[j-1] == ' '){
        j --;
    }
    res[j] = '\0';
    for (int k = 0; k <= j; k++){
        s[k] = res[k];
    }
}
int main(){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    int a[100], n;
    cout << "Введите количество элементов: ";
    cin >> n;
    cout << "Введите элементы массива: ";
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    func(a, n);
    cout << "Массив после удаления четных эелементов: ";
    for (int i = 0; i < n; i++){
        cout << a[i] << " ";
    }
    char s[200];
    cout << "\nВведите строку: ";
    cin.ignore();
    cin.getline(s, 200);
    func(s);
    cout << "Строка после удаления четных слов: " << s;
    return 0;
}
