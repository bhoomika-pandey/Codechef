#include<bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
    cin>>t;
	while(t--)
	{
        long int Q,A;
        long double total;
	    cin>>Q>>A;
        total=Q*A;
        if(Q>1000)
        {
           total=total-total/10;
        }
        printf("%0.6Lf\n",total);
	}
	return 0;
}
