#include <iostream>
#include <cstdlib>
using namespace std;

struct student{

    int studentID;
    string name;
    string course;
    int gpa;

};  

    void input(int num, student stu[]){
        int numStu;
        int temp;
        for(int i = 0; i < num; i++){
        do{
            cout << "Student ID " << i+1 << ": ";
            cin>>stu[i].studentID;
            cin.ignore();

            if(i > 0 && stu[i -1].studentID == stu[i].studentID){
                cout << "Student ID already exist, Try Again" << endl;
            
            }
        
        }while(i > 0 && stu[i - 1].studentID == stu[i].studentID);

            cout << "Name of Student: ";
            getline(cin,stu[i].name);
            cout << "Course: ";
            getline(cin,stu[i].course);
        do{
            cout << "GPA: ";
            cin>>stu[i].gpa;
            cin.ignore();
            if(stu[i].gpa < 0 || stu[i].gpa > 100){
                cout << "Invalid GPA! Enter 0-100 only!" << endl;
            }
             
        }while(stu[i].gpa < 0 || stu[i].gpa > 100);
    }
}

    void display(int num, student stu[]){

        cout<<"====Student Records====" << endl;
        cout <<"Student ID\tName\tCourse\tGPA\tAcademic Standing\n";
        for(int i = 0; i < num; i++){
            cout <<stu[i].studentID << "\t\t";
            cout <<stu[i].name << "\t";
            cout <<stu[i].course << "\t";
            cout <<stu[i].gpa << "\t";
            if(stu[i].gpa >= 90 && stu[i].gpa <= 100){
                cout <<"Excellent " << endl;
            }else if(stu[i].gpa >= 80){
                cout <<"Very Good " << endl;
            }else if(stu[i].gpa >= 70){
                cout <<"Good " <<endl;
            }else if(stu[i].gpa >= 60){
                cout <<"Passing " << endl;
            }else if(stu[i].gpa <= 59){
                cout <<"Failed " <<endl;
            }
            cout << endl;
        }
        
        
    }
    int main(){

        int num;
        char choice;
        do{
        system("cls");
        cout << "How many Student: ";
        cin>>num;
        cin.ignore();

        student stu[num];
        input(num, stu);
        display(num, stu);
        
        cout << "Do you want to repeat? [Y/y]: ";
        cin>>choice;

        }while(tolower(choice)=='y');
        return 0;
    }