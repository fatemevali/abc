#include <iostream>
using namespace std;

int main() {
    int age;
    char ismember;

    cout <<"enter your age: ";
    cin >> age;

    cout <<"are you a member of the customer club? (y/n): ";
    cin >> ismember;

    if (age < 12){
            cout << "the ticket price is 10 dollars." <<endl;
    }
     else if (age >= 12 && age <=18){
            if (ismember == 'y'|| ismember == 'Y'){
                    cout << "the ticket price is 12 dollars." << endl;
            } else {
                cout << "the ticket price is 15 dollars." << endl;
            }
     }
     else if (age > 18 && age <= 60){
            if ( ismember == 'y' || ismember == 'Y'){
                    cout << "the ticket price is 20 dollars." << endl;
            } else {
                cout << " the ticket price is 25 dollars." << endl;
            }
     }
     else {
            cout << "the ticket price is 10 dollars." << endl;
     }
     return 0;
}


