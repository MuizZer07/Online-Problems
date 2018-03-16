#include <bits/stdc++.h>
using namespace std;

int main(){

 string s;
 int t = 1;
 cin >> s;
 while(s!="*"){
    if(s=="Hajj") cout << "Case " << t << ": Hajj-e-Akbar" << endl;
    else cout << "Case " << t <<": Hajj-e-Asghar" << endl;
    cin >> s;
    t++;
 }

 return 0;
}
