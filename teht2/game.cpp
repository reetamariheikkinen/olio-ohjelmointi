#include "game.h"

Game::Game(int maxNum)
{

    maxNumber=maxNum;
    cout<<"GAME CONSTRUCTOR: object initialized with "<<maxNumber<<" as a maximum value"<<endl;
}

Game::~Game()
{
    cout<<"GAME DESTRUCTOR: object cleared from stack memory"<<endl;

}

void Game::play()
{

    srand(time(0));

    randomNumber=rand()%maxNumber+1;

    bool stayInLoop=true;

    while(stayInLoop){

        cout << "Give your guess betweem 1-"<<maxNumber<< endl;
        cin>>playerGuess;
        numOfGuesses++;

        if(playerGuess==randomNumber){
            stayInLoop=false;
            printGameResult();

        }

        else if(playerGuess>randomNumber){
            cout<<"Your guess is too big"<<endl;
        }

        else if(playerGuess<randomNumber){
            cout<<"Your guess is too small"<<endl;
        }

    }

}


void Game::printGameResult()
{
    cout<<"Your guess is right = "<<randomNumber<<endl;
    cout<<"You guessed the right answer = "<<randomNumber<<" with "<<numOfGuesses<<" guesses"<<endl;

}
