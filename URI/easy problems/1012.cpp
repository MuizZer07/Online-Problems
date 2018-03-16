#include <iostream>
#include <cstdio>
#define PI 3.14159
using namespace std;

int main(){

    double A, B, C;
    cin >> A >> B >> C;

    double tri = 0.5 * A * C;
    double cir = PI * C * C;
    double tra = ((A+B)/2) * C;
    double sqr = B * B;
    double rec = A * B;

    printf("TRIANGULO: %.3f\nCIRCULO: %.3f\nTRAPEZIO: %.3f\nQUADRADO: %.3f\nRETANGULO: %.3f", tri, cir, tra, sqr, rec );
    cout << endl;


    return 0;
}


