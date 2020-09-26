
// This program is written by Seyed Mehran Dibaji 
// The 8th challenge of the book "The Modern C++ Challenge: Three digit Armstrong numbers (Narcistic numbers)".
// Tuesday September/11/2020. 

    #include <iostream>  
    #include<string> 
    #include<sstream> 
    using namespace std;  

    //A function that can parse 3-digit integers to the digits with sstream and to_sring. There are other -maybe simpler ways- to do it too.


    int digitParser (int &n, int &c, int &d, int &u)
    
    {   
    string str= to_string(n);  
   // cout<<"string value of integer i is :"<<str<<"\n";  



   //Third digit to a single int -conversion.


    stringstream ssC;  
    ssC<<str[0];  
   // int c; 
    ssC>>c;  
//   cout<<"The value of the string is : " << ssC<<"\n";  
 //   cout<<"Integer value of the string is : "<<c<<'\n';  


   //Second digit to a single int -conversion.
    stringstream ssD;  
    ssD<<str[1];  
  //  int d; 
    ssD>>d;  
  //  cout<<"The value of the string is : " << ssD<<"\n";  
   // cout<<"Integer value of the string is : "<<d<<'\n';  


    //First digit to a single int -conversion.
    stringstream ssU;  
    ssU<<str[2];  
   // int u; 
    ssU>>u;  
  //  cout<<"The value of the string is : " << ssU<<"\n";  
   // cout<<"Integer value of the string is : "<<u<<'\n';  


    return 0;

    }

 

    int main()  
    {  

        int c{0};
        int d{0};
        int u{0};
        int j=0;
        int i;
   for (i=100;i<1000;i++)
   {    
       c=0;
       d=0;
       u=0;

       digitParser(i,c,d,u);
       if ((c*c*c+d*d*d+u*u*u)==i)
       {
           cout <<" Another Armstrong number found: "<<i<<'\n';
           j++;
       }
   }

    cout<<" In total, "<<j<<" Armstroung numbers are found between 100 and 1000.\n";

    


   return 0;
  }  