#include <iostream>  
using namespace std;  
int main()  
{  
  int x, y, z=0, Nb=0;  
  cout << "Enter Number to check: ";  
  cin >> x;  
  z=x/2;  
  for(y = 2; y <= z; y++)  
  {  
      if(x % y == 0)  
      {  
          cout<<"No is not PrimeNumber."<<endl;  
          Nb=1;  
          break;  
      }  
  }  
  if (Nb==0)  
      cout << "Yes it is PrimeNumber."<<endl;  
  return 0;  
} 