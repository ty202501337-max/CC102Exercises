// EsmailCC102Lab4_1.cpp
#include <iostream>
using namespace std;

int main(){

    int studentRow, quizCol;
    double ave;

    cout << "Number of Students: ";
    cin>>studentRow;
    cout<<"Number of Quizzes: ";
    cin>>quizCol;


    //ROW AND COLUMN
    int** arr = new int *[studentRow];
    for (int i = 0; i < studentRow; i++){
        arr[i] = new int[quizCol];
    }

    // 
    for (int i = 0; i < studentRow; i++){
        for(int j = 0; j < quizCol; j++){
            cout << "Student [" << i << "]: ";
            cin>>arr[i][j];
        }
    }
    //HEADER
    cout << "Student    ";
    for(int i = 0; i < quizCol; i++){
        cout << "Q" << i+1 << "      ";
    }   
        cout <<"      Average";
        cout << endl;

    //OUTPUT OF Sum && Ave of Each Student
    for(int i =  0; i < studentRow; i++){
        int sum = 0;
        cout <<i+1 << "\t";
        for(int j = 0; j < quizCol; j++){
            cout<<arr[i][j] <<"         ";
            sum += arr[i][j];
        }
        ave = (double)sum / quizCol;
        cout << ave;
        cout<<endl;
    }
    









    return 0;
}