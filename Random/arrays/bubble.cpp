#include<bits/stdc++.h>
using namespace std;
int main()
{
   int temp,n,i,j;
   int a[]={1,33,5,34,6};
   for(i=0;i<5;i++)
   {
      for(j=i+1;j<5;j++)
      {
          if(a[j]>a[j+1])
          {
              temp=a[j];
              a[j]=a[j+1];
              a[j+1]=temp;
          }
      }
   }
   cout<<"the bubble sort array is ";
   for(i=0;i<5;i++)
   {
       cout<<endl<<a[i];
   }
   return 0;
}