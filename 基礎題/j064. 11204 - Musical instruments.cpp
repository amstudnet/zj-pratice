#include<iostream>
#include<cstring>
using namespace std;
int ta[40];
int main(){
	
	int ans;
	int n,m,t;
	cin>>t;
	while(t--){
		ans=1;
		cin>>n>>m;
		memset(ta,0,sizeof ta);
		for(int i=0;i<m;i++){
			int in;
			for(int j=0;j<n;j++){
				cin>>in;
				if(in==1){
					ta[j]++;
				}
			}
		}
		for(int i=0;i<40;i++){
			if(ta[i]){
				ans*=ta[i];
			}
		}
		cout<<ans<<endl;
	}
}
