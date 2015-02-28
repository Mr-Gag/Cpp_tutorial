#include <iostream>
#include <set>

using namespace std;
int main(){
	set<int> st;
	set<int>::iterator it;
	int val;
	for(int i=0;i<10;i++){
		cin >> val;
		st.insert(val);
		}
	for(it=st.begin();it!=st.end();it++){
		if(*it%2==0) st.erase(it);
		cout<< *it << endl;
		}
	if(!st.empty()) cout<<" size is :"<<st.size()<<endl;
	it=st.find(40);
	cout<<*it<<endl;
	for(int i=0;i<10;i++){
		if(st.count(i)!=0) cout<<i<<"is in my set"<<endl;
		else cout<<i<<"in not in my set"<<endl;
	}
	
	return 0;
	}
