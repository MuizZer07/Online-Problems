#include <iostream>
#include <cstdio>
using namespace std;

int main(){

    int n, frogs = 0, rats = 0, rabbits = 0, total = 0;
    cin >> n;

    for(int i=0; i<n; i++){
        int a;
        cin >> a;
        total += a;
        char c;
        cin >>c;

        switch(c){
            case 'S':
                frogs += a;
                break;
            case 'R':
                rats += a;
                break;
            case 'C':
                rabbits += a;
                break;
        }
    }

    double fr = (frogs/(double)total)*100;
    double rt = (rats/(double)total)*100;
    double rbb = (rabbits/(double)total)*100;

    cout << "Total: " << total << " cobaias\nTotal de coelhos: " << rabbits << endl
         << "Total de ratos: " << rats << endl << "Total de sapos: " << frogs << endl;

    printf("Percentual de coelhos: %.2f", rbb); cout << " %\n";
    printf("Percentual de ratos: %.2f", rt); cout << " %\n";
    printf("Percentual de sapos: %.2f", fr); cout << " %\n";

    return 0;
}


