#include <bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin>>t;

    for(int i=1; i<=t;i++){
       int n, p, q;
       cin >> n >> p >> q;

       int arr[n], cnt = 0, sum = 0;
       for(int j=0;j<n;j++){
            cin >> arr[n];
            sum += arr[n];

            if(cnt<p && sum <=q)cnt++;
       }
       cout << "Case " << i << ": " << cnt << endl;
    }

    return 0;
}



