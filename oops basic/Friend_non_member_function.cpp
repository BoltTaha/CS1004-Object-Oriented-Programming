// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
class Test
{
    int marks;
    friend void setmarks(Test&);
    friend int getmarks(Test&);
    
};
void setmarks(Test &t)
{
    cout<<"Enter the Number that you want to set..."<<endl;
    cin>>t.marks;
}

int getmarks(Test &t)
{
    return t.marks;
}
int main() {
   
   Test obj;
   
   setmarks(obj);
   
   cout<<"The Number you enter is "<<getmarks(obj);

    return 0;
}