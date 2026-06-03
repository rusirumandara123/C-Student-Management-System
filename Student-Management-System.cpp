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


// Add students file

void addStudent(){
    student st;
    cout<< "Enter Student ID :";
    cin>>st.id;

    cout<< "Enter Student Name :";
    cin>>st.name;

    cout<< "Enter Student Age :";
    cin>>st.age;

    savestudent(st);
    cout<<"Student added successfully!"<<endl;
}

// student data view

void viewStudent(){
    ifstream file("student.txt");
    student st;

    cout<<"\t Student list \n";
    
    while(file>>st.id>>st.name>>st.age){
        cout<<"ID: "<<st.id<<"Name:"<<st.name<<"Age:"<<st.age<<endl;
    }
    file.close();
}


// search student data

void searchStudent(){
    int id;
    cout<<"Enter student ID to search: ";
    cin>>id;

    ifstream file("student.txt");
    student st;
    bool found = false;
    
    while(file>>st.id>>st.name>>st.age){
        if(st.id == id){
            cout<<"Found Student - "<<"ID: "<<st.id<<" Name: "<<st.name<<" Age: "<<st.age<<endl;
            found = true;
            break;
        }
    }
    if(!found){
        cout<<"Student not found!"<<endl;
    }
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