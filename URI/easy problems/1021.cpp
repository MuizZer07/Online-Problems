#include <iostream>
#include <cstdio>
using namespace std;

int main(){

    double A;
    cin >> A;

    int dec, frac;

    dec = A;
    frac =  (A * 100)  -  (dec * 100);

    int nt100, nt50, nt20,nt10, nt5, nt2;
    int cn1, cn05, cn25, cn10, cn005, cn001;


    nt100 = dec/100;
    nt50 = (dec%100)/50;
    nt20 = ((dec%100)%50)/20;
    nt10 = (((dec%100)%50)%20)/10;
    nt5 = ((((dec%100)%50)%20)%10)/5;
    nt2 = (((((dec%100)%50)%20)%10)%5)/2;
    cn1 = ((((((dec%100)%50)%20)%10)%5)%2)/1;

    cn05 =   frac/50;
    cn25 =  (frac%50)/25;
    cn10 =  ((frac%50)%25)/10;
    cn005 = (((frac%50)%25)%10)/5;
    cn001 = ((((frac%50)%25)%10)%5)/1;


    cout << "NOTAS:" <<endl << nt100<< " nota(s) de R$ 100.00" << endl
         << nt50<< " nota(s) de R$ 50.00" << endl
         << nt20<< " nota(s) de R$ 20.00" << endl
         << nt10<< " nota(s) de R$ 10.00" << endl
         << nt5<< " nota(s) de R$ 5.00" << endl
         << nt2<< " nota(s) de R$ 2.00" << endl;



    cout << "MOEDAS:" <<endl << cn1<< " moeda(s) de R$ 1.00" << endl
         << cn05<< " moeda(s) de R$ 0.50" << endl
         << cn25<< " moeda(s) de R$ 0.25" << endl
         << cn10<< " moeda(s) de R$ 0.10" << endl
         << cn005<< " moeda(s) de R$ 0.05" << endl
         << cn001<< " moeda(s) de R$ 0.01" << endl;

    return 0;
}


