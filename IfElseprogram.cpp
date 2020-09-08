#include <iostream>
 
using namespace std;
 
int main()
{
   int candy;
   cout<<"Enter Your lucky number";
   cin>>candy;
   if(candy==3)
   {cout<<"----*****-----";
       cout<<"\nTake your MilkyBar\n";
       cout<<"----*****-----";
   }
   else if(candy==9)
   {cout<<"----*****-----";
       cout<<"\nTake your DairyMilk";
       cout<<"\n----*****-----";
   }
   else
   {
       cout<<"----*****-----\n";
       cout<<"Better luck Next Time\n";
       cout<<"----*****-----";
   }
}
