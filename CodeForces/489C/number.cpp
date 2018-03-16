#include <iostream>
using namespace std;

int main(){

    int m,n;
    cin >> m >> n;

    int a[10] = {0,1,2,3,4,5,6,7,8,9};
    int number[m];
    int opp[m];
    int arraySum = 0;


    for(int i=0; i<m; i++) number[i] = 0;

    for(int i=0; i<m; i++)
    {
        for(int j=9;j>0;j--){
            int sum = arraySum + j;
            if(sum <= n)
            {
                number[i] = a[j];
                arraySum += a[j];
                break;
            }
        }
    }

    int e=0;

    if((n!= 0 || m==1) && n <= m*9){
    int j=0;
    for(int i=m-1; i>=0; i--)
    {
        opp[j] = number[i];
        j++;
    }

    if(opp[0]==0)
    {
        for(int i=1; i<m; i++)
        {
            if(opp[i]!=0)
            {
                opp[0]=1;
                opp[i]-=1;
                break;
            }
        }
    }

    for(int i=0; i<m; i++) if(opp[i]==number[i]) e++;
    if(e==m && (10-(m*9)!=1) && m!=1 && n!=m*9)
    {
       arraySum = 0;
       for(int i=0; i<m; i++){
            for(int j=9;j>0;j--){
                int sum = arraySum + j;
                if(i==0)
                {
                    opp[i]=1;
                    arraySum = 1;
                    break;
                }
                if(sum <= n)
                {
                    opp[i] = a[j];
                    arraySum += a[j];
                    break;
                }
            }
       }
       if(opp[m-1]==0)
        {
            for(int i=m-2; i>0; i--)
            {
                if(opp[i]!=0)
                {

                    swap(opp[m-1],opp[i]);
                    break;
                }
            }
        }
    }

    for(int i=0; i<m; i++) cout << opp[i];
    cout << " ";
    for(int i=0; i<m; i++) cout << number[i];

}
    else cout << "-1 -1" << endl;
    return 0;
}
