#include <iostream>
using namespace std;

int main()
{
    int hour1, min1, hour2, min2;
    int resHour, resMin;
    
    cin >> hour1 >> min1 >> hour2 >> min2;
    if( hour1>hour2 && min2 > min1)
    {
        hour1--;
        min1 += 60;
    }
    else if(hour2 > hour1 && min1 > min2)
    {
    	hour2--;
    	min2 += 60;
    }
    resHour = hour1 - hour2;
    resMin = min1 - min2;
    cout << (resHour < 0 ? -resHour : resHour) << " " << (resMin < 0 ? -resMin : resMin);
    
    return 0;
    
}
