#include<iostream>
using namespace std;
int dp[1000][1000];
int main(){
	int case1;
	cin>>case1;
	for(int t=1;t<=case1;t++){
		int n,m;
		cin>>n;
		cin>>m;
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				if(i==j)dp[i][j]=0;
				else dp[i][j]=100000;
			}
		}
		for(int i=0;i<m;i++){
			int u,v;
			cin>>u>>v;
			dp[u][v]=1;
			dp[v][u]=1;
		}
		int s,d;
		cin>>s>>d;
		for(int k=0;k<n;k++){
			for(int i=0;i<n;i++){
				for(int j=0;j<n;j++){
					dp[i][j]=min(dp[i][j],dp[i][k]+dp[k][j]);
				}
			}
		}
		/*for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
			   cout<<dp[i][j]<<" ";
			}
			cout<<endl;
		}*/
		 
		int res=0;
		for(int k=0;k<n;k++){//判斷從 start to i, i to destination 最遠的距離是哪個，輸出他
		                     //因為可以分工進行所以需要找最晚的那組 
			res=max(res,dp[s][k]+dp[k][d]);
		}
		printf("Case %d: %d\n",t,res);
	}
}
