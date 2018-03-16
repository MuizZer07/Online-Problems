#include <iostream>
#include <cstdio>
using namespace std;

int main(){

    int A, B;
    cin >> A >> B;

    int dis = A*B;

    double m = dis / 12.0;
    printf("%.3f", m );
    cout << endl;


    return 0;
}

