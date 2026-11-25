#include <iostream>
#include <windows.h>
#include <string>
using namespace std;
struct Advertising {
    string FIO;
    double days;
    double profit;
    double prem;
    double count(){
        return days*profit+prem;
    }
};
int main() {
    SetConsoleOutputCP(CP_UTF8);
    Advertising a;
    cout << "Введите ФИО: ";
    cin >> a.FIO;
    cout << "Введите количество отработанных дней: ";
    cin >> a.days;
    cout << "Введите оплату за день: ";
    cin >> a.profit;
    cout << "Введите премию: ";
    cin >> a.prem;
    cout << "Заработная плата: "<<a.count();
    return 0;
}