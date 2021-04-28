#include <iostream>
#include <vector>
#include <string>

using namespace std;

int getMultiplier(vector<int> input);

int main() {

    vector<int> vin;
    string in;
    
    bool var = true;

    while(var == true) {

        cin >> in;

        if(in == "stop") {

            var = false;

            cout << "Stopped receiving input.\n";

        }

        else {

            vin.push_back(stoi(in));

            cout << "Received " + in + " as input\n"; 

        } 
    }

    cout << getMultiplier(vin);
}

int getMultiplier(vector<int> input) {

        for(int i = 0; i < input.size(); i++) {

            for(int j = 0; j < input.size(); j++) {

                if(input[i] + input[j] == 2020) {

                    cout << input[i] + " and " + input[j];

                    return input[i] * input[j];

            }

        }
    }
}

