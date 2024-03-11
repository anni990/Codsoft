// Number Guessing Game......

#include <iostream>
// header file which contains rand() and srand() function that generates the random number.
#include <cstdlib> 
// header file which contains time() function which determines the generated number should be  at the current time.
#include <ctime> 
using namespace std;

class NumberGame
{
    int randomNumber;
    int attempts = 0;

public:
    NumberGame() // Constructor.
    {
        srand(time(0)); // determines the current time of the program for the new random number.
        randomNumber = rand() % 50 + 1; // This line will generates the random number between 1 to 50.
    }
    void NumberGuessingGame() // function which takes input and provides essential output to the user.
    {
        int predictNum;
        cout << "Hey players! Welcome to the Number Guessing Game!" << endl;
        cout << "I've picked a number between 1 and 50. Try to guess it!" << endl;

        do
        {
            cout << "Enter your number :";
            cin >> predictNum; // input from the user.
            attempts++;        // No. of attempts increases when one perdiction is done.

            if (predictNum < randomNumber)
            {
                cout << "The Number you guessed is Too low , try again! " << endl;
            }
            else if (predictNum > randomNumber)
            {
                cout << "The Number you guessed is Too high , try again! " << endl;
            }
            else
            {
                cout << "Congratulation! ,You have predicted correct in " << attempts << " attempts." << endl;
            }

        } while (predictNum != randomNumber);
    }
    void End() // This is the Function when the player gets the guess at one attempt.
    {
        if (attempts == 1)
        {
            cout << "MARVELOUS" << endl;
        }
        else
        {
            return;
        }
    }
};

int main()
{
    NumberGame obj;
    obj.NumberGuessingGame();
    obj.End();
    return 0;
}