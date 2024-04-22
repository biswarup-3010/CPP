#include<bits/stdc++.h>
using namespace std;
void NumberGuessing(){
    srand(static_cast<unsigned int>(std::time(0))); // for generating the random time at current time
    int RandomNumber = rand()%100 + 1; // as we need the random number between 1 to 100
    int guessedNumber = -1, attemptNumber = 0;
    cout<<"Welcome to the Number Guessing Game"<<endl<<"Now try to guess the number \n\n\n ";
    while(guessedNumber != RandomNumber){
        cout<<"Enter your guessed number : ";
        cin>>guessedNumber;
        if(guessedNumber == RandomNumber) {
            cout<<"Great!!! You are correct. The Number was => "<<RandomNumber<<" and you have guessed in "<<attemptNumber<< "numbers of attempts."<<endl;
            return;
        }
        else if(guessedNumber < RandomNumber){
            cout<<"Too Small... Try again"<<endl;
        }
        else{
            cout<<"Too Large... Try again"<<endl;
        }
        attemptNumber++;
    }
}
int main(){
    NumberGuessing();
    return 0;
}