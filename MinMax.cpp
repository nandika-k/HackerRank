#include <iostream>
#include <vector>

void miniMaxSum(vector<int> arr) {
    long a = arr[0], b = arr[1], c = arr[2], d = arr[3], e = arr[4];
    long maximum = a + b + c + d;
    long minimum = maximum;
    long sum1 = b + c + d + e;
    long sum2 = c + d + e + a;
    long sum3 = d + e + a + b;
    long sum4 = e + a + b + c;
    
    maximum = max(maximum, max(sum1, max(sum2, max(sum3, sum4))));
    minimum = min(minimum, min(sum1, min(sum2, min(sum3, sum4))));
    
    cout << minimum << " " << maximum << endl;
}