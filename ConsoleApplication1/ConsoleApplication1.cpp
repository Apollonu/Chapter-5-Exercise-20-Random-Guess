/*  Project Name: Chapter 5 Exercise 20 - Random number Guessing Game
    File Name: ConsoleApplication1.cpp
    Programmer: Harrison Hudgins
    Date: November 15, 2024
    Requirements:
    Write a program that generates a random number and asks the user to guess what the number is.
    If the user’s guess is higher than the random number, the program should display “Too high, try again.”        If the user’s guess is lower than the random number, the program should display “Too low, try again.”
    The program should use a loop that repeats until the user correctly guesses the random number.
*/

#include <iostream>

using namespace std;

int input;

int main()
{
    unsigned seed = time(0);
    srand(seed);
    int num = rand() % 1000;
    
    cout << "Please guess the random number that has been generated.\n";
    cin >> input;

    while (input != num) {
        if (input < num) {
            cout << "Too low, try again.\n";
            cin >> input;
        }
        if (input > num) {
            cout << "Too high, try again.\n";
            cin >> input;
        }
    }
    cout << "You have guessed correctly.";
}
