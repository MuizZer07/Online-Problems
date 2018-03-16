#include <bits/stdc++.h>
using namespace std;

int main(){

    int n;


    for(int i=0;i<=100; i++){
        cin>>n;
        if(n == 0) break;
        int G=0;
        for(int j=1;j<n;j++)
            for(int k=j+1;k<=n;k++)
            {
            G+=__gcd(j,k);
            }
        cout << G << endl;
    }


    return 0;
}