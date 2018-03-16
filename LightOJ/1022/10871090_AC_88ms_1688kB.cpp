#include <iostream>
#include <cmath>
#include <cstdio>

#define PI 2*acos(0.0)

using namespace std;

int main(){

    int t;
    cin >> t;
    for(int i=0; i<t;i++){
        double r;
        cin >> r;

        double area =  (((2*r)*(2*r)) - (PI * r * r)) + 10E-9;

        printf("Case %d: %.2f", i+1, area);
        cout << endl;

    }


    return 0;
}
