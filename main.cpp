#include <iostream>
#include "Administrator.h"
#include "User.h"

using namespace std;

int main()
{
    Administrator admin;
    User user;

    // Test Administrator Login
    if (admin.Login("costello", "tuesday")) {
        cout << "Administrator login successful." << endl;
    }
    else {
        cout << "Administrator login failed." << endl;
    }

    // Test User Login
    if (user.Login("abbott", "monday")) {
        cout << "User login successful." << endl;
    }
    else {
        cout << "User login failed." << endl;
    }

    // Test User Login with Administrator credentials
    if (user.Login("costello", "tuesday")) {
        cout << "User login with administrator credentials successful." << endl;
    }
    else {
        cout << "User login with administrator credentials failed." << endl;
    }

    return 0;
}