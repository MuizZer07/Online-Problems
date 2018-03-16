#include <iostream>
using namespace std;

int main(){

    int n;
    cin >> n;

    for(int i=n; i<=n+12; i++){
        if(i%2!=0) cout << i << endl;
    }


    return 0;
}

