#include <iostream>
#include <cstdlib> 
#include <ctime>
using namespace std;

class Game{
private:
    int playerChoice;
    int computerChoice;
public:
    Game(){
        srand(time(0));
    }

    void getPlayerChoice(){
        cout<<"\nChoose the option:- \n";
        cout<<" 1.Stone\n 2.Paper\n 3.Scissors\n";
        cout<<"Enter Your Choice(1-3):- ";
        cin>>playerChoice;

        if(playerChoice<1 or playerChoice>3){
            cout<<"Please Choose Between 1-3:- "<<endl;
        }
    }

    void getComputerChoice(){
        computerChoice = rand()%3+1;
    }

    string choiceToString(int choice){
        switch(choice){
            case 1:
                return "Stone";
            case 2:
                return "Paper";
            case 3:
                return "Scissors";
            default:
                return "Unknown";
        }
    }

    void determineWinner(){
        cout<<"\nYou Choose: "<<choiceToString(playerChoice)<<endl;
        cout<<"Computer Choose: "<<choiceToString(computerChoice)<<endl;

        if(playerChoice == computerChoice){
            cout<<"Game is Draw  "<<endl;
        }else if((playerChoice == 1 and computerChoice == 3) or
                (playerChoice == 2 and computerChoice == 1) or
                (playerChoice == 3 and computerChoice == 2)){
            cout<<endl<<"Congratulations You Win!... can you want to try and win😀"<<endl<<endl;
        }else{
            cout<<endl<<"Computer Win! Better Luck Next Time bad luck 😢"<<endl<<endl;
        }
    }
};

int main() {
    char playAgain;
    do{
        Game g1;
        g1.getPlayerChoice();
        g1.getComputerChoice();
        g1.determineWinner();

        cout<<"Do you want to play again?(y/n): ";
        cin>>playAgain;
    }while(playAgain == 'Y' or playAgain == 'y');

    cout<<"Thanks for Playing.  Visit Again..."<<endl;
    cout<<"We hope to see you again"<<endl;
    return 0;
}
