#include <iostream>
#include <cstring>
#include <map>
#include <algorithm>
#include <queue>
using namespace std;

int m,n;
vector<int>v[205];
bool bfs(int start){
	queue<int>q;
	int color[205]={0};
	q.push(start);
	while(!q.empty()){
		int cur=q.front();
		q.pop();
	    for(int &nxt:v[cur]){
	    		if(!color[nxt]){
	    			q.push(nxt);
			if(color[cur]==1)color[nxt]=2;
			else color[nxt]=1;
		}
		
		else if(color[nxt]==color[cur]){
			return false;
		}
		
		}
	}
	return true;
}
int main() {
    while(cin>>n){
    	if(n==0)break;
    	cin>>m;
    	int a,b;
    	for(auto &i:v)i.clear();
    	for(int i=0;i<m;i++){
    		cin>>a>>b;
    		v[a].push_back(b);
    		v[b].push_back(a);
		}
		if(bfs(a))cout<<"BICOLORABLE.\n";
		 else cout<<"NOT BICOLORABLE.\n";
	}
   
	 
  
 

}
