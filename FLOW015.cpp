#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
	    int year;
	    cin >> year;
        int y =(year - 1);

        int ly = (y / 4) - (y / 100) + (y / 400);

        int day = (y + ly) % 7;
 
        switch(day){
            case 0: cout << "monday" << endl;
                    break;
            case 1: cout << "tuesday" << endl;
                    break;
            case 2: cout << "wednesday" << endl;
                    break;
            case 3: cout << "thursday" << endl;
                    break;
            case 4: cout << "friday" << endl;
                    break;
            case 5: cout << "saturday" << endl;
                    break;
            case 6: cout << "sunday" << endl;;
                    break;
        }
	}
	return 0;
}
