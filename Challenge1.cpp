
/* This program is written by Seyed Mehran Dibaji 
The first challenge of the book "The Modern C++ Challenge".
Monday September/07/2020. */

#include <iostream>
using namespace std;



int main ()

{
    int L;
    cout<<"Enter the limit: \n";
    cin>>L;
    // cout<<"L is "<<L<<endl;

    int i=1;
    int Sum=0;

    for (i=1; i<L; i++)
    {
        if (i%3==0 || i%5==0)
        Sum=i+Sum;

    }
cout<<" The sum is "<<Sum<<"\n";

return 0;

}