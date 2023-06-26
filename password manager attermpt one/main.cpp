//this is not actually my password or used pins! this is currently a proof of concept and helping me learn arrays!
#include<iostream>
#include<map>
#include<string>
using namespace std;
string websites[4] = { "[0] github.com", "[1] youtube.com", "[2] twitch.tv", "[3] google.com" };
int main() {
    map<string, string> input_map{
        {"0", "2$g3@!$$%@#FGH433"},
        {"1","fgdkS@#$sdedj4789@d"},
        {"2", "wzTG692&l&p@"},
        {"3", "@L&fyzI9s01p"}};
    while(1){
    cout<< "noahs password manager.... (^<>^)....\n";
    cout<< "--------------\n";
    for (string i : websites) {
    cout << i << "\n";}
    cout << "--------------\n>"; // basic ui stuff
    string input_1;
    cin >> input_1;
    int pin;
    if (input_map.contains(input_1)) {
         system("cls");
         cout << "enter pin...\n>";
         cin >> pin;
    if (pin == 5555) {
         system("cls");
         cout << input_map.at(input_1);
         string a; cin >> a;}
    else {cout << "ACCESS DENEID";
          string a; cin >> a;}}
    else {cout << "not a valid website..";
         string a; cin >> a; }
    system("cls");}
}//main statement              