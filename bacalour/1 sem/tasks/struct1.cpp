#include <iostream>
#include <windows.h>
using namespace std;
struct Advertising {
    double announcements;
    double visitors;
    double profit;
    double count(){
        return announcements*visitors*profit;
    }
};
int main() {
    SetConsoleOutputCP(CP_UTF8);
    Advertising a;
    cout << "Введите количество объявлений: ";
    cin >> a.announcements;
    cout << "Введите процент посетителей, которые нажали на объявление: ";
    cin >> a.visitors;
    cout << "Введите средний заработок от каждого нажатия на объявление: ";
    cin >> a.profit;
    cout << "Ваш доход: "<<a.count();
    return 0;
}
