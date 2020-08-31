#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Time{
	private:
	int hour,minute,second;

	public:
		void time_input()
		{


	      cout << "Hours?" << endl;
	      cin >> hour;
       	  cout << "Minutes?" << endl;
       	  cin >> minute;
	      cout << "Seconds?" << endl;
          cin >> second;

    	}

    	void time_output()
    	{
    	    cout << "the time is = " << hour <<":"<<minute<<":"<<second<<endl;
    		hour = hour*3600;
    		minute = minute*60;
            int sum = 0;
    		sum = hour + minute + second;
    		cout << "time in total seconds :" << sum<<endl;
		}
};
int main()
{
    Time clock;

    cout << "enter time :"<<endl;

    clock.time_input();
	clock.time_output();


	 return 0;


}

