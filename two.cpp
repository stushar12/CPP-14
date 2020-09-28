#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n=5;
   vector<int> v;
   int k=3;
   for(int i=1;i<=n;i++)
    {
        v.push_back(i);
    }
   int count=1;
   auto itr1=v.begin();
   while(v.size()!=1)
   {
       if( next(itr1)!=v.end())
       {    
           if(count==k)
           {
           v.erase(itr1);
           count=1;
           for(int i:v)
           {
               cout<<i<<" ";
           }
           cout<<"\n";
       }
       else
       {
           count++;
           itr1++;
       }
       }
        if(next(itr1)==v.end() && v.size()!=1)
        {  
            if(count==k)
            {
           v.erase(itr1);
           count=1;
           for(int i:v)
           {
               cout<<i<<" ";
           }
           cout<<"\n";
            }
            else
            {
            count++;
            }
            itr1=v.begin();
        }
   }

}