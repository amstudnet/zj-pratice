#include<iostream>
using namespace std;
int e[400][400];
int main(){
	int n,m,q;
	cin>>n>>m>>q;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(i==j)e[i][j]=0;
			e[i][j]=40000;
		}
	}
	int start ,end;
	for(int i=0;i<m;i++){
		cin>>start>>end;
		e[start][end]=1;
	}
	for(int k=0;k<n;k++){
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				if(e[i][k]+e[k][j]<e[i][j]){
					e[i][j]=e[i][k]+e[k][j];
				}
			}
		}
	}
	int a,b;
	while(q--){
		cin>>a>>b;
		if(e[a][b]!=40000)cout<<"YES\n";
		else cout<<"NO\n";
	}
}
