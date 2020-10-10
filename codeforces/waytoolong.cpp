#include <bits/stdc++.h>
using namespace std;

/*void split(string j){
	vector<char> v(j.begin(),j.end());
	return  	

}*/
int main() {
  int T;
  cin>>T;
  vector<string> vwords;
  for(int i  =0;i<T;i++){
	  string s;
	  cin>>s;
	  vwords.push_back(s);
  }
  int z = vwords.size();
  for (int j = 0;j<z;j++){
	  if (vwords.at(j).size()>10){
	  	vector<char> vchar(vwords.at(j).begin(),vwords.at(j).end());
	  	int d = vchar.size();
		cout<<vchar[0]<<d-2<<vchar.back()<<endl;

	  }else{
	  	cout<<vwords.at(j)<<endl;
	  
	  }
  	
  }
	  
 
}

