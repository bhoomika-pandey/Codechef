#include<bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	char num[7];
	cin>>t;
	while(t--)
	{
        int sum=0;
	    cin>>num;
        int len = strlen(num);
        for(int i=0;i<len;i++)
        {
         sum = sum + (num[i] - '0');
        }
        cout<<sum<<endl;
	}
	return 0;
}
