#include<iostream>
#include <cstdio>

#define LINUX  1
#define WINDOWS 0
#define PIN_NUMBER 5555

using namespace std;

class passwords {
	private:
		string password;

	public:
		string website;
		string getpass() {
			return password;
		}
		void setpass(string p) {
			password = p;
		}
};

void clearscreen()
{
	#if  LINUX
		cout << "\033c";
	#elif WINDOWS
		system("cls");
	#endif
}

void initpasswords(passwords p[4])
{
	p[0].website = "github.com";
	p[0].setpass("2$g3@!$$%@#FGH43");
	p[1].website = "youtube.com";
	p[1].setpass("gdkS@#$sdedj4789@d");
	p[2].website = "twitch.tv";
	p[2].setpass("wzTG692&l&p@");
	p[3].website = "google.com";
	p[3].setpass("@L&fyzI9s01p");
}

string fetchpassword(int in, passwords p[4])
{
	int pin;

	cout << "Enter pin : ";
	cin >> pin;
	if(pin != PIN_NUMBER) {
		cout << "Incorrect pin.";
		return string();
	}
	return p[in].getpass();
}

int main() 
{
	int input;
	passwords pass[4];

	initpasswords(pass);

	while (1) {
		clearscreen();
		cout << "noahs password manager.... (^<>^).... \ninput 0 to return to this menu at any time....\n--------------\n";
		for (int i = 0; i < 4; ++i) {
			cout << "[" << i << "] " << pass[i].website << "\n";
		}
		cout << "--------------\n>"; 
		cin >> input;
		if(input >= 0 && input <= 4) {
			clearscreen();
			string p = fetchpassword(input, pass);
			cout << "\n" << p;
		}
		cin.ignore(1000, '\n');
		cin.ignore();
	}
	return 0;
}
