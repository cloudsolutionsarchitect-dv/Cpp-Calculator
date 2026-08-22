#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

string generatePassword (int lenght) {
    string chars =
    "abcdefghijklmnopqrstuvwxyxABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789!#$%^&*";
    string password ="";
    
    srand(time(0)); // Random seed

    for(int i = 0; i <lenght; i++) {
        int randomlndex = rand () %
        chars.length ();
        password +=
        chars[randomlndex];  
    }
    return password;
}

int main() {
    int length;

    cout <<"=== C++ Password Generator ===" << endl;
    cout <<"Enter password length:";
    cin >> length;
     if(length <4) {
        cout << "Password should be at leeast 4 characters!" << endl;
        return 1;
    }

    string newPassword =generatePassword(length);
    cout <<" Your new password:" << 
    newPassword << endl;

    return 0;
}