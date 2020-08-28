#include<bits/stdc++.h>
using namespace std;
int main()
{
     int i,n,value,arr[]={1,23,32,4,5,6};
     cout<<"enter the number to be searched for ";
     cin>>n;
     value =0;
     for(i=0;i<6;i++)
     {
          if(n==arr[i])
          {
               cout<<"item found at index"<<value;
          } 
          value++; 
     }
     return 0;

}