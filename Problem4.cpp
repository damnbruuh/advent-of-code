#include <vector>
#include <iterator>
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

vector<string> splitString(string input, char delimiter);

int main() {
    int valid_passports = 0;
    string line;
    vector<string> vin;
    while(getline(cin, line)) {
        if(line == "stop") {
            break;
        }
        else {
            vin.push_back(line);
        }
    }

    vector<string> passport;
    for(int i = 0; i < vin.size(); i++) {
        if(vin[i] != "\n") {
            passport.push_back(vin[i]);
        }
        else {

            passport.clear();

        }


    }


    cout << valid_passports << endl;
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