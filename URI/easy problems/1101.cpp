#include <iostream>
using namespace std;

int main(){

    int m,n;
    cin >> m >> n;
    while(m >0 && n>0){
        int sum =0;
        int greater = max(m,n);
        int smaller =  min(m,n);

        for(int i = smaller; i<=greater; i++){
            cout << i << " ";
            sum += i;
        }
        cout << "Sum=" << sum << endl;

        cin >> m >> n;
    }

    return 0;
}
