#include <bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin>>t;
    getchar();

    for(int i=1; i<=t;i++){
       int maxg = -99999999;
       vector<int> v;
       string s;
       int k=0;

        getline(cin, s);
        stringstream ss(s);
        int p;
        while(ss >> p){
            v.push_back(p);
            ++k;
        }




       for(int j=0; j<k; j++)
        {
            for(int m=j+1; m<k; m++)
            {
                maxg = max(maxg ,__gcd(v[j], v[m]));

            }
        }

        cout << maxg << endl;
    }

    return 0;
}



