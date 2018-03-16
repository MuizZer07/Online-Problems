#include <iostream>
#include <cstdio>
using namespace std;

int main(){

    int n=0;
    double sum = 0.0;
    for(int i=0; i<6; i++){
        double a;
        cin >> a;

        if(a > 0){
            sum += a;
            n++;
        }

    }

    cout << n << " valores positivos" << endl;
    printf("%.1f\n", (sum/n) );

    return 0;
}



