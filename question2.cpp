
#include<iostream>
using namespace std;
int main()
{
   int n,i,j,count,sum=0,temp;
   cout<<"enter the size of array:";
   cin>>n;
   int array[n];
   cout<<"enter the element:";
   for(i=0;i<n;i++)
   {
     cin>>array[i];
   }
   cout<<"repeting no with frequncy are:-";
       for(i=0;i<n;i++){
           count=0;
           for(j=i+1;j<n;j++){
               if(array[i]==array[j]){
                   count++;
               }
               

            }
            cout<<array[i]<<" ";
            cout<<count<<"time"<<endl;
            

       }
     
   
       
     return  0;
   
   }
