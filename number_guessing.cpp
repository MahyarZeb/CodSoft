//Number guessing game
#include <iostream>
#include <cstdlib>
#include <time.h>


using namespace std;

int main (){

    srand(time(0));
    int number , guessed;// intiliazing the numbers both guessed and entered by user

    number= rand()%11;//generating random number

    cout<<"Guess the number......"<<endl;//asking for guessing a number which user will enter
    cin>>guessed;
    
    while (guessed > number)//a condition checking if the number is greater than the guessed
    {
        cout<<"Too high"<<endl;
        cin>>guessed;
    }

    while (guessed < number)//a condition checking if the number is lesser than the guessed
    {
        cout<<"Too low"<<endl;
        cin>>guessed;
    } 

    if (guessed == number)//a condition checking if the number is equal to the guessed
    {
        cout<<"Yes you guessed it"<<endl;
    }

    return 0;
}