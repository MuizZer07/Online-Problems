#include <iostream>
using namespace std;

int main(){

    int t;
    cin >> t;

    for(int i=1; i<=t; i++){
        int n, sum = 0;
        cin >>n;
        cout << "Case " << i << ":" << endl;
        for(int j=0;j<n;j++){
            string s;
            cin >>s;

            if(s == "donate"){
                int a;
                cin>>a;
                sum+=a;
            }
            else if(s == "report") cout << sum << endl;
        }
    }


    return 0;
}
