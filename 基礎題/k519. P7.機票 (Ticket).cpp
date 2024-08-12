#include<iostream>
#include<map>
using namespace std;
long long dp[100][100];
int main(){
	long long t;
	long long n,m;
	cin>>n;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin>>dp[i][j];
			if(dp[i][j]==-1)dp[i][j]=1e9;
		}
	}
	
		long long a,b;
		cin>>a>>b;
		a--;
		b--;
	
	
	for(int k=0;k<n;k++){
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				dp[i][j]=min(dp[i][j],dp[i][k]+dp[k][j]-50);
			}
		}
	}
   cout<<dp[a][b]<<endl;
}
