/*  Project Name: Chapter 5 Exercise 25 - Student Lineup
    File Name: ConsoleApplication1.cpp
    Programmer: Harrison Hudgins
    Date: November 14, 2024
    Requirements:
    Make a branch based off of the previous code and make it read from a file
*/

#include <iostream>

using namespace std;

int input;

int main()
{
    unsigned seed = time(0);
    srand(seed);
    int num = rand() % 1000;

    cout << num << endl;
    
    cout << "Please enter the number that has been generated.\n";
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