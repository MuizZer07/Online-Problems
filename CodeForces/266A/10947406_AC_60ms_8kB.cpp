#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, cnt = 0;
    cin >> n;

    char c[n];

    for(int i =0; i<n;i++){
        cin >> c[i];

      if(i!=0){
            if(c[i-1] == c[i]) cnt++;
       }
    }
    cout << cnt << endl;
    return 0;
}
