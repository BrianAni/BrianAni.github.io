#include <iostream>
#include <sstream>
#include <string>
#include <cstdlib>
#include <cmath>
#include <ctime>

using namespace std;

// Headers
string toString (double);
int toInt (string);
double toDouble (string);

int main() {
    srand(time(0));   //Seed random number generator
    

    // FOR -999/QUIT CASE:
    // randomNumber=9
    // input guessNumber=-999
    // output "User has left. Thank you for playing!"
    // FOR WIN CASE:
    // randomNumber=3
    // input guessNumber=3
    // output "That's correct! Congratulations!!"
    // Brian A.
    // CTI 110/0036
    int guessNumber;
    int randomNumber;

    randomNumber = rand() % 11;
    cout << "randomNumber :" << randomNumber << endl;
    cout << "Please guess the number between 0 and 10" << endl;
    cin >> guessNumber;
    while (guessNumber != randomNumber && guessNumber != -999) {
        cout << "Incorrect. Please try to guess the number between 0 and 10." << endl;
        cin >> guessNumber;
    }
    if (guessNumber == -999) {
        cout << "User has left. Thank you for playing!" << endl;
    } else {
        cout << "That's correct! Congratulations!" << endl;
    }
    return 0;
}

// The following implements type conversion functions.
string toString (double value) { //int also
    stringstream temp;
    temp << value;
    return temp.str();
}

int toInt (string text) {
    return atoi(text.c_str());
}

double toDouble (string text) {
    return atof(text.c_str());
}
