#include<iostream>
using namespace std;
void BattleSim();
int PlayerHealth = 50;


int main() {
	int room = 0;
	char input;
	while (PlayerHealth > 0) {//Game loop
		switch (room){
		case 0:
			cout << "You are in room 0" << endl;
			cin >> input;
			if (input == 's') {
				room = 1;
			}
			break;

		case 1:
			cout << "You are in room 1" << endl;
			cin >> input;
			if (input == 's') {
				room = 2;
			}
			else if(input == 'n') {
				room = 0;
			}
			break;
		case 2:
			cout << "You are in room 2" << endl;
			BattleSim();
			cin >> input;
			if (input == 'n') {
				room = 1;
			}
			break;


		}


	}//End of game loop
}//End of main


void BattleSim() {
	int MonsterHealth = 5;
	cout << endl << endl << "--------------------Battle Begin---------------------" << endl;
	cout << "A rat aproches" << endl;
	srand(time(NULL));
	int does_this_hit = rand() % 2;
	int damage = rand() % 5;
	while (PlayerHealth > 0 && MonsterHealth > 0)
	{
		if (does_this_hit == 0) {
			cout << "The rat bites you for " << damage << " damage" << endl;
			PlayerHealth -= damage;
		}
		else {
			cout << "The rat tries to attack, but misses" << endl;
		}
		if (does_this_hit == 0) {
			cout << "You attack for " << damage << " damage" << endl;
			MonsterHealth -= damage;
		}
		else { cout << "You try to atack, but miss" << endl; }
		cout << "Your health:" << PlayerHealth << endl << "Monsters health:" << MonsterHealth << endl;
		

	}


}
