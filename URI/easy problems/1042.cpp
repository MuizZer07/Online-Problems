#include <iostream>
using namespace std;

int main(){

    int a[3], b[3];

    for(int i=0; i<3;i++){
        cin >> a[i];
        b[i] =  a[i];
    }

    for(int i=0; i<2;i++){
        for(int j=1; j<3;j++){
        if(b[i]>b[j]) swap(b[i],b[j]);
        }
    }

    for(int i=0; i<3;i++){
        cout << b[i] << endl;
    }

    cout << endl;
    for(int i=0; i<3;i++){
        cout << a[i] << endl;
    }
    return 0;
}


