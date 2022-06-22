#include <bits/stdc++.h>

using namespace std;


 

int main() {

    long int n, t, x, last, max = -10000000, sum;

    cin >> n;

    long int A[n+1];

    for(int i=1; i<=n; i++){

        cin >> t;

        A[i] = t+A[i-1];

    }

    for(int i=0; i<n; i++){

        x = floor((-1 + sqrt(1 + 8*(n-i))) / 2);     // Using sum of A.P to find the last term of the A.P(1+2+3+4+...)

        last = x * (1 + x) / 2;     // Last element of the array to add for the sum

        sum = A[i+last]-A[i];

        if(sum > max)

            max = sum;

    }

    cout << max;

}
