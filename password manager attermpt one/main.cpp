#include<iostream>
using namespace std;
int i;
int pin;
string in0; //this is not actually my password or used pins! this is currently a proof of concept and helping me learn arrays!
int stall; // this is just so it looks better lol
string websites[4] = { "github.com", "youtube.com", "twitch.tv", "google.com" };
int main() {
										for (string i : websites) {
										cout << i <<"\n";}
										cout << "--------------\n>"; // basic ui
										cin >> in0;
	if (in0 == "github"){
		system("cls");
		cout << "enter pin....\n>";
		cin >> pin;
		if (pin == 5555) {
			system("cls");
			cout << "2$g3@!$$%@#FGH433";
			cin >> stall;
		}
		else {
			system("cls");
			cout << "ACCESS DENIED........!";
			cin >> stall;
		}
	}                //github pass

	if (in0 == "youtube") {
		system("cls");
		cout << "enter pin....\n>";
		cin >> pin;
		if (pin == 5555) {
			system("cls");
			cout << "fgdkS@#$sdedj4789@d";
			cin >> stall;
		}
		else {
			system("cls");
			cout << "ACCESS DENIED........!";
			cin >> stall;
		}
	}			//youtube pass

	if (in0 == "twitch") {
		system("cls");
		cout << "enter pin....\n>";
		cin >> pin;
		if (pin == 5555) {
			system("cls");
			cout << "wzTG692&l&p@";
			cin >> stall;
		}
		else {
			system("cls");
			cout << "ACCESS DENIED........!";
			cin >> stall;
		}
	}                //twich pass

	if (in0 == "google") {
		system("cls");
		cout << "enter pin....\n>";
		cin >> pin;
		if (pin == 5555) {
			system("cls");
			cout << "@L&fyzI9s01p";
			cin >> stall;
		}
		else {
			system("cls");
			cout << "ACCESS DENIED........!";
			cin >> stall;
		}
	}			//google pass
}                    //main statement              