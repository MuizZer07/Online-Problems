#include <iostream>
using namespace std;

int main()
{
    int x,y;

    cin >> x >> y;

    int greater = max(x,y);
    int minimum =  min(x,y);

    for(int i=minimum+1; i<greater; i++){
        if(i%5==2 || i%5 == 3) cout << i << endl;
    }


    return 0;
}


