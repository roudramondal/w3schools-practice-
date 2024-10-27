#include<bits/stdc++.h>
using namespace std;
int main ()
{
  int t;
  cin >> t;
  while(t--)
  {
    int n;
    cin>>n;
    int sum_digit = 0;
    while(n>0)
    {
      int last_digit = n%10;
      sum_digit += last_digit;
      n=n/10;
    }
    cout<<sum_digit<<endl;

  }
  return 0;
}