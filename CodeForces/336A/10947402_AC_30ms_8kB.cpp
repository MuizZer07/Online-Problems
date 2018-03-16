#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x , y, x1, y1, x2, y2;

    cin >> x >> y;

    if(x > 0 && y >0){
        x1= 0;
        y1 = abs(x + y);
        y2 =0;
        x2 = y1;
    }
    if(x < 0 && y >0){
        x1= abs(x - y);
        x1 = -x1;
        y1 = 0;
        y2 =abs(x - y);
        x2 = 0;
    }

    if(x < 0 && y < 0){
        x1= abs(x + y);
        x1 = -x1;
        y1 = 0;
        y2 =abs(x + y);
        y2 = -y2;
        x2 = 0;
    }
    if(x > 0 && y <0){
        x2= abs(x - y);
        y2 = 0;
        y1 = -(abs(x - y));
        x1 = 0;
    }
        cout << x1 << " " << y1 << " " << x2 << " " << y2 << endl;

    return 0;

}
