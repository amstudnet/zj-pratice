#include <iostream>  
#include <algorithm>   
using namespace std;  

int main() {  
  ios::sync_with_stdio(0);
  cin.tie(0);
  long long t,x,y,dis;
  cin>>t;
  while(t--){
  	cin>>x>>y;
  	dis=y-x;
  	long long cnt=0;
  	long long sum=0;
  	long long k=1;
  	while(sum+k*2<=dis){
  		
  		sum+=k*2;
  		k++;
  		cnt+=2;
	  }
	if(sum+k<dis)cnt+=2;
	else if(sum<dis)cnt++;
	//cout<<dis<<endl;
	//cout<<sum<<endl;
	cout<<cnt<<endl;
	//cout<<k<<endl;
	
  }
}
