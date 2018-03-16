#include <iostream>
#include <cstdio>
using namespace std;

int main(){

    int x, y;
    cin >> x >> y;

    double total;

    switch(x){
        case 1:
            total = y * 4.00;
            break;
        case 2:
            total = y * 4.50;
            break;
        case 3:
            total = y * 5.00;
            break;
        case 4:
            total = y * 2.00;
            break;
        case 5:
            total = y * 1.50;
            break;
    }



    printf("Total: R$ %.2f\n", total );


    return 0;
}



