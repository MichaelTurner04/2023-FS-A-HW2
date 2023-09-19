//Name: Michael Turner
//ID: 18229090
//Date: 9-18-2023
//Filename: CS1570HW2
//Purpose: Homework 2 assignment

#include <iostream>
#include <string>
using namespace std;
const long double  PI_VALUE = 3.141592653589793238; //Chapter 1
const double EARTH_GRAVITY = 9.80665;
const string WISDOM = "Love, Kindness, and Responsibility. And always eat your vegetables and tomatoes!";
int main(){
    
    unsigned int stories; //Chapter 2
    float duration;//Chapter 2
    float diameter;//Chapter 3
    float circumference;//Chapter 3
    string wordAction; //Chapter 4
    char ch; //Chapter 4
    string sentence; //Chapter 4
    bool lifeTruth; //Chapter 5
    int truthNumber;//Chapter 5
    string firstWord;//Chapter 6
    string reflect; //Chapter 6
    string newWisdom;//Chapter 6
    int daysExperience;//Chapter 7
    int books;//Chapter 7
    float expCalc;//Chapter 7

    cout << "How many stories did your grandparents share with you? "; //Chapter 2
    cin >> stories;
    duration = stories * 5.5; //calculation for time listening to stories
    cout << "You have listened to approximately " << duration << " minutes of stories from your grandparents." << endl;

    cout << "Enter the diameter of life's circle you want to draw. "; //Chapter 3
    cin >> diameter;
    circumference = diameter * PI_VALUE; //Calculation of circumference of a circle
    cout << "The circumference of your life's circle is: " << circumference << endl;

    cout << "Enter a character: "; //Chapter 4
    cin >> ch;
    int asciiValue = (int)ch; //Convert the input to ascii
    cout << "The ASCII value of " << ch << " is " << asciiValue << endl;
    cout << "form a sentence with that character: " << endl;
    cin.ignore();
    getline(cin, sentence);
    cout << "\t" << sentence << endl;

    cout << "Enter a number. Let's explore its truthiness in the world of computers. " << endl; //Chapter 5
    cin >> truthNumber;
    lifeTruth = truthNumber;//assign lifeTruth to the input
    cout << "Truthiness of " << truthNumber << " in the world of computers: " << lifeTruth*EARTH_GRAVITY << endl; //Display the result

    cout << "What's your child's first word going to be? "; //Chapter 6
    cin >> firstWord;
    cout <<"Concatenation: " << firstWord + " " + WISDOM << endl; //output the Concatenation
    cout << "Your child's legacy will be tied with " << firstWord << " and the values of " << WISDOM << endl; 
    cout << "Would you like to reflect on your own wisdom? (y/n) ";
    cin >> reflect;
    if (reflect == "y") { //bonus for chapter 6
        cout << "Enter your own piece of wisdom" << endl;
        cin.ignore();
        getline(cin, newWisdom); //get whole sentence
        cout << "Your personal wisdome: " << newWisdom << endl; //displays updated wisdom
        cout << "Your wisdom is " << newWisdom.length() << " characters long. Thank you for sharing!" << endl; // displays length of the wisdom
    }
    else if (reflect == "n")
        cout << "Thank you for sharing!" << endl;

    cout << "Imagine you're dividing a lifetime of experiences, represented in days, amongst a number of books. How many days of expereince do you have? "; //Chapter 7
    cin >> daysExperience;
    cout << "How many books do you wish to divide these experiences into? ";
    cin >> books;
    expCalc = static_cast <float>(daysExperience) / static_cast <float>(books); //calculation for the number of experience in each book
    float d = static_cast <float>(expCalc);
    cout << "Each book will contain " << d << " days of experiences." << endl;
    return 0;


}
