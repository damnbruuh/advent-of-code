#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <algorithm>

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
        cin >> in;
        if(in == "stop") {
            break;
        }
        else {
            vin.push_back(in);
        }
    }

    for(int i = 0; i < vin.size(); i++) {

        vector<string> separatedColon = splitString(vin[i], ':');
        password[i] = separatedColon[1];

        vector<string> separatedDash = splitString(separatedColon[0], '-');
        min[i] = stoi(separatedDash[0]);

        vector<string> separatedSpace = splitString(separatedDash[1], ' ');
        max[i] = stoi(separatedSpace[0]);

        char character = separatedSpace[1][0];

        passchar[i] = character;

        int occurrences = 0;

        for(int j = 0; j < password[i].size(); j++) {
            if(password[i][j] == character) {
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
    istringstream f(input);
    string buf;
    while(getline(f, buf, delimiter)) {
        tokens.push_back(buf);
    }
    return tokens;
}
