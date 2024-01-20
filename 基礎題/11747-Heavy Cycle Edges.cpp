#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
struct edge{
	int a,b;
	int w;
};
bool cmp(edge x,edge y){
	return x.w<y.w;
	
} 
int p[100000];
int n,m;
int todo;
int a,b,c;
int find(int x){
	if(p[x]==x)return x;
	else{
		return p[x]=find(p[x]);
	}
}
vector<edge>v;
vector<int>ans;//remove edge set
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	while(cin>>n>>m){
		if(n==0&&m==0)break;
		todo=n-1;
		v.clear();
		ans.clear();
		for(int i=0;i<n;i++)p[i]=i;
		for(int i=0;i<m;i++){
			cin>>a>>b>>c;
			v.push_back({a,b,c});
		}
		sort(v.begin(),v.end(),cmp);
		for(edge tmp:v){
			int x=find(tmp.a);
			int y=find(tmp.b);
			if(x==y){
				ans.push_back(tmp.w); 
				continue;
			}
			else{
				todo--;
				p[x]=p[y];
				
			}
		}
		if(ans.empty())cout<<"forest\n";
		else {
			for(int i=0;i<ans.size();i++){
				if(i!=ans.size()-1)cout<<ans[i]<<" ";
				else cout<<ans[i]<<"\n";
			}
		}
	}
}
