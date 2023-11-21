#include <iostream>
#include <string>
using namespace std;

bool isPrefix(const string& str, int len, int i, int k) {
    if (i + k > len) return false;
    for (int j = 0; j < k; j++) {
        if (str[i] != str[j]) return false;
        i++;
    }
    return true;
}

bool isKPeriodic(const string& str, int len, int k) {
    for (int i = k; i < len; i += k) {
        if (!isPrefix(str, len, i, k)) return false;
    }
    return true;
}

int main() {
    string str = "abcabcabcabc";
    int len = str.length();
    int k = 3;
    if (isKPeriodic(str, len, k)) {
        cout << "Yes";
    }
    else {
        cout << "No";
    }
    return 0;
}