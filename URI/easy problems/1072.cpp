#include <iostream>
using namespace std;

int main(){

    int n, o=0,p=0;
    cin >> n;

    for(int i=0; i<n;i++){
        int a;
        cin >> a;

        if(a >=10 && a<=20) o++;
        else p++;
    }

    cout << o << " in" << endl << p << " out" << endl;

    return 0;
}
