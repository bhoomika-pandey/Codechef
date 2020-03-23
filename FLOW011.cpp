#include<bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
    cin>>t;
	while(t--)
	{
        double salary;
	    cin>>salary;
        if(salary<1500)
        {
           salary=salary+((salary*0.1)+(salary*0.9));
        }
        else
        {
           salary=salary+500+(salary*0.98); 
        }
        
        printf("%.2f\n",salary);	
        }
	return 0;
}
