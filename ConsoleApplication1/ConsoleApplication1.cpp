/*  Project Name: Chapter 5 Exercise 21 - Random number Guessing Game
    File Name: ConsoleApplication1.cpp
    Programmer: Harrison Hudgins
    Date: November 15, 2024
    Requirements:
    Create a second branch in your Exercise 20 project and Enhance the program that you wrote for Programming Challenge 20
    so it keeps a count of the number of guesses the user makes. When the user correctly guesses the random number,
    the program should display the number of guesses.
*/

#include <iostream>

using namespace std;

int input;
int guesses;

int main()
{
    unsigned seed = time(0);
    srand(seed);
    int num = rand() % 1000;
    
    cout << "Please guess the random number that has been generated.\n";
    cin >> input;
    guesses++;

    while (input != num) {
        if (input < num) {
            cout << "Too low, try again.\n";
            cin >> input;
            guesses++;
        }
        if (input > num) {
            cout << "Too high, try again.\n";
            cin >> input;
            guesses++;
        }
    }
    cout << "You have guessed correctly.\nYour total number of guesses: " << guesses;
}
