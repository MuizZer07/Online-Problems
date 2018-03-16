#include <bits/stdc++.h>
using namespace std;

char state[1000000+10];
void sieve(int n);

int main(){


    int n,m;
    cin >> n >> m;


    sieve(m);
    int i;
    for(i=n+1;i<m;i++){
        if(state[i]==0){
            cout << "NO" << endl;
            break;
        }
    }
    if(state[m]==0 && i==m) cout<< "YES" << endl;
    if(state[m]==1 && i==m)cout << "NO" << endl;

    return 0;
}

void sieve(int n){
    state[0] = 1;
    state[1] = 1;

    for(int i=4; i<=n; i+=2)
        state[i] = 1;

    int sqn = sqrt(n);
    for(int i=3; i<=sqn; i++){
        if(state[i]==0){
            for(int j=i*i; j<=n;j+=(2*i))
                state[j] = 1;
        }
    }
}

