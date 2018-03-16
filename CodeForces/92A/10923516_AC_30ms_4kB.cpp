#include <iostream>
#include <cstring>
#include <cstdlib>

using namespace std;

int main(){

    int n, m, sum = 0;
    cin >> n >> m;
    bool flag = false;


        while(m>0){
            for(int i=1; i<=n;i++){
                    if(m-i<0)
                    {
                        flag = true;
                        break;
                    }

                    else m = m-i;
            }
            if(flag== true) break;
        }


    cout << m << endl;
    return 0;
}
