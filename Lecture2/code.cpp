#include <iostream> // include stream library
using namespace std; // tells compiler to use standard namespace

int main() {
    // cout << "My first C++ program" << endl; // endl to indicate line ends here
    // cout << "hello " << "abbas " << "multiple " << "here"; // multiple prints 
    // cout << "Apna College\nBy Shradha Khapra"; // \n enables next line

    // variables and data types
    // int age = 25;
    // char name = 'A';
    // float PI = 3.14F;
    // bool isSafe = true;
    // double = 100.99;

    // implicit type conversion (done by compiler);
    // small mem allocation to big mem allocation
    char grade = 'A';

    int marks = grade;

    // type casting (explicit)
    // note only values before . is stored
    // big memory allocation to small mem allocation
    double rupee = 100.99;

    int singleRupee = (int)rupee;

    // input in C++
    // int age;
    // cout << "Enter your age : ";
    // cin >> age;
    // cout << "Your age is : " << age << endl;

    // arithmetic operators
    // int a = 5;
    // int b = 2;

    // cout << (a/ (double)b) << endl;

    // Relational operators

    // cout << (5 >= 5) << endl;

    // Logical operators
    // || , && , !


    // sum of two numbers

    int a, b;
    cout << "Enter the value of a : ";
    cin >> a;
    cout << "Enter the value of b : ";
    cin >> b;

    int sum = (a + b);
    cout << "The sum of a + b is : " << sum << endl;
    return 0;


}

/*

PRIMITIVE DATA TYPES

int 4 bytes
char 1 byte
float 4 bytes
bool 1 byte
double 8 bytes*/ 

// Every variable takes a space in RAM (memory) of machine
// stored in 0's and 1's.
// there is binary number system, and conversion lesson later in the series


// IMPLICIT CONVERSION
// char to int
// memory allocation is changed


/*
OPERATORS
1 - ARITHEMATIC
2 - RELATIONAL
3 - LOGICAL.
*/