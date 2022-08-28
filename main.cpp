#include <iostream>
#include "Reverse.h"
#include "Truckloads.h"
#include "EfficientTruckloads.h"
using namespace std;
int main(){
cout<<"Enter a number and a string:"<<endl;
Reverse ras;
int i;
cin>>i;
string s="";
cin>>s;
cout<<ras.reverseDigit(i)<<endl;
cout<<ras.reverseString(s)<<endl;
Truckloads T;
cout<<"Enter the number of crates and the load size of truck"<<endl;
int t1;
cin>>t1;
int t2;
cin>>t2;
cout<<T.numTrucks(t1, t2)<<endl;
EfficientTruckloads H;
cout<<"Enter the number of crates and the load size of truck"<<endl;
int t3;
cin>>t3;
int t4;
cin>>t4;
cout<<H.numTrucks(t3, t4)<<endl;
return 0;
}
