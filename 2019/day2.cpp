#include <iostream>
#include <vector>
#include <string>
#include <sstream>

using namespace std;

vector<string> splitString(string s, char delim) {
    vector<string> tokens;
    string buf;
    stringstream ss(s);
    while(getline(ss, buf, delim)) {
        tokens.push_back(buf);
    }
    return tokens;
}

int main() {

    string a, b;
    getline(cin, a);
    getline(cin, b);

    vector<int> opcodes;
    vector<int> positions;

    return 0;
}