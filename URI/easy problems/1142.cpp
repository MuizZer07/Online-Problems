#include <iostream>
using namespace std;

int main()
{
    int n,k=1;
    cin >> n;

    for(int i=0; i<n; i++){
       for(int j=1; j<=3;j++){
            cout << k << " ";
            k++;
       }
       k++;
       cout << "PUM" << endl;
    }
    return 0;
}
