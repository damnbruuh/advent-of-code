#include <iostream>
#include <vector>
#include <string>
#include <bits/stdc++.h>

using namespace std;

vector<string> splitString(string input, char delimiter);

int main() {

    string in; 
    vector<string> vin;

    int validPasswords = 0;

    vector<string> password;
    vector<int> min;
    vector<int> max;
    vector<char> passchar;

    while(true) {

        getline(cin, in);
        if(in == "stop") {
            break;
        }
        else {
            vin.push_back(in);
        }
    }

    for(int i = 0; i < vin.size(); i++) {

        vector<string> colonSeparated = splitString(vin[i], ':');
        vector<string> dashSeparated = splitString(colonSeparated[0], '-');

        min.push_back(stoi(dashSeparated[0]));

        vector<string> spaceSeparated = splitString(dashSeparated[1], ' ');

        char character = spaceSeparated[1][0];
        passchar.push_back(character);

        max.push_back(stoi(spaceSeparated[0]));

        password.push_back(colonSeparated[1]);

        int occurrences = 0;
        // count occurrences of a character
        for(int j = 0; j < vin[i].size(); j++) {
            
            if(password[i][j] == passchar[i]) {
                occurrences++;
            }
        }
        if(occurrences >= min[i] && occurrences <= max[i]) {
            validPasswords++;
        }
    }

    cout << validPasswords;

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
