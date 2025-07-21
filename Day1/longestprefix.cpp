#include <iostream>
#include <vector>
using namespace std;
string findLongestCommonPrefix(const vector<string>& strs) {
    string prefix = "";
    if (!strs.empty()) {
        int index = 0;
        while (true) {
            char currentChar;
            if (index < strs[0].size()) {
                currentChar = strs[0][index];
            } else {
                break;
            }
            bool allMatch = true;
            for (int i = 1; i < strs.size(); i++) {
                if (index >= strs[i].size() || strs[i][index] != currentChar) {
                    allMatch = false;
                    break;
                }
            }
            if (!allMatch) break;
            prefix += currentChar;
            index++;
        }
    }
    return prefix;
}
int main() {
    int n;
    cout << "Enter number of strings: ";
    cin >> n;
    vector<string> strs(n);
    cout << "Enter the strings:\n";
    for (int i = 0; i < n; i++) {
        cin >> strs[i];
    }
    string result = findLongestCommonPrefix(strs);
    cout << "Longest Common Prefix: \"" << result << "\"" << endl;
    return 0;
}
