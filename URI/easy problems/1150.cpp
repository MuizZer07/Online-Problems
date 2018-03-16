#include <iostream>

using namespace std;

int main(){

    int x, z,y=0;

    cin >> x >> z;

    while(z<=x) cin >> z;

    int sum = 0;

    while(sum<z){
        sum = sum + x;
        x++;
        y++;
    }

    cout << y << endl;
    return 0;
}


