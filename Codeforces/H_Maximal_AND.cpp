#include<bits/stdc++.h>
#define llint long long int
using namespace std;

llint aman(string s){
	llint n = s.length();
	llint arr1[n];
	llint arr2[n];
	llint flips = 0;
	for(llint i=0;i<n;i++){
		if(s[i] == '0') flips++;
		arr1[i] = flips;
	} 
	flips = 0;

	for(llint i=n-1;i>=0;i--){
		if(s[i] == '1') flips++;
		arr2[i] = flips;
	} 
	llint mini = INT_MAX;
	for(llint i=1;i<n;i++){
		if(arr1[i-1] + arr2[i] < mini) mini = arr1[i-1] + arr2[i];
	}
	return mini;
}

int main(){
	string s;
	cin>>s;
	for(llint i=0;i<s.length();i++){
		if(s[i] == '7') s[i] = '1';
		else s[i] = '0';
	}
	llint ans1 = aman(s);
	for(llint i=0;i<s.length();i++){
		if(s[i] == '0') s[i] = '1';
		else s[i] = '0';
	}
	llint ans2 = aman(s);
	cout<<min(ans1,ans2)<<"\n";
}