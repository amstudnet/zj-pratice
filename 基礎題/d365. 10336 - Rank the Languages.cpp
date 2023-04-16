#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;
 
bool vis[1000][1000];
 char ans[1000][1000];
 void dfs(int nowx,int nowy){
 	vis[nowx][nowy]=1;
 	if(ans[nowx+1][nowy]==ans[nowx][nowy]&&!vis[nowx+1][nowy]) dfs(nowx+1,nowy);
 	if(ans[nowx-1][nowy]==ans[nowx][nowy]&&!vis[nowx-1][nowy]) dfs(nowx-1,nowy);
 	if(ans[nowx][nowy+1]==ans[nowx][nowy]&&!vis[nowx][nowy+1]) dfs(nowx,nowy+1);
 	if(ans[nowx][nowy-1]==ans[nowx][nowy]&&!vis[nowx][nowy-1]) dfs(nowx,nowy-1);
 }
int main() {
    int t;
    cin>>t;
    for(int k=1;k<=t;k++){
    	
    	int a,b;
    	cin>>a>>b;
    	map<char,int>mp;
    	for(int i=0;i<a;i++){
    		for(int j=0;j<b;j++){
    			cin>>ans[i][j];
    			vis[i][j]=0;
			}
		}
		int letter[30]={0};
		int maxarea=0;
		for(int i=0;i<a;i++){
			for(int j=0;j<b;j++){
				if(!vis[i][j]){
					//vis[i][j]=1;
					maxarea=max(++letter[ans[i][j]-'a'],maxarea);
					dfs(i,j);
				}
			}
		}
		//for(int i=0;i<30;i++){
          //  cout<<letter[i]<<"  "; 
		   //  }
		printf( "World #%d\n", k );
		for(int i=maxarea;i>0;i--){
			for(int j=0;j<30;j++){
				if(letter[j]==i)cout<<char('a'+j)<<": "<<letter[j]<<endl;
			}
		}
		
		
	}
}
