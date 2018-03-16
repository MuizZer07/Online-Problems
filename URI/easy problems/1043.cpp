#include <iostream>
#include <cstdio>
using namespace std;

int main(){

    double a, b, c;
    cin >> a >> b >> c;

    if(a+b>c && b+c>a && a+c>b ){
            double perm=a+b+c;
            printf("Perimetro = %.1f\n",perm);
        }else{
            double area=.5*(a+b)*c;
            printf("Area = %.1f\n",area);
        }


    return 0;
}

