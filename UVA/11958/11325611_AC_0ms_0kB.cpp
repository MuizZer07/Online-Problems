#include <bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;

    for(int i=1; i<=t; i++){
        int k, hh, mm;
        char c;
        string time;
        cin >> k >> time;

        stringstream ss;
        ss << time;
        ss >> hh;
        ss >> c;
        ss >> mm;

        int t1 = (hh*60) + mm;
        int ttt;
        int ar[k];
        for(int j=0;j<k; j++){
            string dur;
            int arrr, hh1, mm1;
            cin >> dur >> arrr;

            stringstream ss1;
            ss1 << dur;
            ss1 >> hh1;
            ss1 >> c;
            ss1 >> mm1;

            if(hh > hh1){
                ar[j] = ((23-hh) + hh1) * 60 + (60-mm) + mm1 + arrr;
                continue;
            }

            if(hh == hh1){
                if(mm<=mm1){
                    ar[j] = mm1-mm + arrr;
                }else{
                    ar[j] = ((23-hh) + hh1) * 60 + (60-mm) + mm1 + arrr;
                }
                continue;
            }
            ttt = (hh1 * 60) + mm1 + arrr;
            ar[j] = ttt-t1;

        }

        sort(ar, ar+k);
        cout << "Case " << i << ": " << ar[0] << endl;
    }

    return 0;
}
