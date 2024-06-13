#include<iostream>
using namespace std;
int main(void)
{
      // int num1;
       int i,j;
       int sum=0;
       int count = 0;

       for(i=1;i<=500;i++)
       {  
        for (j = 1; j<=500; j++)
        {
            if(i%j==0)
            {
                if(i==j)
                {
                    break;
                }
                sum=sum+j;
                
                
                }
         
        }

        if(sum==i)
            {

               cout<<"The Perfect Numbers are"<<sum<<endl;
            }

            
                sum=0;
            
        


       // cout<<"The Perfect Numbers are"<<i;

        

       


       }
       
 

return 0;
}