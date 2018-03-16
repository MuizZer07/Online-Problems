#include <bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;

    for(int i=1; i<=t; i++){
        int number, j = 0;
        cin >> number;
        long long sum = number;

        int k =0;
        while(true){
            long long nw = sum, n=0;

            while(nw!=0){
                  n =(n * 10) + nw%10;
                  nw = nw/10;
            }
            if(k!=0){
                if(n!= sum){
                sum = sum + n;
                j++;
                }
                else break;
            }
            else {
                sum = number + n;
                j++;
            }

            k++;
        }

       cout << j << " " << sum << endl;

    }

    return 0;
}

