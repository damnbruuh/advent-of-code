#include <iostream>
#include <vector>
#include <string>
#include <sstream>

using namespace std;

vector<int> splitString(string s, char delim)
{
    vector<int> tokens;
    string buf;
    stringstream ss(s);
    while (getline(ss, buf, delim))
    {
        tokens.push_back(stoi(buf));
    }
    return tokens;
}

int main()
{
    string a;
    cin >> a;
    vector<int> codes = splitString(a, ',');

    codes[1] = 12;
    codes[2] = 2;
    
    for(int i = 0; i < codes.size();) {

        if(codes[i] == 1) {
            codes[codes[i + 3]] = codes[codes[i + 1]] + codes[codes[i + 2]];
        }
        else if(codes[i] == 2) {
            codes[codes[i + 3]] = codes[codes[i + 1]] * codes[codes[i + 2]];
        }
        else if(codes[i] == 99) {
            break;
        }
        i += 4;
    }

    cout << codes[0] << endl;

    return 0;
}