//status = "ONE-NIGHT-STAND";
#include<iostream>
#include<string>
using namespace std;

int main () {
    string status;
    int age,money,height;
    cout << "Input age : ";
    cin >> age;
    if ( age <= 20 ) {
        cout << "Input your height";
        cin >> height;
        if ( height < 160 ) { status = "UNFRIEND"; }
        else if ( height < 175 ) { status = "FRIEND"; }
        else {
            cout << "How much money do you have? : ";
        cin >> money;
            if ( money > 69000000 ) { status = "MARRIED"; }
            else { status = "ONE-NIGHT-STAND"; }
        }
    }
    else if ( age > 30 ) {
        cout << "How much money do you have? : ";
        cin >> money;
        if ( money > 10000000 ) { status = "UNFRIEND"; }
        else {
            status = "BEST FRIEND";
        }
    cout << status;
    }
