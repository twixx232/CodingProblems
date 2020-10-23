#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
using namespace std;

int main(){
	int r,p;
	vector<int> ranked,player,d;
	cin>>r;
	for(int i =0;i<r;i++){
		int input;
		cin>>input;
		ranked.push_back(input);
	}
	cin>>p;
	for(int j =0;j<p;j++){
		int input;
		cin>>input;
		player.push_back(input);
	}
	// this line will sort the ranked vector to descending order
	sort(begin(ranked), end(ranked), greater<int>());
	//this line will remove the no sense elements , and keep only the unique
    ranked.erase(unique(begin(ranked), end(ranked)), end(ranked));
	// now we have our ranked vector sorting and don't dontain duplicates numbers
	
	// this loop will iterate in our player loop
    for (int current : player)
    {
		//we make an interator to iterate in our ranked vector and compare it with the player values , to understand more this line search about lower_bound
        auto myItr = lower_bound(begin(ranked),end(ranked), current, greater<int>());
        // we return the distance between the start to our iterator and +1 because we want the the rank not the index of the vector
        auto de = distance(begin(ranked), myItr) + 1;
        cout<<de<<endl;
        
    }
    // hope it help ,from twix_232

	return 0;
}
