#include <iostream>
#include <cmath>
using namespace std;

int main(){

    int a, b, sum =0;
    cin >> a >> b;

    int gr,sm;
    gr = (a+b+abs(a-b))/2;

    if(gr == a) sm =b;
    else sm = a;


    for(int i=sm+1; i<gr; i++){
        if(i%2!=0) sum += i;

    }

    cout << sum << endl;

    return 0;
}


