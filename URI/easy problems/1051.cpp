#include <iostream>
#include <cstdio>
using namespace std;

int main(){

    double sal, tax;
    cin >> sal;

    if(sal >= 0 && sal <=2000) cout << "Isento" << endl;
    else if(sal > 2000 && sal <=3000)
    {
        sal -= 2000;
        tax = (.08 * sal);
        printf("R$ %.2f\n", tax);
    }
    else if(sal > 3000 && sal <=4500)
    {
        sal -= 3000;
        tax = (.18 * sal)+80;
        printf("R$ %.2f\n", tax);
    }
    else if(sal > 4500)
    {
        sal -= 4500;
        tax =  (.28 * sal)+350;
        printf("R$ %.2f\n", tax);
    }
    return 0;
}


