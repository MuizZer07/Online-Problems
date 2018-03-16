#include <iostream>
using namespace std;

int main(){

    int n;
    cin >> n;

    for(int i=1; i<=n; i++){
        if(i%2==0){
            int sq;
            sq = i*i;

            cout << i << "^2 = " << sq << endl;
        }
    }

    return 0;
}

