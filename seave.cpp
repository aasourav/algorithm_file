#include <iostream>
#include <cmath>
using namespace std;
bool s[1000000];
void chk(int value){
	//make marke 0 and 1 because those number aren't prime
	s[0]=s[1]=1;
	
	int p = sqrt(value);
	
	//all even number maked because they aren't prime
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
