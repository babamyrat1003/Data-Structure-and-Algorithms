#include <iostream>
using namespace std;

int main()
{
	string s ;
	cin>>s;
	string temp = "";
	temp += s.at(0);

	for (int i = 1; i < s.length(); i++) {
		if (!(temp.find(s.at(i)) < temp.length()))
			temp = temp + s.at(i);
	}
	cout << temp;
	return 0;
}


