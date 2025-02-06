#include <iostream>
#include <string>
#include <algorithm> // for std::reverse

using namespace std;

int main() {
    string input;
    cout << "Enter a string: ";
    getline(cin, input);

    reverse(input.begin(), input.end());

    cout << "Reversed string: " << input << endl;

    return 0;
}
