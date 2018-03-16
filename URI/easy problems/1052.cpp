#include <iostream>
using namespace std;

int main(){

    int month;
    cin >> month;

    string a[12] = {"January", "February", "March","April", "May", "June", "July", "August", "September", "October", "November", "December"};

    cout << a[month-1] << endl;
    return 0;
}
