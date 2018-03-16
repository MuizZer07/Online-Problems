#include <bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;

    for(int i=1; i<=t; i++){
        int n, high = 0, low = 0;
        cin >> n;
        int arr[n];

        for(int j=0; j<n; j++){
            cin >> arr[j];

            if(j!=0){
                if(arr[j-1] < arr[j]) high++;
                else if (arr[j-1] > arr[j]) low++;
            }
        }
        cout << "Case " << i << ": " << high << " " <<  low << endl;
    }

    return 0;
}
