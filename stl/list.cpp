#include <iostream>
#include <list>

using namespace std;
int main(){
	list <int> l;
	list <int>::iterator it;
	int val,N;
	cin>>N;
	for(int i=0;i<N;i++){
		cin>>val;
		if(val%2==0) l.push_back(val);
		else l.push_front(val);
	}
	//insert element
	l.insert(++l.begin(),20);
	cout<<"display"<<endl;
	for(it=l.begin();it!=l.end();++it){
		cout<<*it<<endl;
	}
	cout<<"\n size :"<<l.size()<<endl;
	//erase element
	l.erase(l.begin());
	cout<<"\n size :"<<l.size()<<endl;
	// front and back
	while(!l.empty()){
		cout<<l.front() * l.back()<<endl;
		l.pop_front();
		l.pop_back();
		}
	cout<<"\n size :"<<l.size()<<endl;
	return 0;
	}
