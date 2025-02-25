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

    string choiceToString(int choice){switch (choice) {
            case 1:
                return "Rock";
            case 2:
                return "Paper";
            case 3:
                return "Scissors";
            default:
                throw std::invalid_argument("Invalid choice. Please choose 1 (Rock), 2 (Paper), or 3 (Scissors).");
        }
                                     } 
};

int main() {
    cout << "Hello, World!" << endl;
    return 0;
}
