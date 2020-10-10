#include <bits/stdc++.h>

using namespace std;

int lowestTriangle(int base, int area){
    // Complete this function
    int h = (area*2)/base + bool ((area*2) %base);
    return h;

}

int main() {
    int base;
    int area;
    cin >> base >> area;
    int height = lowestTriangle(base, area);
    cout << height << endl;
    return 0;
}

