#include <bits/stdc++.h>
using namespace std;

int main(){

    for(int t=1;t<=75;t++){
        int n, trt= 0, s= 0;
        cin >> n;

        if(n==0)
            break;
        else{
            for(int i=0; i<n;i++){
            int x;
            cin >> x;
            if(x!=0)
                trt++;
            else s++;
            }
        }
    cout << "Case " << t<< ": " << trt - s << endl;
    }
 return 0;
}
