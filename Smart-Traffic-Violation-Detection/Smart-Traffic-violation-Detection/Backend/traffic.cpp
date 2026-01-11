#include <iostream>
using namespace std;

int main() {
    int helmet;
    int signalJump;
    int speed;

    cout << "SMART TRAFFIC VIOLATION DETECTION SYSTEM\n";
    cout << "--------------------------------------\n";

    // Helmet check
    cout << "Is the rider wearing a helmet? (1 = Yes, 0 = No): ";
    cin >> helmet;

    // Signal jump check
    cout << "Did the rider jump the traffic signal? (1 = Yes, 0 = No): ";
    cin >> signalJump;

    // Speed check
    cout << "Enter vehicle speed (km/h): ";
    cin >> speed;

    cout << "\nRESULT:\n";

    bool violation = false;

    if (helmet == 0) {
        cout << "- Helmet violation detected.\n";
        violation = true;
    }

    if (signalJump == 1) {
        cout << "- Signal jumping violation detected.\n";
        violation = true;
    }

    if (speed > 60) {
        cout << "- Over-speeding violation detected.\n";
        violation = true;
    }

    if (!violation) {
        cout << "No traffic violations detected. Safe driving!\n";
    } else {
        cout << "Please follow traffic rules.\n";
    }

    return 0;
}
