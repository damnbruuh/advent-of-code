#include <vector>
#include <iostream>
#include <string>
#include <bits/stdc++.h>
#include <map>
#include <algorithm>
#include <set>
#include <regex>

using namespace std;

vector<string> splitString(string input, char delimiter);

bool findShinyGold(map<string, string> bmap, string key);

int main() {
    string line;
    map<string, string> mp;
    set<string> bset;
    vector<string> keys;
    string removeone[] = {"bag", "bags"};
    char removetwo[] = {'1','2','3','4','5','6','7','8','9'};
    while(getline(cin, line)) {
        if(line == "stop") {
            break;
        }
        else {
            for(int i = 0; i < 2; i++) {
                // remove bag/bags
                regex pattern(removeone[i]);
                regex_replace(line, pattern, "");
            }
            for(int k = 0; k < 9; k++) {
                // remove numbers
                line.erase(remove(line.begin(), line.end(), removetwo[k]), line.end());
            }
            size_t containpos = line.find("contain");
            string splitzero = line.substr(0, containpos);
            string splitone = line.substr(containpos + 7, line.length());
            size_t first = splitzero.find_last_of(' ');
            splitzero = splitzero.substr(0, first);
            replace(splitone.begin(), splitone.end(), '.', ' ');
            splitzero.push_back(' ');
            keys.push_back(splitzero);
            mp.insert(pair<string, string>(splitzero, splitone));
        }
    }
    for(int x = 0; x < keys.size(); x++) {
        bool val = findShinyGold(mp, keys[x]);
        if(val == true) {
            bset.insert(keys[x]);
        }
    }
    cout << bset.size() << endl;
    return 0;
}

bool findShinyGold(map<string, string> bmap, string key) {
    // TODO, fix control structure return error
    string elements = bmap[key];
    vector<string> elementSplit = splitString(elements, ',');
    if(elements == "  no other bag") {
        return false;
    }
    else {
        if(elements.find("  shiny gold")) {
            return true;
        }
        else {
            for(int i = 0; i < elementSplit.size(); i++) {
                return findShinyGold(bmap, elementSplit[i]);
            }
        }
    }
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