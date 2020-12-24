#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>

using namespace std; 

vector<string> splitString(string input, char delimiter);

int main() {

    string example = "this is a string separated by whitespace";

    vector<string> splitted = splitString(example, ' ');

    for(int i = 0; i < splitted.size(); i++) {

        cout << splitted[i] + "\n";
    }
    return 0;
}

vector<string> splitString(string input, char delimiter) {

    vector<string> tokens;
    stringstream check1(input);
    string buf;

    while(getline(check1, buf, delimiter)) {
        tokens.push_back(buf);
    }

    return tokens;
}