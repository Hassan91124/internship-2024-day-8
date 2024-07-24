#include <iostream>
#include <unordered_map>
using namespace std;

int romanToInt(string s) {
    unordered_map<char, int> roman = {
        {'I', 1}, {'V', 5}, {'X', 10},
        {'L', 50}, {'C', 100}, {'D', 500}, {'M', 1000}
    };
    
    int total = 0;
    int prev_value = 0;
    
    for (int i = s.size() - 1; i >= 0; --i) {
        int value = roman[s[i]];
        if (value < prev_value)
            total -= value;
        else
            total += value;
        prev_value = value;
    }
    return total;
}

int main() {
    string roman;
    cout << "Enter a Roman numeral: ";
    cin >> roman;
    cout << "Integer: " << romanToInt(roman) << endl;
    return 0;
}
