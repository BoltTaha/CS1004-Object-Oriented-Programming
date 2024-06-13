#include<iostream>
#include<string>

using namespace std;
class BannkManager;

void incrementstatic();
class BankAccount
{   private:
    int accountNumber;
    string accountHolder;
    double balance;
 friend void incrementstatic();
 friend class BankManager;
    public:
     static int numberofAccounts;
    BankAccount(string a = "",int an = 0,double bal = 0.0)
    {
      accountHolder = a;
      accountNumber = an;
      balance = bal;
    }
    
    void deposit()
    { double amount;
    cout<<"Enter the Amount that you Want to Deposit: "<<endl;
    cin>>amount;
      balance+=amount;  
    }
    void withdraw()
    {  double amount;
    do{
       cout<<"ENter the Amount that you want to withdraw: "<<endl;
       cin>>amount;
        if(amount<balance)
        {
            balance-=amount;
            cout<<"Amount Successfully Withdraw: "<<endl;
            cout<<"The updated Balance is: "<<balance<<endl;
        }
        else{
            cout<<"Account Does'nt have sufficent Balance "<<endl; 
            cout<<"ENter the withdraw Amount again..."<<endl;  
       continue;
        }
    }while(amount>balance);
    }
    double getBalance()const{ return balance;}
   
     void setBalance(double bal)
     {
        balance=bal;
     }
    
    int getAccountNumber()const{ return accountNumber;}
    
    void setAccountNumber(int num)
    {
        accountNumber=num;
    }
    static int getTotalAccounts(){ return numberofAccounts;}

    string getname()const{ return accountHolder;}

    void setname(string s)
    {
        accountHolder=s;
    }

    void TransferFunds(BankAccount &obj,double amount)
    {  do{
        if(obj.balance>=amount)
        {
            balance+=obj.balance;
            obj.balance-=balance;
            cout<<"Funds Transfer Succesfully..."<<endl;
        }
        else{
            cout<<"Your Account Balance is not Enough "<<endl;
         continue;
        }
        
        }while(amount>obj.balance);
    }


};

int BankAccount::numberofAccounts=1;

class BankManager
{
    private:
    BankAccount *Accounts;
    int size;
    public:
     
    BankManager()
    {   size = 0;
        Accounts = new BankAccount[size];
    } 
    ~BankManager()
    {
        delete [] Accounts;
        
    }
    void createBankAccount(BankAccount &newAccount)
    {  int k=0;
     BankAccount *temp = new BankAccount[size+1];

     for(int i=0;i<size;i++)
     {
        temp[i]=Accounts[i];
     }
     temp[size] = newAccount;

     delete [] Accounts;

     Accounts=temp;
     Accounts[size].balance = BankAccount::numberofAccounts;
     cout << "Enter Account Holder Name: ";
    cin >> Accounts[size].accountHolder;
    cout << "Enter the Initial Amount that you want to deposit: ";
    double initialDeposit;
    cin >> initialDeposit;
    Accounts[size].setBalance(initialDeposit);
     cout << "Account created Successfully." << endl;
     size++;
    incrementstatic();
    }

    void deleteAccount(BankAccount &deleteAccount) 
    {
     int check, hold = -1 ; bool con = 1;
     
     do{
        cout<<"Enter Your Account Number that you Want to delete: "<<endl;
     cin>>check;
     //check whether the account Number is True or not
     for(int i = 0;i<size;i++)
     {
        if(check==Accounts[i].numberofAccounts)
        {
         hold=i;
         con=0;
         break;
        }
     }if(con==0)
     {
        break;
     }

     if(hold==-1)
     {
        cout<<"Account not Found.."<<endl;
        cout<<"please Enter account Number Again "<<endl;
        continue;

     }
     }while(con==1);

     for(int i=hold;i<size-1;i++)
     {
      Accounts[i]=Accounts[i+1];
      
     }
     size--;
      cout<<"Account is Successfully deleted...."<<endl;
    }
   BankAccount *findAccount()
   {
    int check, hold = -1 ; 
    // BankManager *temp = new BankManager [size];
     
        cout<<"Enter Your Account Number in that you want to perform operation "<<endl;
     cin>>check;
     //check whether the account Number is True or not
     for(int i = 0;i<size;i++)
     {
        if(check==Accounts[i].accountNumber)
        { hold=i;
         return &Accounts[hold];
         break;
        }
     }

     if(hold==-1)
     {
        return NULL;
     }
   } 
   void displayall()
   {  for(int i=0;i<size;i++)
   {
    cout<<"Account Number :  "<<Accounts[size].getAccountNumber()<<endl;
    cout<<"Account Holder Name: "<<Accounts[size].getname()<<endl;
    cout<<"Account Balance: "<<Accounts[size].getBalance()<<endl;

    cout<<endl;
   }}
};

