/*
    rainfall.cpp

    Rainfall report
*/

#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<float> rainfall;
    float t;
    float m;
    float n;
    while (cin >> n) {
        rainfall.push_back(n);
    }
    t = rainfall[0];
    m = rainfall[0];
    for (int i = 1; i < rainfall.size(); ++i) {
        t += rainfall[i];
        if (rainfall[i] > m)
            m = rainfall[i];
    }
    cout << "Average Hourly Rainfall: " << (t / rainfall.size()) << " hundreds of inches" << '\n';
    cout << "Heaviest Hourly Rainfall: " << m << " hundreds of inches" << '\n';

    return 0;
}
