#include <iostream>
using namespace std;
int main() 
{
  long long  int i = 1, u = 1, sum = 0,c,n;
  cout << "Enter N:";
  cin>>n;
  c=0;
  while (c=n){
  while (i <= 10000000) 
  {
    while (u <= 1000000) 
    {
      if (u < i) 
      {
        if (i % u == 0)
          sum = sum + u;
      }
      u++;
    }
    if (sum == i) {
      cout << i << "  " << "\n";
      c++;
    }
    i++;
    u = 1;
    sum = 0;
  }
}
}
