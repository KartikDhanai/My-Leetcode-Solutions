#include <iostream>
#include <string>
using namespace std;

bool isSpecialChar(char c) {
    return !isalnum(c);
}

string reverseStringWithSpecialChars(const string& input) {
    int n = input.length();
    string result = input;

    int start = 0, end = n - 1;

    while (start < end) {
        while (start < end && isSpecialChar(result[start]))
            start++;

        while (start < end && isSpecialChar(result[end]))
            end--;

        swap(result[start], result[end]);

        start++;
        end--;
    }

    return result;
}

int main() {
    string input = "ABC?D";
    string output = reverseStringWithSpecialChars(input);

    cout << "Input: " << input << endl;
    cout << "Output: " << output << endl;

    return 0;
}
