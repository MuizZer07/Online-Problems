#include <iostream>
using namespace std;

int main(){

    int m,n;
    cin >> m >> n;
    while(m != n){
        int sum =0;
        int greater = max(m,n);
        int smaller =  min(m,n);

        if(m == smaller) cout << "Crescente" << endl;
        else cout << "Decrescente" << endl;
        cin >> m >> n;
    }

    return 0;
}

