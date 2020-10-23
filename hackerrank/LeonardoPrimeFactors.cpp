#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the primeCount function below.
 */
int primeCount(long n) {
    /*
     * Write your code here.
     */
     vector<int> v = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59};
     int f = 0;long r=1;
     while(r<=n && f<16){
        r*=v[f];
        f++;
     }
     return f-1;
     


}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int q;
    cin >> q;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int q_itr = 0; q_itr < q; q_itr++) {
        long n;
        cin >> n;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        int result = primeCount(n);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}

