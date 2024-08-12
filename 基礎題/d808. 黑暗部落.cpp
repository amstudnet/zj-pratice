#include<iostream>
#include<map>
#include<algorithm>
using namespace std;
int size[1000005];
int p[1000005];
int find(int x){
	if(x==p[x])return x;
	return p[x]=find(p[x]);
}
int main(){
	int n;
	cin.tie(0);
	ios::sync_with_stdio(0); 
	while(cin>>n){
		for(int i=0;i<n;i++){
			p[i]=i;
			size[i]=1;
		}
		int cnt=n;
		for(int i=1;i<=n;i++){
			int in;
			cin>>in;
			int x=find(in);
			int y=find(i);
			if(x!=y){
				p[y]=p[x];
				size[x]+=size[y];
				cnt--;
			}
		}
	
		int ans=*max_element(size,size+n);
		/*for(int i=0;i<n;i++){
			if(p[i]!=i)cnt++;
		}*/
		cout<<cnt<<" "<<ans<<"\n";
	} 
}
