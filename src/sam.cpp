#include <iostream>
using namespace std;
class Student{
    public:
        int age;
        string name;
        void hi(){
            cout<<"Hi! "<<name<<" your "<<age<<" old";
        }
};
int main(){
    //obj
    Student s1;
    s1.age = 15;
    s1.name = "Melon";
    s1.hi();
}