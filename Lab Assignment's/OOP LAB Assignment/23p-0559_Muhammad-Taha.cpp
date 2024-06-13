#include<iostream>
#include<string>
#include<cstdlib>

using namespace std;

class BankManager;                                      //Forward Declaration of class

void incrementstatic();                               ///Declaration of IncrementFUnction

class BankAccount {
private:                                     //Private Data Member of BANK ACCOunt CLass
    int accountNumber;
    string accountHolder;
    double balance;
    friend void incrementstatic();             //Friend function declaration
    friend class BankManager;          //freind class Decaration
public:
    static int numberofAccounts;      
    //constructor
    BankAccount(string a = "", int an = 0, double bal = 0.0) {
        accountHolder = a;
        accountNumber = an;
        balance = bal;
    }

    void deposit() {            //Deposit amount member function
        double amount;
        cout << "Enter the Amount that you Want to Deposit: " << endl;
        cin >> amount;
        balance += amount;
        cout<<"Amount Deposit Sucessfully.."<<endl;
        cin.ignore();
    }

    void withdraw() {         //Withdraw amount member function
        double amount;
        do {  //DO while loop
            cout << "Enter the Amount that you want to withdraw: " << endl;
            cin >> amount;
            if (amount < balance) {
                balance -= amount;
                cout << "Amount Successfully Withdrawn: " << endl;
                cout << "The updated Balance is: " << balance << endl;
            }
            else {
                cout << "Account Doesn't have sufficient Balance " << endl;
                cout << "Enter the withdraw Amount again..." << endl;
                continue;
            }
        } while (amount > balance);
        cout<<"Amount withdraw Sucessfulyy.."<<endl;
        cin.ignore();
    }
  //Getter and setter to set and get values
    double getBalance() const { return balance; }

    void setBalance(double bal) {
        balance = bal;
    }

    int getAccountNumber() const { return accountNumber; }

    void setAccountNumber(int num) {
        accountNumber = num;
    }

    static int getTotalAccounts() { return numberofAccounts; }

    string getname() const { return accountHolder; }

    void setname(string s) {
        accountHolder = s;
    }

    void TransferFunds(BankAccount& obj, double amount) {      //Transfer funds account from one account to another
        if (balance >= amount) {
            balance += amount;
            obj.balance -= amount;
            cout << "Funds Transfer Successfully..." << endl;
        }
        else {
            cout << "Your Account Balance is not Enough " << endl;
            return;
        }
         cin.ignore();
    }
};

int BankAccount::numberofAccounts = 1;    //Static member function declaration

class BankManager {             //Bank Manager class
private:
    BankAccount* Accounts;    //Pointer to an BankAccount Class
    int size;
public:
    BankManager() {     //COnstructor
        size = 0;
        Accounts = new BankAccount[size];
    }

    ~BankManager() {    //destructor to delete an object which dynamically Allocate
        delete[] Accounts;
    }
 //create Bank Account FUnction
    void createBankAccount(BankAccount& newAccount) {
        BankAccount* temp = new BankAccount[size + 1];  //create an new object of size+1.
        

        for (int i = 0; i < size; i++) {
            temp[i] = Accounts[i];   //copy the all data of old object to new object
        }

        temp[size] = newAccount;   //store the another object or we can say new object at the last index which come as a refrence 
        delete[] Accounts;   //delete the old object which is pointed to old array

        Accounts = temp;    //point the old array to the new array so that how the the zie of the array is increase
        Accounts[size].setAccountNumber(BankAccount::numberofAccounts++);
        cout << "Enter Account Holder Name: ";     //store the data 
         cin.ignore();
       getline(cin, Accounts[size].accountHolder);
        cout << "Enter the Initial Amount that you want to deposit: ";
        double initialDeposit;
        cin >> initialDeposit;
        Accounts[size].setBalance(initialDeposit);
        cout << "Account created Successfully." << endl;
        size++;   //size of dynamic allocated array incremented
        cin.ignore();
    }
//Memeebr function to delete an account
    void deleteAccount(BankAccount& deleteAccount) {
        int check, hold = -1;
        bool con = 1;
    //delete account is done by account number
        do { //searching for weather the account number ispresent in the array  
            for (int i = 0; i < size; i++) {
                if (deleteAccount.getAccountNumber() == Accounts[i].getAccountNumber()) {
                    hold = i;   //in hoold we store the index on which the object of aacount is store on dynamically alloacted objects array
                    con = 0;
                    break;
                }
            }
            if (con==0) {
                break;
            }

            if (hold == -1) {
                cout << "Account not Found.." << endl;
                cout << "please Enter account Number Again " << endl;
                continue;
            }
        } while (1);
        for (int i = hold; i < size - 1; i++) {
            Accounts[i] = Accounts[i + 1];   
        }
        size--;    //Dyanmic allaocated object size dcreases
        cout << "Account is Successfully deleted...." << endl;
        cin.ignore();
    }
//Memeber function to find an account
    BankAccount* findAccount() {
        int check, hold = -1;

        cout << "Enter Your Account Number in that you want to perform operation " << endl;
        cin >> check;
        //check whether the account Number is True or not
        for (int i = 0; i < size; i++) {  
            if (check == Accounts[i].getAccountNumber()) {
                hold = i;
                return &Accounts[hold];  //if the Account is found in the objects than its return its object other wise null
            }
        }
        if (hold == -1) {
            return NULL;
        }
    }
//memeber function to display all the detail
    void displayall() {
        for (int i = 0; i < size; i++) {
            cout << "Account Number :  " << Accounts[i].getAccountNumber() << endl;
            cout << "Account Holder Name: " << Accounts[i].getname() << endl;
            cout << "Account Balance: " << Accounts[i].getBalance() << endl;
            cout << endl;
            
        }
        
    }
};
//function to increment the 
void incrementstatic() {
    BankAccount::numberofAccounts++;
}

