#include <iostream>
#include <map>

using namespace std;

int main(){
	map<char,int> M;
	map<char,int>::iterator it;
	char s;
	int val;
	for(int i=0;i<10;i++){
		cin>>s>>val;
		M.insert(make_pair(s,val));
		}
	for(it=M.begin();it!=M.end();it++){
		cout<<it->first<<" "<<it->second<<endl;
		
		}
	
	return 0;
	}
