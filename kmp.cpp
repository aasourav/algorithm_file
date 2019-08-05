#include <iostream>
using namespace std;
int f[100000];

bool checking_substring(string a, string a1){
	int i=0 ;
	int j=0;
	int m=a.size();
	int n=a1.size();
	
	while(true){
		if(i==m)
			return false;
		if(a[i]==a1[j]){
			i++;
			j++;
			if(j==n)
				return true;
		}
		else{
			if(j==0)
				i++;
			else
				j=f[j];
		}
	}
}
void failure(string a){
	int b = a.size();
	f[0]=f[1]=0;
	
	for(int i=2 ; i<b ; i++){
		int j=f[i-1];
		while(true){
			if(a[i]==a[j]){
				f[i]=j+1;
				break;
			}
			if(j==0){
				f[i]=0;
				break;
			}
			j=f[j];
		}
	}
}
int main(){
	string a;
	string a1;
	
	cin>>a>>a1;

	failure(a1);
	bool b = checking_substring(a,a1);	
	
	if(b==true)
		cout<<"YES";
	else
		cout<<"NO";	
		
		return 0;
}
