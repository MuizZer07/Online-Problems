#include <iostream>
using namespace std;

int main()
{
    int T;
    cin >> T;

    for(int i=0; i<T; i++)
    {
        int n;
        cin >> n;

        int a = n, k = 0;


        while(a != 0){
             int b = a%2;
             a = a/2;

             if(b == 1) k++;
        }


        if(k%2 == 0) cout << "Case " << i+1 << ": " << "even" << endl;
        else cout << "Case " << i+1 << ": " << "odd" << endl;
    }

    return 0;
}



