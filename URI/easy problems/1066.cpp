#include <iostream>
using namespace std;

int main(){

    int n=0, m=0, p=0, ne=0;
    double sum = 0.0;
    for(int i=0; i<5; i++){
        int a;
        cin >> a;

        if(a % 2 == 0) n++;
        else if(a%2==1||a%2==-1)m++;

        if(a>0) p++;
        else if(a<0) ne++;


    }

    cout << n << " valores par(es)" << endl << m << " valor(es) impar(es)" << endl << p << " valor(es) positivo(s)" << endl << ne << " valor(es) negativo(s)" << endl;

    return 0;
}



