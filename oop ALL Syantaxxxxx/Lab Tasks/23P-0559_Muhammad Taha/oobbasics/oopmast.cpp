#include<iostream>
using namespace std;

class Alpha
{
       public:
       void display{
       cout<<"VS code is Working";}
};
int main(void)
{
    Alpha obj1,obj2;
    obj1.display; //calling the function using dot operator
    //obj2.display();  // calling the function without using dot operator which will give an error because we have made it private
    return 0;
}