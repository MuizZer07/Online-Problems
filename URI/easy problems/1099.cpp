#include <iostream>
#include <cmath>
using namespace std;

int main(){

    int t;
    cin >> t;
    int odd[t];


    for(int l=0; l<t;l++){
        int a, b, sum =0;
        cin >> a >> b;

        int gr,sm;
        gr = (a+b+abs(a-b))/2;

        if(gr == a) sm =b;
        else sm = a;


        for(int i=sm+1; i<gr; i++){
            if(i%2!=0) sum += i;

        }

        odd[l] = sum;
    }
    for(int l=0; l<t;l++) cout << odd[l] << endl;

    return 0;
}



