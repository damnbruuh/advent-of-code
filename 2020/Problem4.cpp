#include <vector>
#include <iterator>
#include <iostream>
#include <bits/stdc++.h>
#include <string>
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
        if(vin[i] == "") {
            // passport has ended
            string total;
            int counter;
            for(int x = 0; x < passport.size(); x++) {
                total += " " + passport[x];
            }
            vector<string> properties = { "byr", "iyr", "eyr", "hgt", "hcl", "ecl", "pid" };
            for(int k = 0; k < properties.size(); k++) {
                if(total.find(properties[k]) != string::npos) {
                    counter++;
                }
            }
            if(counter == 7) {
                valid_passports++;
            }
            passport.clear();

            counter = 0;
        }
        else {
            passport.push_back(vin[i]);
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