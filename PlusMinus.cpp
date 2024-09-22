// # include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include <vector>
#include <iomanip>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

void plusMinus(vector<int> arr) {
    double length = arr.size();
    double plus = 0;
    double zero = 0;
    double minus = 0;

    for (int num: arr) {
        if (num > 0) {
                plus++;
        }
        else if (num == 0) {
            zero = 1;
        }
        else {
            minus++;
        }
    }
    cout << fixed << setprecision(6);
    cout << plus / length << endl;
    cout << zero / length << endl;
    cout << minus / length << endl;
}