#include <iostream>
#include <cstdio>
using namespace std;
int main(){
    system("chcp 65001>nul");
    int n, m;
    cout<<"Введите n и m: ";
    cin>>n>>m;
    int n0 = n, m0 = m;
    cout << "n++m = " << (n++ * m) << " n=" << n << " m=" << m << endl;
    n = n0, m = m0;
    cout << "n++<m "<< (n++ < m) << " n=" << n << " m=" << m << endl;
    n = n0, m = m0;
    cout << "m-->m" << (m-- > m) << " n=" << n << " m="<< m <<endl;
    return 0;
}