#include<iostream>
#include<algorithm>
using namespace std;
int p[1000005];
int size[1000005];
int find(int x){
	if(x==p[x])return x;
	return p[x]=find(p[x]);
}
int main(){
	int n,m;
	while(cin>>n>>m){
		for(int i=0;i<n;i++){
			p[i]=i;
			size[i]=1;
		}
		while(m--){
			int a,b;
			cin>>a>>b;
			int x=find(a);
			int y=find(b);
			if(x!=y){
					p[y]=p[x];
			size[x]+=size[y];
			}
		
		}
		cout<<*max_element(size,size+n)<<"\n";
	}
}
