#include <bits/stdc++.h>
using namespace std;

int main() {
	string a ,b ;
	cin>>a>>b;
	for(unsigned i = 0; i<a.size();i++){

		a[i] = tolower(a[i]);
		b[i] = tolower(b[i]);
	}
	if (a==b){
		cout<<0<<endl;
	}
	else{
		for(unsigned j =0;j<a.size();j++){
			if (a<b){
				cout<<"-1"<<endl;
				break;
			}
			else if (a>b){
				cout<<1<<endl;
				break;
			
			}
		}
	}

	return 0;
}
