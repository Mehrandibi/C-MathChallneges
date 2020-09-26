
// This program is written by Seyed Mehran Dibaji 
// The 5th challenge of the book "The Modern C++ Challenge: Sexy prime numbers below a given number".
// Monday September/08/2020. 



#include <iostream>
//#include<cmath>
using namespace std;



// floorSQRT func
int floorSQRT (int Num)
{
int floorSQRTRet;
//floor(sqrt(n));
int i=1;

while (i*i<=Num)
{
i++;
}
floorSQRTRet=i-1;


// cout<<Sn<<endl;
return floorSQRTRet; 

}


//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~``

// isPrime Func
bool isPrime (int n)
{
bool isPrimeRet=true;


//Sqrt-floor computation without CMATH
int Sn= floorSQRT(n) ;
//floor(sqrt(n));
//cout<<Sn<<" is the floorSQRT\n";
int j;
//cout<<"Starting the loop\n";
//bool flag=true;
for (j=2;j<=Sn;j++) //&& flag==true)  
{
if (n%j==0)
{
   isPrimeRet=false;
  // cout<<n<<" is a NOT a Prime bacause it is divisible by "<<j<<endl;
   break;
}
//else
//{
  // isPrimeRet=false;
 //  cout<<n<<" Checking the next number.\n";
//   cout<<j<<endl;
//}


}


return isPrimeRet;
}

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~`

//Main
int main ()
{

int L;
cout <<"Enter the limit: \n";
cin>>L;
int flag=0;
int i=8;
//int lastPrime;
for (i=8;i<L;i++)
{
  //  cout<<j<<"  "<<isPrime(j)<<endl;
    if (isPrime (i)==true)
    {
    
        if (((isPrime(i-6))==true))
        {
           
           cout<<"("<<i-6<<" , "<<i<<") is a sexy prime pair.\n";
            flag++;
        }

    }
}

if (flag==0)
{
    cout<<"No sexy prime pairs less than "<<L<<" exist.\n";
}
    return 0;
}



