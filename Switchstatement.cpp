#include <iostream>
using namespace std;
int main()
{
   int candy;
   cout<<"Enter Your lucky number";
   cin>>candy;
   switch(candy)
  {  case 1:
       cout<<"\nTake your MilkyBar\n";
       break;
    case 3: 
       cout<<"\nTake your DairyMilk";
       break;
    case 6:
       cout<<"\nTake your 5Star";
       break;
    case 9:
       cout<<"\nTake your Galaxy";
       break;
    default:
       cout<<"Better luck Next Time\n";
    
  }
}
