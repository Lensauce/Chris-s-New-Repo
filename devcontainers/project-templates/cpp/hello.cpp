#include <iostream>
using namespace std;

int main ()
{
int winningNumber = 7;
int guess;

do
{

cout << "Enter a number between 1 and 10:";
cin >> guess;

if (guess != winningNumber)
{
  cout << "Sorry, guess again. \n";
}
else 
{
  cout << "That's It, you win! \n";
}
} while (guess != winningNumber);
  return 0;
}
