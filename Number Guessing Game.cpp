#include <iostream>
#include <ctime>
#include <cstdlib>
 using namespace std;
int main()
{
   srand((unsigned int)time(NULL));
    int Number, Result;
    int Guess;
    int attempts = 0;
     Number = rand()%500 + 1;
    Result = Number;
   cout << "Welcome to the Number Guessing Game!" << endl;
    cout << "I have selected a number between 1 and 500. Try to guess it!" << endl;


    do
    {
         cout << "Enter your guess: ";
        cin >> Guess;
        attempts ++;
      if (Number > Guess){
        cout <<"Try Guessing Again Higher"<<endl;
      }
      else if(Number < Guess){
      cout <<"Try Guessing Again Lower"<<endl;
      }
      else {
        cout << "Congrats you won:" << Result << "is the Correct Guess";
      }

    }
    while(Guess !=Number);

  return 0;
}
