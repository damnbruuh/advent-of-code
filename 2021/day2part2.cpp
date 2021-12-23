#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<string> splitSpaces(const string &input) {
    vector<string> out;
    out.push_back(input.substr(0, input.find(' ')));
    out.push_back(input.substr(input.find(' ')));
    return out;
}

int main() {
    string in;    
    int depth = 0, position = 0, aim = 0;

    while(getline(cin, in) && in != "") {
        vector<string> split = splitSpaces(in);
        if(split[0] == "forward") {
            position += stoi(split[1]);
            int x = stoi(split[1]);
            depth += (aim * x);
        }
        else if(split[0] == "down") {
            aim += stoi(split[1]);
        }
        else {
            aim -= stoi(split[1]);
        }
    }
    cout << position * depth << endl;

    return 0;
}