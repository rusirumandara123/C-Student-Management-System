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
    cout<< "Enter Student ID (positive integer):";
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

    cout<<"\t ---Student list--- \n";
    
    while(file>>st.id>>st.name>>st.age){
        cout<<"ID: "<<st.id<<" | Name:"<<st.name<<" |Age:"<<st.age<<endl;
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

// delete student data

void deleteStudent(){
   int deletId;
    cout<<"Enter student ID to delete: ";
    cin>>deletId;

    ifstream file("student.txt");
    ofstream temp("temp.txt");
    student st;

    bool found = false;

    while(file>>st.id>>st.name>>st.age){
        if(st.id == deletId){
            found = true;
            continue; // Skip writing this student to temp file
        }
        temp<<st.id<<" "<<st.name<<" "<<st.age<<endl; // Write other students to temp file

    }
    file.close();
    temp.close();

    remove("student.txt"); // Delete original file
    rename("temp.txt", "student.txt"); // Rename temp file to original file name

    if(found){
        cout<<"Student deleted successfully!"<<endl;
    } else {
        cout<<"Student not found!"<<endl;
    }

}


//Menu
int main(){

    int choice;

    do{

    cout<<"Welcome to Student Management System"<<endl;
    cout<<"1. Add Student"<<endl;
    cout<<"2. View Student"<<endl;
    cout<<"3. Search Student"<<endl;
    cout<<"4. Delete Student"<<endl;
    cout<<"5. Exit"<<endl;
    cout<<"Enter your choice: ";
    cin>>choice;

    switch(choice){

        case 1:

        addStudent();
        break;

        case 2:;
        viewStudent();
        break;

        case 3:
        searchStudent();
        break;

        case 4:
        deleteStudent();
        break;

        case 5:
        cout<<"Exiting the program. Goodbye!"<<endl;
        break;

        default:
        cout<<"Invalid choice!"<<endl;





      }
    } while(choice != 5);

    return 0;
}