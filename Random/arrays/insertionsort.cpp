#include<bits/stdc++.h>
#include<limits.h>
using namespace std;
int main()
{
     int i,j,temp,ptr,a[]={77,23,12,25,55,2};
       a[0]=INT_MIN;
     for(i=1;i<=6;i++)
     {
             temp=a[i];
             j=i-1;
             while(temp<a[i])
             {
                 a[j+1]=a[j];
                 j--;
             }
             a[j+1]=temp;
     }
     cout<<"sorted array is";
     for(i=1;i<=6;i++)
     {
          cout<<a[i]<<endl;
     }
     return 0;
}