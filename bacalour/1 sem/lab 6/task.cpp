#include <iostream>
#include <cstring>
#include <cctype>
#include <windows.h>
using namespace std;
int main(){
    SetConsoleOutputCP(CP_UTF8);
    char s1[200], s2[200];
    int count = 0;
    cout << "Введите первое слово: ";
    cin.getline(s1, 200);
    cout << "Введите второе слово: ";
    cin.getline(s2, 200);
    for(int i = 0; i < strlen(s1); i++){
        for (int j = 0; j < strlen(s2); j++){
            if (tolower(s1[i]) == tolower(s2[j])){
                count ++;
                cout << "\nВариант " << count << ":\n";
                for (int k = 0; k < strlen(s2); k++){
                    if (k == j){
                        cout << s1 << endl; 
                    }
                    else{
                        for (int t = 0; t < i; t++) cout << " ";
                        cout << s2[k] << endl;
                    }
                }
            }
        }
    }
    if (count == 0) cout << "Ошибка! Нет совпадающих букв." << endl;
    return 0;
}