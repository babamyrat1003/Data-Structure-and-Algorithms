#include <iostream>
using namespace std;
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        long long int c, n;
        cin>>c>>n;
        long int sum=(n*(n+1))/2;
        if(sum>c)
        {
            cout<<c<<endl;
        }
	       else
        {
			cout<<(c-sum)%n<<endl;
        }
    }
    return 0;

}
