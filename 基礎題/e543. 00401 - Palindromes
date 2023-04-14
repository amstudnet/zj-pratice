#include <iostream>
#include <string>
#include <map>
using namespace std;

bool p(string input) {
	int half = (input.size() - 1) >> 1;
	for (int i = 0; i <= half; ++i)
		if (input[i] != input[input.size() - i - 1])
			return false;
	return true;
}
bool reverse(string input){
	int half = (input.size()-1)>>1;
	for(int i=0;i<=half;i++){
		if(input[i]=='A'&&input[input.size()-i-1]!='A')return false;
		//else if(input[i]=="A"&&input[input.size()-i-1]!="A")return false;
		else if(input[i]=='E'&&input[input.size()-i-1]!='3')return false;
		else if(input[i]=='H'&&input[input.size()-i-1]!='H')return false;
		else if(input[i]=='I'&&input[input.size()-i-1]!='I')return false;
		else if(input[i]=='J'&&input[input.size()-i-1]!='L')return false;
		else if(input[i]=='L'&&input[input.size()-i-1]!='J')return false;
		else if(input[i]=='M'&&input[input.size()-i-1]!='M')return false;
		else if(input[i]=='O'&&input[input.size()-i-1]!='O')return false;
		else if(input[i]=='S'&&input[input.size()-i-1]!='2')return false;
		else if(input[i]=='T'&&input[input.size()-i-1]!='T')return false;
		else if(input[i]=='U'&&input[input.size()-i-1]!='U')return false;
		else if(input[i]=='V'&&input[input.size()-i-1]!='V')return false;
		else if(input[i]=='W'&&input[input.size()-i-1]!='W')return false;
		else if(input[i]=='X'&&input[input.size()-i-1]!='X')return false;
		else if(input[i]=='Y'&&input[input.size()-i-1]!='Y')return false;
		else if(input[i]=='Z'&&input[input.size()-i-1]!='5')return false;
		else if(input[i]=='1'&&input[input.size()-i-1]!='1')return false;
		else if(input[i]=='2'&&input[input.size()-i-1]!='S')return false;
		else if(input[i]=='3'&&input[input.size()-i-1]!='E')return false;
		else if(input[i]=='5'&&input[input.size()-i-1]!='Z')return false;
		else if(input[i]=='8'&&input[input.size()-i-1]!='8')return false;

	}
	return true;
}

int main() {
map<string , bool>vis;
string s;
while(cin>>s){
  if(p(s)&&reverse(s)){
  	printf("%s -- is a mirrored palindrome.\n",s.c_str());
  }
  else if (!p(s)&&reverse(s)){
  	printf("%s -- is a mirrored string.\n",s.c_str());
  }
  else if (p(s)&&!reverse(s)){
  	printf("%s -- is a regular palindrome.\n",s.c_str());
  }
  else{
  	printf("%s -- is not a palindrome.\n",s.c_str());
  }
  
 
}
}
