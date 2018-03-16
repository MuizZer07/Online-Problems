#include <bits/stdc++.h>
using namespace std;

int main(){

    int n,q;
    cin >> n;
    int p = 2*n;
    string str[p];
    getchar();


    for(int i=0;i<p; i++){
        getline(cin, str[i]);
        if(i==p-1){
             cin >> q;
        }
    }
     getchar();



    for(int i=0;i<q; i++){
         string s;
         getline(cin, s);
         for(int j=0; j<p; j++){
            if(s == str[j]) cout << str[j+1] << endl;
         }
    }

    return 0;
}
