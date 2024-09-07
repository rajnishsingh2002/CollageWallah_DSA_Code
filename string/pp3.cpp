#include<iostream>
#include<vector>
using namespace std;

void ans(string str, int n) {
    vector<int> fre(256, 0);

    // Count the frequency of each character in the string
    for (int i = 0; i < n; i++) {
        if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')) {
            int idx = (int)str[i];
            fre[idx]++;
        }
    }

    int maxFreq = INT32_MIN, minFreq = INT32_MAX;
    char minCH = '\0', maxCH = '\0';

    // Find the minimum and maximum frequency characters
    for (int i = 0; i < 256; i++) {
        if (fre[i] > 0) {  // Consider only characters that have occurred
            if (fre[i] < minFreq) {
                minFreq = fre[i];
                minCH = (char)i;
            }
            if (fre[i] > maxFreq) {
                maxFreq = fre[i];
                maxCH = (char)i;
            }
        }
    }

    cout << "Maximum occurring character: " << maxCH << " (occurs " << maxFreq << " times)" << endl;
    cout << "Minimum occurring character: " << minCH << " (occurs " << minFreq << " times)" << endl;
}

int main() {
    string str = "grass is greener on the other side";
    int n = str.size();

    ans(str, n);

    return 0;
}
