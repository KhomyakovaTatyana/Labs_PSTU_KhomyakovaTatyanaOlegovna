#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    for (int i = 1; i <= (n+1)/2; ++i){
        for (int j = 1; j <= n/2 - i+1; ++i){
            cout << " ";
        }
        for (int j = 1; j <= 1+(j-1)*2; ++j){
            cout << "*";
        }
        cout << "\n";
    }
    return 0;
}