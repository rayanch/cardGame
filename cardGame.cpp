
#include <string>

#include <iostream>

#include <ctime>

using namespace std;



int shuffler() {

	time_t current_time;

	current_time = time(NULL);

	int position = current_time%10;

	if(position == 1 || position == 2 || position == 3) {

		return position;

	}

	else {

		if(position == 4 || position == 5) {

			return 3;

		}

		if(position == 6 || position == 6) {


			return 1;

		}

		if(position == 7 || position == 8 || position == 9) {

			return 2;

		}

	return 1;

	}

}


void gameStart() {

	int cash = 100;


	while(true) {

		system("clear");
		cout << "Your Cash Available : " << cash << "$" << endl;

		cout << "J For Jack, Q for Queen, K for King "<< endl;
		cout << "Which Card Do You Wanna Guess Its Position: ";

		char card;

		cin >> card;

		if(cash == 0) {

			cout << "You Don't Enough Cash To Play!";

			break;

			exit(0);

		}

		else {

			if(card == 'k' || card == 'K' || card == 'q' || card == 'Q' || card == 'j' || card == 'J') {

				int pos = shuffler();

				cout << "Cards Randomly Shuffled!" << endl;

				cout << "What Is Your Choice : ";

				int answer;

				cin >> answer;

				if(answer == pos) {

					cout << "Your Guess Is Correct. 20$ Has Been Added To Your Cash" << endl;

					cash = cash + 20;

					cout << "Your Available Cash Is: " << cash << "$" << endl;

				}

				else {

					cout << "Your Guess Is Wrong. 20$ Has Been Deducted From Your Cash." << endl;

					cash = cash - 20;

					cout << "Your Available Cash Is: " << cash << "$" << endl;
				}

			}


			else {

				cout << "This Is Not A Valid Card!" << endl;

				break;

				exit(0);

			}

		}

	}
}


int main() {

	gameStart();


}
