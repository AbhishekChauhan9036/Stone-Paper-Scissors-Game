#include <iostream>
using namespace std;

class Game{
private:
    int playerChoice;
    int computerChoice;
public:
    Game(){} // Krina

    void getPlayerChoice(){}  // Takshay

    void getComputerChoice(){}  // Shubham

    void determineWinner(){} // Jadeja & Kamil

    string choiceToString(int choice)
         switch (choice) {
            case 1:
                return "Rock";
            case 2:
                return "Paper";
            case 3:
                return "Scissors";
            default:
                return "unknown";
        }
                                     } 
};

int main() {
    cout << "Hello, World!" << endl;
    return 0;
}
