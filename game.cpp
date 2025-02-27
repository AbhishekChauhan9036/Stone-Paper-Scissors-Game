#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

class Game {
private:
    int playerChoice;
    int computerChoice;

public:
    Game() {
        srand(time(0));
    }

    void getPlayerChoice() {
        cout << "Hello Player!" << endl;
        cout << "\nChoose the option:- \n";
        cout << " 1. Stone\n 2. Paper\n 3. Scissors\n";
        cout << "Enter Your Choice (1-3): ";
        cin >> playerChoice;

        while (playerChoice < 1 || playerChoice > 3) {
            cout << "Invalid choice! Please choose between 1-3: ";
            cin >> playerChoice;
        }
    }

    void getComputerChoice() {
        computerChoice = rand() % 3 + 1;
    }

    string choiceToString(int choice) {
        switch (choice) {
            case 1: return "Stone";
            case 2: return "Paper";
            case 3: return "Scissors";
            default: return "Unknown";
        }
    }

    void determineWinner() {
        cout << "\nYou Chose: " << choiceToString(playerChoice) << endl;
        cout << "Computer Chose: " << choiceToString(computerChoice) << endl;

        if (playerChoice == computerChoice) {
            cout << "Game is a Draw!" << endl;
        } else if ((playerChoice == 1 && computerChoice == 3) ||
                   (playerChoice == 2 && computerChoice == 1) ||
                   (playerChoice == 3 && computerChoice == 2)) {
            cout << "\nCongratulations! You Win! 😀" << endl;
        } else {
            cout << "\nComputer Wins! Better Luck Next Time. 😢" << endl;
        }
    }
};

int main() {
    char playAgain;
    do {
        Game g1;
        g1.getPlayerChoice();
        g1.getComputerChoice();
        g1.determineWinner();

        cout << "Do you want to play again? (y/n): ";
        cin >> playAgain;
    } while (playAgain == 'Y' || playAgain == 'y');

    cout << "Thanks for Playing. Visit Again!" << endl;
    cout << "We hope to see you again!" << endl;
    cout << "We will surely look forward to your next visit." << endl;
    
    return 0;
}
