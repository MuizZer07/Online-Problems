#include <iostream>
using namespace std;

int main()
{
    int T, M;
    string *arr;
    int x1,x2,y1,y2,x,y;
    cin >> T;
    for(int i=0; i<T; i++)
    {
        cin >> x1 >> y1  >> x2 >> y2 >> M ;
        arr = new string[M];
        for(int i=0; i<M; i++){
            cin >> x >> y;
            if(x1<=x && x2>=x && y2>=y && y1<=y) arr[i] = "Yes";
           // else if()arr[i] = "Yes";
            else arr[i] = "No";
        }

        cout << "Case " << i+1 << ":" << endl;
        for(int i=0; i<M; i++){
                cout << arr[i] << endl;
        }
    }

    return 0;
}

