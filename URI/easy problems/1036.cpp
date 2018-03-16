#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;

int main(){

    double a, b, c;

    cin >> a >> b >> c;

    if(a == 0) cout << "Impossivel calcular" << endl;
    else if((b*b - 4 * a *c) < 0) cout << "Impossivel calcular" << endl;
    else{
        double r1 = (-b + sqrt(b*b - 4 * a *c))/ (2 * a);
        double r2= (-b - sqrt(b*b - 4 * a *c))/ (2 * a);

        printf("R1 = %.5f\nR2 = %.5f\n", r1,r2 );
    }



    return 0;
}

