#include<iostream>
#include<string>
using namespace std;
string baseCase(string s1,string s2){
	string a;
	int n=std::min(s1.length(),s2.length());
	for(int i=0;i<n;i++){
		if(s1[i]==s2[i]){
			a=a+s1[i];
		}else break;
	}
	return a;
}
string commonPrefix(int left,int right,string A[100]){

	if(right-left==1) return baseCase(A[left],A[right]);
	else if(right==left) return A[left];
	else{
		int mid=(left+right)/2;
		return	baseCase(commonPrefix(left,mid,A),commonPrefix(mid+1,right,A));
	}
}
int main() {
string A[100];
int n;
cin>>n;
for(int i=0;i<n;i++){
	cin>>A[i];
};
cout<<commonPrefix(0,n-1,A);
	return 0;
}
