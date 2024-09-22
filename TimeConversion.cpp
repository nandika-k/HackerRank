#include <bits/stdc++.h>

using namespace std;

string timeConversion(string s) {
    //save hour value in 12hr format
    int hour = stoi(s.substr(0,2));
    
    //if it's PM
    if (s[8] == 'P') {
        //if it's between 1PM-11:59:59PM
        if (hour != 12) {
            return to_string(hour + 12) + s.substr(2, 8);
        }
    }
    //if it's 12 AM
    else if (hour == 12) {
        //12 AM is 00 and the rest remains the same
        return "00" + s.substr(2,8);
    }
    //if it's between 1AM-12PM
    return s.substr(0, 8);
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = timeConversion(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
