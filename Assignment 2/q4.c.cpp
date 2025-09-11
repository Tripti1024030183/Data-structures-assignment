#include <iostream>
#include <string>
using namespace std;

bool isVowel(char ch) {
    ch = tolower(ch);
    return (ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u');
}

int main() {
    string str, result = "";
    cout << "Enter a string: ";
    cin >> str;

    for (int i = 0; i < str.length(); i++) {
        if (!isVowel(str[i])) {
            result += str[i];
        }
    }

    cout << "String without vowels: " << result << endl;
    return 0;
}
