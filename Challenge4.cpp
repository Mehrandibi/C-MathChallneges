
// This program is written by Seyed Mehran Dibaji 
// The 4th challenge of the book "The Modern C++ Challenge: Largest prime number less than a given number x".
// Monday September/07/2020. 



#include <iostream>
//#include<cmath>
using namespace std;



// floorSQRT func
int floorSQRT (int Num)
{
int floorSQRTRet;
//floor(sqrt(n));
int k=1;

while (k*k<Num)
{
k++;
}
floorSQRTRet=k-1;


// cout<<Sn<<endl;
return floorSQRTRet; 

}


//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~``

// isPrime Func
bool isPrime (int n)
{

bool isPrimeRet=true;
//int n;
//cout <<"Enter n:\n";
//cin>>n;

//Sqrt-floor computation without CMATH
int Sn= floorSQRT(n);
//floor(sqrt(n));
int j=2;

//bool flag=true;
for (j=2;j<=Sn;j++) //&& flag==true)  
{
if (n%j==0)
{
   isPrimeRet=false;
  // cout<<n<<" is a NOT a Prime bacuase it is divisible by "<<j<<endl;;
   break;
}

}

if (isPrimeRet==true)
{

 //   cout<<n<<" is a Prime"<<endl;
}


return isPrimeRet;
}

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~`

//Main
int main ()
{

int x;
cout <<"Enter x larger than 1: \n";
cin>>x;

int i=2;
int greatestLessThanX;
for (i=2;i<x;i++)
{
    if (isPrime (i)==true)
    {
        greatestLessThanX=i;
    }
}

cout<<"The greatest prime number less than " <<x<<" is "<<greatestLessThanX<<endl;

    return 0;
}



