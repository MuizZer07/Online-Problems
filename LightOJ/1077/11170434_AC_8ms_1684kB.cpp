#include <bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin>>t;

    for(int i=1; i<=t;i++){
        long long x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;

        long long x = abs(x2-x1);
        long long y = abs(y2-y1);

        cout << "Case " << i << ": "<< __gcd(x,y)+1 << endl;
    }

    return 0;
}