void incrementstatic()
{
BankAccount::numberofAccounts++;
}
int main(void)
{   
    int a, b, c, d;
    BankAccount person;
    BankManager manager;
    BankManager *ptr = new BankManager;
    
    do
    {
        cout << "Press 1: If You are Manager." << endl;    
        cout << "Press 2: If you are Account Holder." << endl;
        cin >> a;
        
        if(a == 1)
        {  
            do
            {
                cout << "Press 1: To Create an Account." << endl;
                cout << "Press 2: To Delete an Account." << endl;
                cout << "Press 3: To find an BankAccount and see its Detail." << endl;
                cout << "Press 4: To Check Total Bank Account in Your Bank." << endl;
                cin >> b;
                cin.ignore();
                if(b == 1)
                {
                    manager.createBankAccount(person);
                    getchar();
                    continue;
                }
                else if(b == 2)
                {
                    manager.deleteAccount(person);
                    getchar();
                    system("cls");
                    continue;
                }
                else if(b == 3)
                {   
                    BankAccount *ptr = new BankAccount;
                    ptr = manager.findAccount();
                    
                    if(ptr == NULL)
                    {
                        cout << "The Bank Account is Not Found." << endl;
                        getchar();
                        system("cls");
                        continue;
                    }
                    else
                    {
                        cout << "Bank Account is Found in the Data Base." << endl;
                        cout << "Press 1: to Display the detail of that Account." << endl;
                        cout << "Press 2: to go on Main Screen." << endl;
                        cin >> c;
                        cin.ignore();
                        if(c == 1)
                        {
                            cout << "The Account Number of the Account is: " << ptr->getAccountNumber() << endl;
                            cout << "The Name of the Account Holder is: " << ptr->getname() << endl;
                            cout << "The Balance of the Bank Account is: " << ptr->getBalance() << endl;
                            cout << "Press any Key to Continue....." << endl;
                            getchar();
                            system("cls");
                            continue;
                        }
                        else if(c == 2)
                        {   
                            getchar();
                            system("cls");
                            continue;
                        }
                    }
                }
                else if(b == 4)
                {
                    cout << "There are Total Accounts " << person.getTotalAccounts() << endl;
                    cout << "The Data of Total Account is: " << endl;
                    ptr->displayall();
                    getchar();
                    system("cls");
                    continue;
                }
                else
                {
                    cout << "Invalid choice. Please enter a number between 1 and 4." << endl;
                    getchar();
                    system("cls");
                    continue;
                }
            } while(true);
        }
        else if(a == 2)
        {  
            do
            {
                cout << "Press 1: TO Add Deposit Balance: " << endl;
                cout << "Press 2: To Withdraw Amount: " << endl;
                cout << "Press 3: TO CheckTotal Balance: " << endl;
                cout << "Press 4: TO Transfer Funds: " << endl;
                cin >> d;
                cin.ignore();
                BankAccount *ptr = new BankAccount;
                
                if(d == 1)
                {  
                    ptr = manager.findAccount();
                    
                    if(ptr == NULL)
                    {
                        cout << "The Bank Account is Not Found." << endl;
                        getchar();
                        system("cls");
                        continue;
                    }
                    else
                    {
                        ptr->deposit();
                        getchar();
                        system("cls");
                        continue;
                    }
                }
                else if (d == 2)
                {
                    ptr = manager.findAccount();
                    
                    if(ptr == nullptr)
                    {
                        cout << "The Bank Account is Not Found." << endl;
                        getchar();
                        system("cls");
                        continue;
                    }
                    else
                    {
                        ptr->withdraw();
                        getchar();
                        system("cls");
                        continue;
                    }
                }
                else if (d == 3)
                {
                    ptr = manager.findAccount();
                    
                    if(ptr == NULL)
                    {
                        cout << "The Bank Account is Not Found." << endl;
                        getchar();
                        system("cls");
                        continue;
                    }
                    else
                    {
                        cout << "The Balance of that Account is: " << ptr->getBalance() << endl;
                        getchar();
                        system("cls");
                        continue;
                    }
                }
                else if(d == 4)
                {
                    ptr = manager.findAccount();
                    
                    if(ptr == NULL)
                    {
                        cout << "The Bank Account is Not Found." << endl;
                        getchar();
                        system("cls");
                        continue;
                    }
                    else
                    {
                        cout << "Sender Account Number " << endl;
                        cout << "Enter the Amount that You want to send" << endl;
                        int am;
                        cin >> am;
                        cout << "Receiver Account Number: " << endl;
                        BankAccount *ptr2 = new BankAccount;
                        ptr2 = manager.findAccount();
                        
                        if(ptr2 == nullptr)
                        {
                            cout << "The Bank Account is Not Found." << endl;
                            getchar();
                            system("cls");
                            continue;
                        }
                        else
                        {
                            ptr2->TransferFunds(*ptr, am);
                            getchar();
                            system("cls");
                            continue;
                        }
                    }
                }
                else
                {
                    cout << "Invalid choice. Please enter a number between 1 and 4." << endl;
                    getchar();
                    system("cls");
                    continue;
                }
            } while(true);
        }
        else
        {
            cout << "Invalid choice. Please enter either 1 or 2." << endl;
            getchar();
            system("cls");
            continue;
        }
    } while(true);
    
    return 0;
}
