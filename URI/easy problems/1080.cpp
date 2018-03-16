#include <iostream>
using namespace std;

int main(){

    int MAX = -99999;
    int pos = 0;
    for(int i=1; i<=5; i++){
        int a;
        cin >> a;

        if(a>MAX)
        {
            MAX = a;
            pos = i;
        }
    }
    cout << MAX << endl << pos << endl;

    return 0;
}

