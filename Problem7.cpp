#include <vector>
#include <iostream>
#include <string>
#include <bits/stdc++.h>
#include <map>
#include <algorithm>
#include <iterator>
#include <set>

using namespace std;

vector<string> splitString(string input, char delimiter);

bool findShinyGold(map<string, string> bmap, string key);

string splitStringToken(string input, string delimit);

int main() {
    string line;
    map<string, string> mp;
    set<string> bset;
    string removeone[] = {"bag", "bags"};
    char removetwo[] = {'1','2','3','4','5','6','7','8','9','10'};
    while(getline(cin, line)) {
        if(line == "stop") {
            break;
        }
        else {
            for(int i = 0; i < sizeof(removeone)/sizeof(removeone[0]); i++) {
                line.erase(remove(line.begin(), line.end(), removeone[i]), line.end());
            }
            for(int k = 0; k < sizeof(removetwo)/sizeof(removetwo[0]); k++) {
                line.erase(remove(line.begin(), line.end(), removetwo[k]), line.end());
            }
            vector<string> split = splitString(line, "contain");
            size_t first = split[0].find_last_of(' ');
            split[0] = split[0].substr(0, first);
            replace(split[1].begin(), split[1].end(), '.', ' ');
            split[0].push_back(' ');
            mp.insert(pair<string, string>(split[0],split[1]));
        }
    }
    cout << bset.size() << endl;
    return 0;
}

bool findShinyGold(map<string, string> bmap, string key) {
    string elements = bmap[key];
    vector<string> elementSplit = splitString(elements, ",");
    
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

string splitStringToken(string input, string delimit) {
    return input.substr(0, input.find(delimit));
}