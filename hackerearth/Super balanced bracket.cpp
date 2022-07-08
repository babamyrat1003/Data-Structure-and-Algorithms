#include <iostream>
using namespace std;
int main() {
    int num;
    cin >> num;     
    
	while(num--)
    {
        string s;
        int cnt=0;
        cin>>s;
        
        for(int i=0;i<s.size()/2;i++)
        {
            if(s[i]=='(') cnt++;
        }
        cout<<2*cnt<<endl;  
	}
}
