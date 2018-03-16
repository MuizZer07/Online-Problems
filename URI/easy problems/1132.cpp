#include <iostream>
using namespace std;

int main()
{
    int x,y, sum = 0;

    cin >> x >> y;

    int greater = max(x,y);
    int minimum =  min(x,y);

    for(int i=minimum; i<=greater; i++){
        if(i%13!=0) sum += i;
    }

    cout << sum << endl;
    return 0;
}

