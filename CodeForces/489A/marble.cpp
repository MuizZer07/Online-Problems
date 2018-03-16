#include <iostream>
using namespace std;


int main()
{
    int T, N, Q, sum = 0;
    int f1[10002], f2[10002];

    cin >> T;

    if(T<65)
    {
        for(int i=0; i<T; i++)
        {
            for(int i=0; i<10002;i++)
            {
                f1[i] = 0;
                f2[i] = 0;
            }

            cin >> N >> Q;
            if(N==0 && Q ==0) continue;

            int a[N];

            for(int i=0;i<N;i++)
            {
                cin >> a[i];
                f1[a[i]]++;
            }
            for(int i=0; i<10002;i++)
            {
                sum += f1[i];
                f2[i] = sum;
            }

            for(int i=0; i<Q; i++)
            {
                int k;
                cin >> k;
                if(f2[k]!= f2[k+1]) cout << "found" << endl;
                else cout << "not found" << endl;

            }

        }
    }




    return 0;
}
