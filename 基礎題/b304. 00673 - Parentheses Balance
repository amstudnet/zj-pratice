#include <bits/stdc++.h>
using namespace std;
int t;
int main() {
string s;
cin>>t>>ws;
while(t--){
	getline(cin,s);
	stack<char>st;
	int f=1;
	if(s.length()==0){
		cout<<"Yes\n";
		continue;
	}
	for(int i=0;i<s.length();i++){
		
	    if(s[i]==')' && !st.empty()&& st.top()=='(' ){
	    	st.pop();
		}
		else if( s[i]==']' && !st.empty()&& st.top()=='['){
			st.pop();
		}
		else st.push(s[i]);
		
		//if(f==0)break;
	}
	if(st.empty() )cout<<"Yes"<<endl;
	else cout<<"No"<<endl;
}
 
  
}
