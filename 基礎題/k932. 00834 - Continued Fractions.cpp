#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
	int a,b;
	while(cin>>a>>b){
		cout<<"["<<a/b<<";";
		int numa;
		int numb;
		numa=b;//19
		numb=a%b;//5
		//cout<<numa<<" "<<numb<<endl;
		vector<int>v;
	
		while(numa%numb!=0){
			
			int tmp1,tmp2;
			v.push_back(numa/numb);
			tmp1=numb;
			tmp2=numa%numb;
			numa=tmp1;
			numb=tmp2;
		
		}
		v.push_back(numa/numb);
		for(int i=0;i<v.size();i++){
			if(i!=v.size()-1)
			cout<<v[i]<<",";
			else
			cout<<v[i]<<"]";
	    }
		cout<<endl;
	}
	
	
}
