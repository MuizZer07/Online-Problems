#include <iostream>
using namespace std;

int main(){

    int n, k;
    cin >> n >> k;

    string a;
    cin >> a;

    for(int j=0; j<k;j++){
        for(int i=0; i<n; i++){
            if(a[i]== 'B'){
                if(a[i+1]=='G'){
                    swap(a[i], a[i+1]);
                    i++;
                }
            }
    }
    }


    cout << a << endl;

    return 0;
}
