#include<iostream>        
#include<algorithm>        
#include<vector>
#include<cstring>      
using namespace std;        
int vis[100005];
bool cmp(pair<long long , long long> a,pair<long long, long long> b){
	//if(a.second!=b.second)return a.second<b.second;
	return a.first>b.first; 
}
long long find(long long x){
	return vis[x]==-1?x:vis[x]=find(vis[x]);
}
int main(){         
int t;
cin.tie(0);
ios::sync_with_stdio(0);
while(cin>>t){
	memset(vis,-1,sizeof vis);
	vector<pair<long long,long long>>v;
	long long date,price;
	for(int i=0;i<t;i++){
		cin>>price>>date;
		v.push_back(make_pair(price,date));
	}
	stable_sort(v.begin(),v.end(),cmp); 
	long long sum=0;
	//for(int i=0;i<v.size();i++)cout<<v[i].first<<" "<<v[i].second<<endl;
	//cout<<endl;
	//vector<pair<long long,long long>>v2;
	for (int i=0;i<v.size();i++){
		long long k=find(v[i].second);
		
		//if(vis[v[i].second]==-1)sum+=v[i].first;
		//vis[v[i].second]=1;
		if(k){
			sum+=v[i].first;
			vis[k]=k-1;
		}
		//for(int i=0;i<v.size();i++)cout<<v[i].first<<" "<<v[i].second<<endl;
		//cout<<endl;

	}
	cout<<sum<<"\n";
}            
          
}
