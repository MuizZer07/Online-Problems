#include <iostream>
#include <cmath>

using namespace std;

int main(){

    int a, b, c;
    cin >> a >> b >> c;

    int maior = (a+b+abs(a-b))/2;
    int m = (maior+c+abs(maior-c))/2;

    cout << m << " eh o maior" << endl;

    return 0;
}
