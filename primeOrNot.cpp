#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout<<"Enter a natural number: ";
    cin>>n;
    bool prime = true;
    for(int i = 2; i*i<=n; i++)
    {
        if(n%i==0)
        {
            prime = false;
            break;
        }
    }

    if(prime) cout<<n<<" is prime\n";
    else cout<<n<<" is not prime\n";

    return 0;
}