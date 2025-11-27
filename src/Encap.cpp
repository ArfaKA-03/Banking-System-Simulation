#include <iostream>
#include <string>
using namespace std;
class Student{
    int age;
    string name;
    public:
        void setName(string n){
            name = n;
        }
        string getName(){
            return name;
        }
        void setAge(int a){
            if(a > 0)
                age = a;
            else
                cout<<"Invalid"<<endl;
        }
        int getAge(){
            return age;
        }
        void showDetails(){
            cout<<"Name "<<name<<" is "<<age<<" old "<<endl;
        }
};
int main(){
    Student s;
    s.setAge(50);
    s.setName("rose"); 
    s.getAge();
    s.getName();
    
    s.showDetails();

    return 0;
}