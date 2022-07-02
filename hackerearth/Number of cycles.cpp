#include <iostream>
using namespace std;
int main()
{
    long n{}, q{}, ans{};

    cin >> n;

    while(n--){

        cin >> q;

        ans = q*(q-1) + 1;

        cout << ans << '\n';

    }

}
