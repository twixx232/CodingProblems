#include <bits/stdc++.h>
using namespace std;

int main (){
    // input the matrix
    int matrix [5][5];
    int min ;
    for(int i = 0;i<5;i++){
        for(int j=0; j<5;j++){
            cin>>matrix[i][j];
            if(matrix[i][j]==1){
                min = (abs(2-i)) + (abs(2-j));
            }
        } 
    }
    cout<<min<<endl;
    //search the 1 in matrix and get its index
    // print (3-i + 3-j)  (don't forget abs )
    return 0;
}
