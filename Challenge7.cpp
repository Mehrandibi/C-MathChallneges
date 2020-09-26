
// This program is written by Seyed Mehran Dibaji 
// The 7th challenge of the book "The Modern C++ Challenge: Amicable numbers- less than 1000000".
// Tuesday September/08/2020. 



#include <iostream>
//#include<cmath>
using namespace std;



//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~``
//Sum of Proper Divisors larger than 1

void sumProperDivisors (int &n, int &sigmaN)
{

    int j{1};
    for (j=1;j<n;j++) //&& flag==true)  
    {
        if (n%j==0)
        {
  //      isProperDivisorRet=true;
            sigmaN+=j;
        }

    
    }
       sigmaN-=n;

}



// areAmicables Func
//This is an inefficient way of coding. We could have reserved all sigmaX in an array and just iterate over the array.
//Next version would be with this approach.
void areAmicables (int &x, int &y, bool &areAmicablesOut)
{

    int n{x};
    int sigmaN{x};
    sumProperDivisors(n,sigmaN);
    int sigmaX{sigmaN}; 
    //cout<<"sigma("<<x<<") is "<<sigmaX<<'\n';

    n=y;
    sigmaN=y;
    sumProperDivisors(n,sigmaN);
    int sigmaY{sigmaN};
    //cout<<"sigma("<<y<<") is "<<sigmaY<<'\n';

    if (sigmaX==y && sigmaY==x )
    {
        cout<<"( "<<x<<" , "<<y<<" ) are amicables.\n";
        areAmicablesOut=true;

    }

}
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~`



 int main()

{


bool areAmicablesOut {false};
int abundance{0};
int countAmicables{0};  
int x=3;
const int L=1000000; 
int y=2;
for (x==3;x<=L;x++)
{
   for (y=2;y<x;y++)
    {
        areAmicables(x,y,areAmicablesOut);
       if (areAmicablesOut==true)
       {
           ++countAmicables;
           areAmicablesOut=false;
       }
   }
}
cout<<countAmicables<<" amicable pairs exit less than "<<L<<'\n';
cout<<"END\n";

    return 0;
}

