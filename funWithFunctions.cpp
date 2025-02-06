#include <iostream>
using namespace std;

// Function to get an integer from the user
int getAnIntFromTheUser() {
    int num;
    cout << "Enter an integer: ";
    cin >> num;
    return num;
}

// Function to compare two integers and return the larger one
int compareTwoInts(int a, int b) {
    return (a > b) ? a : b;
}

// Function to sum two integers
int sumTwoInts(int a, int b) {
    return a + b;
}

int main() {
    cout << "Fun with Functions Program" << endl;

    int num1 = getAnIntFromTheUser();
    int num2 = getAnIntFromTheUser();

    int larger = compareTwoInts(num1, num2);
    cout << "The larger of the two integers is: " << larger << endl;

    int sum = sumTwoInts(num1, num2);
    cout << "The sum of the two integers is: " << sum << endl;

    return 0;
}
