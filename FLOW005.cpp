#include <iostream>
using namespace std;

int main() {
    long int t,num,s,i;
    cin>>t;
    int a[]={100,50,10,5,2,1};
	while(t--){
	    cin>>num;
	    s=0;
	for(i=0;i<=5;i++){
	    if(num>=a[i]){
	        s=s+(num/a[i]);
	        num=num-(num/a[i])*a[i];
	    }
	}
	cout<<s<<endl;
	}
	return 0;
}