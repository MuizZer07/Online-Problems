#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, Min = 999999, Max = -999999, minInd, maxInd;
    cin >>n;

    int a[n];

    for(int i=0;i<n;i++){
        cin >> a[i];

            if(Min >= a[i]){
                Min = a[i];
                minInd = i;
            }
            if(Max <a[i]){
                Max = a[i];
                maxInd = i;
            }
    }
    int result;
    minInd++;
    maxInd++;
    if(minInd != n-1 || maxInd != 0) {
        int res1;
        if(maxInd != 0)res1 = abs(1-maxInd);
        else res1 = 0;
        int res2 = abs(n-minInd);
        // cout << Max << " " << Min << " " << minInd << " " << maxInd << " " <<  res1 << " " << res2 << endl;
        result = res1+res2;

        if(minInd < maxInd){
            --result;
    }
    }else result = 0;



    cout << result << endl;
    return 0;

}
