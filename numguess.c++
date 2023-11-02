#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    int i, random, n;
    char c;

    srand(time(NULL));
jump:
    system("cls || clear");

    random = rand() % 10 + 1;

    for (i = 1; i != 0; i++) {
        cout << "Guess a number between 1 to 10: ";
        cin >> n;

        if (n == random) {
            cout << "Hooray, your guess is correct!" << endl;
            break;
        } else if (n < 1 || n > 10) {
            cout << "Invalid guess. Please enter a number between 1 and 10." << endl;
        } else if (abs(random - n) <= 3) {
            cout << "Almost there, just a bit " << (random < n ? "high" : "low") << endl;
        } else {
            cout << "Wrong, your guess is too " << (random < n ? "high" : "low") << endl;
        }
        cout << "Guess again" << endl;
    }

    cout << "Want to play again (y/n): ";
    cin >> c;

    if (c == 'y' || c == 'Y') {
        goto jump;
    } else if (c == 'n' || c == 'N') {
        
    }

    return 0;
}
