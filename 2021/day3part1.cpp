#include <iostream>
#include <string>
#include <vector>
#include <cmath>

using namespace std;

int binaryToInt(const vector<bool> &vec) {
    int out = 0, k = vec.size() - 1;
    for(int i = 0; i < vec.size(); i++) {
        out += (pow(2, k) * vec[i]);
        k--;
    }
    return out;
}

int main()
{

    string in, sGamma = "";
    vector<string> inputVec;
    vector<bool> gammaVec;
    while(getline(cin, in) && in != "") {
        inputVec.push_back(in);
    }

    for(int i = 0; i < inputVec[0].size(); i++) {
        int ones = 0;
        for(int k = 0; k < inputVec.size(); k++) {
            if(inputVec[k][i] == '1') {
                ones++;
            }
        }
        if(ones > inputVec.size() - ones) {
            gammaVec.push_back(1);
        }
        else {
            gammaVec.push_back(0);
        }
    }
    int gamma = binaryToInt(gammaVec);
    gammaVec.flip();
    int epsilon = binaryToInt(gammaVec);
    cout << gamma * epsilon << endl;
    return 0;
}