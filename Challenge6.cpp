
// This program is written by Seyed Mehran Dibaji 
// The 6th challenge of the book "The Modern C++ Challenge: Abundant numbers- with their abundance- less a given number".
// Tuesday September/08/2020. 



#include <iostream>
//#include<cmath>
using namespace std;



//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~``

// isAbundant Func
void isAbundant (int n, bool &isAbundantRet, int &abundance)
{

int j;
int sigmaN=0;


for (j=1;j<n;j++) //&& flag==true)  
{
    if (n%j==0)
    {
  //      isProperDivisorRet=true;
        sigmaN=sigmaN+j;
    }

}
if (sigmaN>n)
{
    isAbundantRet=true;
    abundance=sigmaN-n;
}

}
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~`



 int main()

{

int x;
cout<<"Enter a number:\n";
cin>>x;
bool isAbundantRet {false};
int abundance{0};
int flag {0};
int i=1;
for (i==1;i<=x;i++)
{
    isAbundant(i,isAbundantRet,abundance);
   if (isAbundantRet==true)
   {
       cout<<i<<" is a abundant number with abundace of "<<abundance<<'\n';
        ++flag;
        isAbundantRet=false;
   }
}


    cout<<"Conclusion: "<<flag<< " abundant numbers exist(s) below "<< x<<'\n';


    return 0;
}

