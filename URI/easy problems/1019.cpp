#include <iostream>

using namespace std;

int main(){

    int n;
    cin >> n;

    int sec = n%60;
    int min = n/60;
    int hour = min/60;
    min = min % 60;


    cout << hour << ":" << min << ":" << sec << endl;
    return 0;
}

