
// This program is written by Seyed Mehran Dibaji 
// The 3rd challenge of the book "The Modern C++ Challenge: LCM of a and b".
// Monday September/07/2020. 

#include <iostream>
#include <cmath>
using namespace std;

//We compute the GCD and LCM is computed by AB=GCD*LCM

int main ()

{
    int a;
    int b;
    int A;
    int B;
    int Temp;
    cout<<"Enter a:\n";
    cin>>a;
    cout<<"Enter b:\n";
    cin>>b;
    if (a<b)
    {
        Temp=a;
        a=b;
        b=Temp;

    }

    A=a;
    B=b;
    int gcdAB;
    if (b==0)
    {
        gcdAB=a;
    }
    else
    {
        

       int r;
       r= a%b;
   


      if (r==0)
      {
        gcdAB=b;
    
       }

       else 
      {


        while (r>0)
        {   
            a=b;
            b=r;
            r= a%b;

        }

        gcdAB=b;


    }
}

cout<<gcdAB<< " is the GCD of "<<A<<" and "<<B<<".\n";
 
 
int lcmAB;
lcmAB=A*B/gcdAB;
    
cout<<lcmAB<< " is the LCM of "<<A<<" and "<<B<<".\n";


return 0;

}