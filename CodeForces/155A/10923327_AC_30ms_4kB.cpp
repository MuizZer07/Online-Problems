#include <iostream>
using namespace std;

int main(){

    int n, sm = 99999 , bi = -99999, h=0, k=0;
    cin >> n;

    int a[n];
    for(int i=0; i<n; i++){
        cin >> a[i];


        if(sm > a[i]){
             sm = a[i];
             if(i!=0) h++;
        }

        if(bi < a[i]){
            bi = a[i];
            if(i!=0) k++;
        }

    }
    cout << h+k << endl;
    return 0;
}
