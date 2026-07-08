#include<iostream>
#include<fstream>
#include<vector>
using namespace std;




struct student{
    int id;
    string name;
    int age;
};

//User name and password for login

bool registerUser(){

    string username, password;
    bool exists;

    do{

        exists = false;

        cout << "Create Username: ";
        cin >> username;

        ifstream check("user.txt");

        string u, p;

        while(check >> u >> p){

            if(u == username){

                cout << "Username already exists!" << endl;
                cout << "Please enter another username.\n\n";

                exists = true;
                break;
            }
        }

        check.close();

    }while(exists);

    cout << "Create Password: ";
    cin >> password;

    ofstream file("user.txt", ios::app);

    file << username << " " << password << endl;

    file.close();

    cout << "Registration Successful!" << endl;

    return true;
}



bool loginUser(){
    string username, password;

    cout<<"Enter Username:";
    cin>>username;

    cout<<"Enter Password:";
    cin>>password;

    ifstream file("user.txt");
    string u,p;

    while(file>>u>>p){
        if(u == username && p == password){
            file.close();
            cout<<"Login successful!"<<endl;
            return true; 
        }
    }

    file.close();

    cout<<"Invalid username or password!"<<endl;
    return false; 
}


//save student files

bool userExists(int id){
    student st;

    ifstream file("student.txt");
    while(file>>st.id>>st.name>>st.age){
        if(st.id == id){
            return true; 
        }
    }
    file.close();
    return false;    
}

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

    if(userExists(st.id)){
        cout<<"Student with ID "<<st.id<<" already exists. Please use a different ID."<<endl;
        return; 
    }

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
            continue; 
        }
        temp<<st.id<<" "<<st.name<<" "<<st.age<<endl; 

    }
    file.close();
    temp.close();

    remove("student.txt"); 
    rename("temp.txt", "student.txt"); 

    if(found){
        cout<<"Student deleted successfully!"<<endl;
    } else {
        cout<<"Student not found!"<<endl;
    }

}

void updateStudent(){
    int updateId;
    cout<<"Enter student ID to update: ";
    cin>>updateId;

    ifstream file("student.txt");
    ofstream temp("temp.txt");
    student st;

    bool found = false;

    while(file>>st.id>>st.name>>st.age){
        if(st.id == updateId){
            found = true;
            cout<<"Enter new name: ";
            cin>>st.name;
            cout<<"Enter new age: ";
            cin>>st.age;


        }
        temp<<st.id<<" "<<st.name<<" "<<st.age<<endl; 
    }

    file.close();
    temp.close();

    remove("student.txt");
    rename("temp.txt","student.txt");

    if(found){
        cout<<"Student updated successfully!"<<endl;
    } else {
        cout<<"Student not found!"<<endl;
    }
   
    

}

void totalStudents(){
    ifstream file("student.txt");
    student st;
    int count =0;

    while(file>>st.id>>st.name>>st.age){
        count++;
   }

   file.close();
   cout<<"Total number of students: "<<count<<endl;

}


//Menu
int main(){

    bool accessGranted = false;

    cout<<"1. Register User"<<endl;
    cout<<"2. Login User"<<endl;
    cout<<"0. Exit"<<endl;
    int userchoice;

    cout<<"Enter your choice: ";
    cin>>userchoice;

    if(userchoice == 1){

    registerUser();

    cout << "\nPlease login to continue.\n";

    return main();    
}
else if(userchoice == 2){

    accessGranted = loginUser();

}
else{

    return 0;

}
    

    int choice;

    do{

    cout<<"Welcome to Student Management System"<<endl;
    cout<<"1. Add Student"<<endl;
    cout<<"2. View Student"<<endl;
    cout<<"3. Search Student"<<endl;
    cout<<"4. Delete Student"<<endl;
    cout<<"5. Update Student"<<endl;
    cout<<"6. Total Students"<<endl;
    cout<<"0. Exit"<<endl;
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
        updateStudent();
        break;

        case 6:
        totalStudents();
        break;

        case 0:
        cout<<"Exiting the program. Goodbye!"<<endl;
        break;

        default:
        cout<<"Invalid choice!"<<endl;





      }
    } while(choice != 0);

    return 0;
}