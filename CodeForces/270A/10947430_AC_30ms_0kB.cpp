#include <bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin >> t;

    for(int i=0; i<t; i++){
        int a;
        cin >> a;

        double res = 360.0/(180.0-a);
        int x = ceil(res), y = floor(res);
        if(res < 3 ) cout << "NO" << endl;
        else if(x == res || y == res) cout << "YES" << endl;
        else cout << "NO" << endl;
        //cout << x << endl << y << endl << res << endl;
    }
    return 0;
}

