#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{
	srand(static_cast <unsigned int> (time(0)));
	int secretNumber = (rand() % 100) + 1;
	int tries = 0;
	int guess;
	cout << "\n\t\t\t\t\tWelcome to Guess my Number!\n\n ";
	do
	{
		cout << " Enter a number: ";
		cin >> guess;
		++tries;
		if (guess > secretNumber)
		{
			cout << " To hight!\n\n";
		}
		else if (guess < secretNumber)
		{
			cout << " To low!\n\n";
		}
		else
		{
			cout << "\n\t\t\t\t\t You are goddamn right!\n\t\t\t\t\tYou got it in " << tries << " guesses!\n";
		}
	} while (guess != secretNumber);
	return 0;
}