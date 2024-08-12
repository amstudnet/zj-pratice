#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;
int p[1000005];
struct edge{
	int u,v;
	int w;
};
int find(int x){
	if(x==p[x])return x;
	return p[x]=find(p[x]);
}
bool cmp(edge x ,edge y){
	return x.w<y.w;
}
vector<edge>v;
int main(){
	int n,m;
	cin>>n>>m;
	int a,b,c;
	v.clear();
	for(int i=0;i<n;i++)p[i]=i;
	for(int i=0;i<m;i++){
		cin>>a>>b>>c;
		v.push_back({a,b,c});
	}
	int todo=n-1;
	int ans=0;
	sort(v.begin(),v.end(),cmp);
	for(auto tmp:v){
		int x=find(tmp.u);
		int y=find(tmp.v);
		if(x!=y){
			ans+=tmp.w;
			p[x]=p[y];
			todo--;
		}
	}
	cout<<ans<<endl;
	
}
