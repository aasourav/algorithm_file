#include <iostream>
#include <cmath>
using namespace std;
bool s[1000000];
void chk(int value){
	s[0]=s[1]=1;
	int p = sqrt(value);
	for(int i=4 ; i<=value ; i+=2){
		s[i]=1;
	}
	for(int i=3 ; i<=p ; i++){
		if(s[i]==0){
			for(int j=i*i ; j<=value ; j+=i){
				s[j]=1;
			}
		}
	}
}
int main(){
	int m;
	cin>>m;
	chk(m);
	for(int i=0 ; i<=m ; i++){
		if(s[i]==0)
			cout<<i<<" ";
	}
	
}
