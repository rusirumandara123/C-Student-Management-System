#include<iostream>
#include<fstream>
#include<vector>
using namespace std;


struct student{
    int id;
    string name;
    int age;
};

//save student files

void savestudent(student st){
    ofstream file("student.txt", ios::app);
    file<<st.id<<" "<<st.name<<" "<<st.age<<endl;
    file.close();
}



//Menu
int main(){

    int choice;

    cout<<"Welcome to Student Management System"<<endl;
    cout<<"1. Add Student"<<endl;
    cout<<"2. View Student"<<endl;
    cout<<"3. Search Student"<<endl;
    cout<<"Enter your choice: ";
    cin>>choice;

    


    return 0;
}