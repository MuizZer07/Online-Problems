#include <bits/stdc++.h>
using namespace std;

int main(){

    int h1, m1, h2, m2;
    while(1){
        scanf("%d%d%d%d", &h1, &m1, &h2, &m2);
        int time = 0;
        if(h1 == 0 && m2 == 0 && h2 == 0 && m2 == 0) break;

        if(h1>h2){
            time = ((23-h1) + h2) * 60 + (60-m1) + m2;
        }
        else if(h1 == h2){
            if(m1<=m2) time = m2-m1;
            else time = ((23-h1) + h2) * 60 + (60-m1) + m2;
        }
        else{
            int t1 = h1 * 60 + m1;
            int t2 = h2 * 60 + m2;
            time = t2-t1;
        }

       cout << time << endl;
    }

    return 0;
}

