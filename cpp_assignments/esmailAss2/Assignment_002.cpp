//Esmmail, Datu Johari
//BSCS CS-1B
#include <iostream>
using namespace std;

    void studentGrade(int** array, int rows,int cols){

        double ave;
        int rowSum;
        int highest = 0;
        //display matrix
        cout <<"====Student Grade====" << endl;
        cout <<"Student" << "\t\t";
        for(int i =0;i <cols;i++){
            cout << "Subject " << i+1<< "\t";

            }
            cout << "Average";
            cout <<endl;
        
        for(int i = 0 ; i < rows; i++){
            rowSum = 0;
            cout << "Student " << i+1 <<"\t";
            for(int j=0;j<cols;j++){
                cout <<array[i][j] << "\t\t";
                rowSum += array[i][j];
            }
            ave = (double)rowSum / (double)cols;
            cout <<ave<< "\t";
            cout <<endl;
        }
        highest = array[0][0];
        for(int i = 0; i < rows; i++){
            for(int j = 0; j < cols; j++){
                if(array[i][j] > highest){
                    highest = array[i][j];
                }
            }
        }
        cout << endl;
        cout << "Highest Grade: " << highest << endl;

    }
    int main(){

        int rows, cols;

        cout << "How many Students? ";
        cin>>rows;

        cout << "How many Subjects? ";
        cin>>cols;

        int** arr = new int *[rows];
        for(int i =0; i < rows;i++){
            arr[i] = new int [cols];
        }
        //get elements
        for(int i = 0; i < rows; i++){
            for(int j = 0; j < cols; j++){
                cout << "Student " << i << " Subject " << j <<": ";
                cin >> arr[i][j];
            }
        }
        studentGrade(arr, rows,cols);

        for(int i =0; i < rows; i++){
            delete [] arr[i];
        }
        delete[] arr;

        return 0;
    }