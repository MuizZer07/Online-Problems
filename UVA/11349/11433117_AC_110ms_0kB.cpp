#include <bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;

    for(int  k=1; k<=t; k++){
            string str;
            stack<long long> s,m;
            bool flag = true, flag2 = true;
            cin >> str;
            cin >> str;
            getchar();

            long long n;
            cin >> n;
            long long arr[n][n];
            for(long long i=0; i<n;i++){
                for(long long j=0; j<n; j++){
                    cin >> arr[i][j];
                    if(arr[i][j]<0) flag = false;

                }
            }
            for(long long i=0; i<n;i++){
                for(long long j=0; j<n; j++){
                    if(arr[i][j] != arr[n-1-i][n-1-j])
                        flag2 = false;

                }
            }


            if(flag == false || flag2 == false) cout << "Test #" << k<< ": Non-symmetric." << endl;
            else cout << "Test #" << k << ": Symmetric." << endl;


    }

    return 0;
}

