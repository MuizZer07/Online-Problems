#include <iostream>
using namespace std;

int main(){

    int n=0;
    for(int i=0; i<6; i++){
        double a;
        cin >> a;

        if(a > 0) n++;
    }

    cout << n << " valores positivos" << endl;

    return 0;
}


