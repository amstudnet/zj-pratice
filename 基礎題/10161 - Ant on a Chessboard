#include <iostream>
#include<cmath>
using namespace std;
bool squre(long long x){
    return sqrt(x)==(int)(sqrt(x));
}
int main() {
    long long n;
    while(cin>>n){
        if(n==0)break;
        if(squre(n)){
            if(n%2==0){
                 cout<<sqrt(n)<< " "<<1<<endl;
            }
            else if(n%2==1){
                cout<<1<< " "<<sqrt(n)<<endl;
            }
        }
        else{
            long long tar = ceil(sqrt(n));
            long long x=tar;
            long long y=tar;
            if(squre(n+(tar-1))){
                cout<<tar<<" "<<tar<<endl;
                continue;
            }
            if(tar%2==1){//奇數層
               if(n<(tar*tar-(tar-1))){
                   y-=abs(n-(tar*tar-(tar-1)));
               }
               else{
                   x-=abs(n-(tar*tar-(tar-1)));
               }
            }
            else if(tar%2==0){//偶數層
               if(n<(tar*tar-(tar-1))){
                   x-=abs(n-(tar*tar-(tar-1)));
               }
               else{
                   y-=abs(n-(tar*tar-(tar-1)));
               }
               
               
                    //偶數層比 中間小動x  否則動y   奇數層 比中間小動y 否則動x
                
            }
            cout<<x<<" "<<y<<endl;
        }
    }
}
