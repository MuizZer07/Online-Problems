#include <bits/stdc++.h>
using namespace std;

int main(){

    int t;
    while(scanf("%d",&t)==1){
        for(int i=1;i<=t;i++){
        int date1month, date1day, date1year, date2month, date2day, date2year;
        string date1, date2;
        char c;
        cin >> date1 >> date2;

        stringstream ss;
        ss << date1;

        ss >> date1day;
        ss >> c;
        ss >> date1month;
        ss >> c;
        ss >> date1year;

        stringstream ss1;
        ss1 << date2;

        ss1 >> date2day;
        ss1 >> c;
        ss1 >> date2month;
        ss1 >> c;
        ss1 >> date2year;

        //cout << date1month << " " << date1day << " " << date1year << " " << date2month << " " << date2day << " " << date2year << endl;

        if(date2year> date1year)
            cout << "Case #" << i << ": Invalid birth date" << endl;
        else if(date2year == date1year){
            if(date2month> date1month)
                cout << "Case #" << i << ": Invalid birth date" << endl;
            else if (date2month == date1month){
                if(date2day > date1day) cout << "Case #" << i << ": Invalid birth date" << endl;
                else if(date2day == date1day) cout << "Case #" << i << ": 0" << endl;
                else if(date2day < date1day) cout << "Case #" << i << ": 0" << endl;
            }
            else if(date2month < date1month){
                cout << "Case #" << i << ": 0" << endl;
            }
        }

        else if(date2year < date1year){
                int age = date1year-date2year;
                if(date1month < date2month) age--;
                else if(date1month == date2month){
                    if(date1day < date2day) age--;
                }




            if(age <= 130) cout << "Case #" << i << ": " << age << endl;
            else cout << "Case #" << i << ": Check birth date" << endl;
        }

     }
    }
    return 0;
}
