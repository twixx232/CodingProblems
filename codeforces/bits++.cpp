#include <iostream>
using namespace std;

int main() {
    // Write C++ code here
    int t ,X=0;
    cin>>t;
    for(int i =0;i<t;i++){
        string s;
        cin>>s;
        if(s=="X++"){
            X++;
        }
        else if(s=="++X"){
            ++X;
        }
        else if(s=="X--"){
            X--;
        }
        else if (s== "--X"){
            --X;
        }
    }
    cout<<X<<endl;

    return 0;
}
