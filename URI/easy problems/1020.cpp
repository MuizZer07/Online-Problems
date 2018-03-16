#include <iostream>

using namespace std;

int main(){

    int n;
    cin >> n;

    int years = n / 365;
    int months =  (n % 365)/30 ;
    int days =  (n % 365)%30;

    cout << years << " ano(s)\n" << months << " mes(es)\n" << days << " dia(s)" << endl;
    return 0;
}


