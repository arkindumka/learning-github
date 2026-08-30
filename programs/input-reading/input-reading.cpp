#include <iostream>
#include <string>


using namespace std;

int main() {

    bool confirm = false;
    while (confirm == false) {
    
        string firstName, fullName;
        int age, dateOfBirth;
        char decision;

        cout << "What is your first name?" << endl;
        cin >> firstName;

        cin.ignore();

        cout << "What is your full name?" << endl;
        getline(cin, fullName);

        cout << "What is your age?" << endl;
        cin >> age;

        //output screen:
        cout << "Hello! Please confirm the following information is correct!\n\nFirst name: " << firstName << "\nFull name: " << fullName << "\nAge: " << age << endl; 
        cout << "\nIs this information correct? [Y/N]" << endl;
        do {
            cin >> decision;

        } while (decision != 'Y' && decision != 'N');
        
        if (decision == 'Y') {
            confirm = true;
        }
        
    } 
    cout << "Thank you for participating!" << endl;
    return 0;
    
}