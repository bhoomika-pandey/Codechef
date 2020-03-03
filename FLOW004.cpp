#include<bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	char num[7];
	cin>>t;
	while(t--)
	{
	    cin>>num;
        int len = strlen(num);
        int sum = (num[0] - '0') + (num[len-1] - '0');
        cout<<sum<<endl;
	}
	return 0;
}