int main(void) {
    int a, b, d;

    BankManager manager;    //Declared the object of Bank Manager class
//Menu driven
    do {
        cout << "Press 1: If You are Manager." << endl;
        cout << "Press 2: If you are Account Holder." << endl;
        cout << "Press 3: For exit the Program" << endl;
        cin >> a;

        if (a == 1) {
    do {
        cout << "Press 1: To Create an Account." << endl;
        cout << "Press 2: To Delete an Account." << endl;
        cout << "Press 3: To find a BankAccount and see its Detail." << endl;
        cout << "Press 4: To Check Total Bank Accounts in Your Bank." << endl;
        cout << "Press 5: To Go Back to Previous Menu." << endl;
        cin >> b;
       cin.ignore();
        if (b == 1) {
            BankAccount newAccount;   //new object of bankAccount created
            manager.createBankAccount(newAccount);    //pass it to as parameter to create new account
             cout<<"Press any key to Continue...."<<endl;
            getchar();
           
           system("cls");
          cout<<endl;
        }
        else if (b == 2) {
        //	cin.ignore();
            manager.deleteAccount(*manager.findAccount());   //pass find account as pointer to delete account t delte and account
            cout<<"Press any key to Continue...."<<endl;
            getchar();
            system("cls");
        }
        else if (b == 3) {
            BankAccount* ptr = manager.findAccount();   //pointer to an object and find account to display the infomration os specific account
            if (ptr == NULL) {
                cout << "Account not found." << endl;
            } else {
               //display
                 cout << "Account Details:" << endl;
                cout << "Account Number: " << ptr->getAccountNumber() << endl;
                cout << "Account Holder Name: " << ptr->getname() << endl;
                cout << "Account Balance: " << ptr->getBalance() << endl;
            }
        }
        else if (b == 4) {
           // cout << "Total Bank Accounts: " << BankAccount::getTotalAccounts() << endl;
           
            manager.displayall(); //display all the accounts that are present in the bank database
        }
        else if (b == 5) {
            break;
        }
        else {
            cout << "Invalid choice. Please enter a number between 1 and 5." << endl;
            continue;
        }
    } while (1);
}
else if (a == 2) {
    do {
        // system("cls");
        cout << "Press 1: TO Add Deposit Balance" << endl;
        cout << "Press 2: To Withdraw Amount" << endl;
        cout << "Press 3: TO CheckTotal Balance" << endl;
        cout << "Press 4: TO Transfer Funds" << endl;
        cout << "Press 5: To Go Back" << endl; // Added option to go back
        cin >> d;
        cin.ignore();
        BankAccount *ptr = new BankAccount;   //dyanmically allocated new object

        if(d == 1) {  
            ptr = manager.findAccount();   //find the account by account number and depsoit the amount in it
            if(ptr == NULL) {
                cout << "The Bank Account is Not Found." << endl;
                cout<<"Press any key to Continue...."<<endl;
                getchar();
                system("cls");
                continue;
            } else {
                ptr->deposit();  //deposit
                cout<<"Press any key to Continue...."<<endl;
                getchar();
                system("cls");
                continue;
            }
        } else if (d == 2) {    
            ptr = manager.findAccount();   //find the account by account number and withdraw the amount in it
            cin.ignore();
            if(ptr == NULL) {    
                cout << "The Bank Account is Not Found." << endl;
                cout<<"Press any key to Continue...."<<endl;
                getchar();
                system("cls");
                continue;
            } else {
                ptr->withdraw();  //withdraw
                cout<<"Press any key to Continue...."<<endl;
                getchar();
                system("cls");
                continue;
            }
        } else if (d == 3) {  //cin.ignore();
            ptr = manager.findAccount();   //find the account and then print its balance
            if(ptr == NULL) {
                cout << "The Bank Account is Not Found." << endl;
                cout<<"Press any key to Continue...."<<endl;
                getchar();
                cout<<endl;
                continue;
            } else {
                cout << "The Balance of that Account is: " << ptr->getBalance() << endl;  //balance
                cout<<"Press any key to Continue...."<<endl;
                getchar();
                cout<<endl;
                continue;
            }
        } else if(d == 4) {
           // cin.ignore();
            cout << "Sender Account Number " << endl;
            ptr = manager.findAccount();    //find the account of the sender 
            if(ptr == NULL) {
                cout << "The Bank Account is Not Found." << endl;
                cout<<"Press any key to Continue...."<<endl;
                getchar();
                continue;
            } else {
                cout << "Enter the Amount that You want to send" << endl;
                int am;
                cin >> am;
                cin.ignore();
                cout << "Receiver Account Number: " << endl;
                BankAccount *ptr2 = new BankAccount;   //dynamcially object find the account of reciever
                ptr2 = manager.findAccount();
                
                if(ptr2 == NULL) {
                    cout << "The Bank Account is Not Found." << endl;
                    cout<<"Press any key to Continue...."<<endl;
                    getchar();
                    cout<<endl;
                    continue;
                } else {
                    ptr2->TransferFunds(*ptr, am);  //trasfer funds by pass object by pointer and amount in it
                   // cin.ignore();
                    cout<<"Press any key to Continue...."<<endl;
                    getchar();
                    cout<<endl;
                    continue;
                    delete ptr2;
                }
            }
        } else if (d == 5) { // Go back option
            break; // Exit the loop to go back
        }
        delete ptr;
    } while (true);
}

 else if (a == 3) {
            // Return to Main Screen
            break; // Exit the main loop
        } else {
            cout << "Invalid choice. Please enter either 1, 2, or 3." << endl;
        }
     } while (true); 

        return 0;}
      
