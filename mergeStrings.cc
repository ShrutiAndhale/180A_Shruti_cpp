#include "mergeStrings.h"
using namespace std;

string mergeStrings(const vector<string>& a) {
    string result;
    size_t maxLen = 0;

    for (const string& str1 : a) {
        if (str1.length() > maxLen) {
            maxLen = str1.length();
        }
    }
    for (size_t i = 0; i < maxLen; i++) {
        for (const string& str1 : a) {
            if (i < str1.length()) {
                result += str1[i];
            }
        }
    }
    return result;
}