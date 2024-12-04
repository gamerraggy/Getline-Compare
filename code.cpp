#include<iostream>
#include<string> // needed for getline and compare
using namespace std;
int main() {

	string inventory[10];
	int room = 1;
	string input = "ohio";

	while (input != "quit") {
		switch (room) {
		case 1:
			cout << "room 1, go south. there is a sword." << endl;	

			//getline lets you handle user input with spaces
			getline(cin, input);

			//compare() returns a ZERO when the two values are equal
			if (input == "south" || input.compare("go south") == 0)
				room = 2;

			if (input.compare("get sword") == 0)
				inventory[0] = "sword";

			cout << "Inventory:" << inventory[0] << endl;
			break;
		case 2:
			cout << "room 2, you can go north" << endl;

			//getline lets you handle user input with spaces
			getline(cin, input);

			//compare() returns a ZERO when the two values are equal
			if (input == "north" || input.compare("go north") == 0)
				room = 1;

			cout << "Inventory:" << inventory[0] << endl;


		}
	}
}
