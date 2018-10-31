#include <iostream>
// Library needed to get a random seed
#include <time.h>

int main() {
       cout << "Time to play roulette, You start with $500" << endl;
    int color;
    int odd;
    int number;
    int money = 500;
    int bet;
    cout << "Place your Bet\n";
    cin >> bet;
    if (bet>money){
    while (bet>money){
        cout << "You do not have " << bet;
        cin >> bet;
        if (bet<=money){
            continue;
    int black[1] = {1};
    int white = 0;
    string a = "black";
    string b = "red";

    // Gets a random seed for our rand() function
    // ONLY RUN ONCE
    srand( time(NULL) );

    // Picks either 0 or 1 randomly with equal probablilty	
    // CAN BE RUN AS MANY TIMES AS NEEDED
    int playRoll(){
    int random = rand() % 2;
    std::cout << random;
    if(result == black){color = a}
    else if (result == white){color = b}
    return 0;
}