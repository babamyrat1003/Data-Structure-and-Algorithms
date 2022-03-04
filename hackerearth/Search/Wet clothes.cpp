#include <iostream>
 
using namespace std;
 
int main() {
	int numOfRains, numOfCloths, maxOutTimes, maxClothCollected = 0;
	cin >> numOfRains >> numOfCloths >> maxOutTimes;										
	int rainTimeArray[numOfRains];
	int dryTimeRequired[numOfCloths];
	for (int i= 0; i<numOfRains; i++)
	    cin >> rainTimeArray[i];
	for (int i= 0; i<numOfCloths; i++)
	    cin >> dryTimeRequired[i];
	    
	for(int i =1; i<numOfRains; i++)
	{
	    int key = rainTimeArray[i] - rainTimeArray[i-1];
	    for(int i=0; i<numOfCloths;i++)
	    {
	        if(key>= dryTimeRequired[i])
	        {
	            maxClothCollected++;
	            dryTimeRequired[i]=10001;
	        }
	    }
	    
	}
	cout << maxClothCollected;
}
