// Determining if it is a lowercase letter.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Write a program that asks the user to enter a lowercase letter and determines whether or not the letter is a vowel

#include <iostream>
using namespace std;

int main()
{
    cout << "Enter a letter: ";
    char input;
    cin >> input;

    // Only switch statements are allowed for condition
    switch (input) {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':

        cout << "It's a vowel'" << endl;
        break;

   // if the user enters a consonant, print "This is a consonant".
    case 'b':
    case 'c':
    case 'd':
    case 'f':
    case 'g':
    case 'h':
    case 'j':
    case 'k':
    case 'l':
    case 'm':
    case 'n':
    case 'p':
    case 'q':
    case 'r':
    case 's':
    case 't':
    case 'v':
    case 'x':
    case 'z':
        cout << "It is a consonant." << endl;
        break;

    // If the user enters the letter ‘y’, print "This is sometimes a vowel".
    case 'y':
        cout << "It is sometimes a vowel." << endl;
        break;

        // If the user enters anything other than a lowercase letter, print "Invalid input". 
    default:
        cout << "Invalid  Input." << endl;
    

        return 0;
    }
