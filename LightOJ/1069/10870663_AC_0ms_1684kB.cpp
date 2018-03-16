#include <iostream>
#include <cmath>
using namespace std;

int main(){

    int t;
    cin >> t;
    for(int i=0; i<t;i++){
        int a, b;

        cin >> a >> b;

        int c = abs(b-a);
        int v = c+a;

        int total = (v*4) + 11 + 8;

        cout << "Case " << i+1 << ": " << total << endl;
    }


    return 0;
}
