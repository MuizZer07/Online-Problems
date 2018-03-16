#include <bits/stdc++.h>
using namespace std;

char state[1000000+10];
void sieve(int n);

int main(){
    int n;
    while(cin >> n){
        if(n==0) break;
        int cnt = 0;
        sieve(n);

        for(int i = 0; i <= n/2; i++){
            if(state[i]==0)
            if(state[n-i]==0){
              //  cout << i << n-i<< endl;
                cnt++;
            }
        }
        cout << cnt << endl;
    }
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
