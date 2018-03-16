#include <iostream>
#include <cmath>
using namespace std;

int main(){

    int a,b,c,d;
    cin >> a >> b >> c >> d;

    int gr = (a+c+abs(a-c))/2;
    int sm;
    if(gr==a) sm=c;
    else sm=a;

    int totalhr, totalmin;

    if(a == gr) totalhr = (24-gr)+sm;
    else totalhr = gr - sm;

    if(b<=d) totalmin = abs(b - d);
    else {
        totalmin = (60-b)+d;
        totalhr--;
    }
    cout << "O JOGO DUROU " << totalhr << " HORA(S) E "<< totalmin << " MINUTO(S)" << endl;

    return 0;
}

