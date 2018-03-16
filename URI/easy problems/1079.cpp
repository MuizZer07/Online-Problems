#include <iostream>
#include <cstdio>
using namespace std;

int main(){

    int n;
    cin >> n;
    double avg[n];

    for(int i=0;i<n;i++){
        double sum = 0;
     for(int j=0; j<3;j++){
        double a;
        cin >> a;

        if(j==0) a *=2;
        else if(j==1) a *=3;
        else if(j==2) a *=5;

        sum += a;

     }
        sum /=10;
        avg[i] = sum;
    }

    for(int i=0;i<n;i++) printf("%.1f\n", avg[i]);
    return 0;
}
