#include <vector>
#include <string>
#include <iostream>

using namespace std;

vector<string> splitSpace(const string &input) {
    vector<string> out;
    out.push_back(input.substr(0, input.find(' ')));
    out.push_back(input.substr(input.find(' ')));
    return out;
}

int main() {

    string in;
    int pos, depth = 0;

    while(getline(cin, in) && in != "") {
        vector<string> splitString = splitSpace(in);
        if(splitString[0] == "forward") {
            pos += stoi(splitString[1]);
        }
        else if(splitString[0] == "down") {
            depth += stoi(splitString[1]);
        }
        else {
            depth -= stoi(splitString[1]);
        }
    }

    cout << pos * depth << endl;
    
    return 0;
}