#include <iostream>
#include <cstdio>
using namespace std;

int main(){

    double sal, newSal;
    int inc;
    cin >> sal;

    if(sal >= 0 && sal <=400)
    {
        newSal = sal + (.15 * sal);
        inc = 15;
    }
    else if(sal > 400 && sal <=800)
    {
        newSal = sal + (.12 * sal);
        inc = 12;
    }
    else if(sal > 800 && sal <=1200)
    {
        newSal = sal + (.10 * sal);
        inc = 10;
    }
    else if(sal > 1200 && sal <=2000)
    {
        newSal = sal + (.07 * sal);
        inc = 7;
    }
    else if(sal > 2000)
    {
        newSal = sal + (.04 * sal);
        inc = 4;
    }

    printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: %d %\n", newSal, (newSal-sal),inc);


    return 0;
}


