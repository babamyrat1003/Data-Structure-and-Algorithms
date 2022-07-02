#include <iostream>
using namespace std;
int totalCircles(int L, int B)
{
    if (L > B) {

        int temp = L;
        L = B;
        B = temp;
    }
    return B / L;
}
int main() {

	int t;
	cin>>t;

	while(t--)
	{
		int a,b;
		cin>>a>>b;
		cout<<totalCircles(a,b)<<endl;
	}

}
