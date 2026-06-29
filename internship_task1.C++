#include <iostream>
#include <cstdlib> 
#include <ctime>   

using namespace std;

int main() {
    srand(time(0)); 

    int randomNumber = (rand() % 100) + 1; 
    int userGuess = 0;
    int attempts = 0;

    cout << "=========================================" << endl;
    cout << "   WELCOME TO THE NUMBER GUESSING GAME   " << endl;
    cout << "=========================================" << endl;
    cout << "I have chosen a number between 1 and 100.\n" << endl;

    while (userGuess != randomNumber) {
        cout << "Enter your guess: ";
        cin >> userGuess;
        attempts++;

        if (userGuess > randomNumber) {
            cout << "Too High! Try a smaller number.\n" << endl;
        } 
        else if (userGuess < randomNumber) {
            cout << "Too Low! Try a larger number.\n" << endl;
        } 
        else {
            cout << "\n=========================================" << endl;
            cout << "CONGRATULATIONS! You guessed it right!" << endl;
            cout << "The correct number was: " << randomNumber << endl;
            cout << "Total attempts taken: " << attempts << endl;
            cout << "=========================================" << endl;
        }
    }

    return 0;
}