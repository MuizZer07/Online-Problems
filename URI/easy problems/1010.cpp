#include <iostream>
#include <cstdio>
using namespace std;

int main(){

    int pr1code, pr1unit,pr2code, pr2unit;
    double pr1price, pr2price;
    cin >> pr1code >> pr1unit >> pr1price;
    cin >> pr2code >> pr2unit >> pr2price;

    double pr1 = pr1unit * pr1price, pr2 = pr2unit * pr2price;
    double total = pr1 + pr2;

    printf("VALOR A PAGAR: R$ %.2f", total );
    cout << endl;


    return 0;
}



