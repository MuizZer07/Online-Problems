#include <iostream>
using namespace std;

int main()
{
    int T;
    cin >> T;

    bool mat;
    for(int i=0; i<T; i++)
    {
        int a,b,c;

        cin >> a >> b >> c;

        if((a*a == b*b + c*c) || (b*b == a*a + c*c) || (c*c == a*a + b*b)) mat = true;
        else mat = false;

        if(mat == true) cout << "Case " << i+1 << ": " << "yes" << endl;
        else cout << "Case " << i+1 << ": " << "no" << endl;
    }

    return 0;
}


