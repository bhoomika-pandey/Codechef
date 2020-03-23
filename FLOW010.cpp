#include<bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
    cin>>t;
	while(t--)
	{
        char str;
        cin>>str;
        if(str=='B'||str=='b')
           cout<<"BattleShip"<<endl;
        else if(str=='C'||str=='c')
           cout<<"Cruiser"<<endl;
        else if(str=='D'||str=='d')
           cout<<"Destroyer"<<endl;
        else if(str=='F'||str=='f')
           cout<<"Frigate"<<endl;
        
	}
	return 0;
}
/*  BattleShip
	Cruiser
	Destroyer
	Frigate*/