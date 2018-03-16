#include <iostream>
#include <cmath>
using namespace std;

int main(){

    int a,b;
    cin >> a >> b;

    int gr = (a+b+abs(a-b))/2;
    int sm;
    if(gr==a) sm=b;
    else sm=a;

    int total;

    if(a == gr) total = (24-gr)+sm;
    else total = gr - sm;

    cout << "O JOGO DUROU " << total << " HORA(S)" << endl;

    return 0;
}
