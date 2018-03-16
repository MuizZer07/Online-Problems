#include <iostream>
#include <cstdio>
#define PI 3.14159
using namespace std;

int main(){

    double r;
    cin >> r;

    double vol = (4/3.0) * PI * r * r *r;

    printf("VOLUME = %.3f", vol );
    cout << endl;


    return 0;
}

