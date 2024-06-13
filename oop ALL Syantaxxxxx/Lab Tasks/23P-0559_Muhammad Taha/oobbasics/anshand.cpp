#include<iostream>
#include<string>

using namespace std;

class Employee {
    int id;
    string name;
    string title;
    int hours;
    int rate;
public:
	Employee()
	{
		
	}
    Employee(int id, const string& name, const string& title, int hours, int rate) {
        this->id = id;
        this->name = name;
        this->title = title;
        this->hours = hours;
        this->rate = rate;
    }
    
    int getid() {
        return id;
    }
    
    string getname() {
        return name;
    }
    
    string gettitle() {
        return title;
    }
    
    int gethours() {
        return hours;
    }
    
    int getrate() {
        return rate;
    }
    
    int cacl_Salary() {
        int salary;
        if(hours <= 40) {
            salary = hours * rate;
        } else {
            int overtimeHours = hours - 40;
            int overtimeRate = rate * 2;
            salary = 40 * rate + overtimeHours * overtimeRate;
        }
        return salary;
    } 
};

void display(Employee workers[], size_t sizee) {
    for(size_t i = 0; i < sizee; i++) {
        cout << "The id of the " << i + 1 << " Employee is " << workers[i].getid() << endl;
        cout << "The Name of the " << i + 1 << " Employee is " << workers[i].getname() << endl;
        cout << "The job title of the " << i + 1 << " Employee is " << workers[i].gettitle() << endl;
        cout << "The salary of the " << i + 1 << " Employee is " << workers[i].cacl_Salary() << endl; 
    }
}

int main(void) {
    size_t size;
    int id = 1;
    
    cout << "Enter the number of employees: ";
    cin >> size;
    cin.ignore();
    
    string name[size], title[size];
    int hours[size], rate[size];
    Employee emp[size];
    
    for(size_t i = 0; i < size; i++) {
        cout << "Enter the Detail for the " << id << " :" << endl;
        cout << "Enter the Name of the " << i + 1 << " Employee: ";
        getline(cin, name[i]);
        cout << "Enter the Job Title of the " << i + 1 << " Employee: ";
        getline(cin, title[i]);
        cout << "Enter the Number of Hours for week for " << i + 1 << " Employee: ";
        cin >> hours[i];
        cout << "Enter the Rate of the Salary per hour: ";
        cin >> rate[i];
        
        emp[i] = Employee(id, name[i], title[i], hours[i], rate[i]); 
        id++;
    }
    
    display(emp, size);
    
    return 0;
}

