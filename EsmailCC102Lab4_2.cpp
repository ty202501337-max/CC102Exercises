// EsmailCC102Lab4_2.cpp
#include <iostream>
#include <cstdlib>
using namespace std;

int main(){

    int rows = 5;
    int cols = 4;
    char again;

    do{
    int** arr = new int *[rows];
    for(int i = 0; i < rows;i++){
        arr[i]=new int [cols];
    }
    //initialize to 0
    for(int i = 0; i < rows;i++){
        for (int j =0; j < cols;j++){
            arr[i][j] = 0;
        }
    }

    char more;
    
    do{
        system("cls");
        int salesperson, product;
        double amount;
        
        while(true){
        
        cout << "Salesperson (1-4): ";
        cin >> salesperson;
        if( salesperson >= 1 && salesperson <= cols){
            break;
        }
        cout<<"Invalid, Try Again [1-4]: " << endl;
    }
        while(true){
       
        cout << "Product (1-5): ";
        cin >> product;
        if(product >=1 && product <= rows){
            break;
        }
         cout<<"Invalid, Try Again [1-5]: " << endl;
    }
        cout << "Amount: ";
        cin >> amount;
        
        arr[product-1][salesperson-1] += amount;
        
        cout << "More sales? [y/n]: ";
        cin >> more;
        
    } while(tolower(more) == 'y');

    //Header
    cout << "\t\t\t\t\tSalesperson" << endl;

    cout<<"Product\t\t\t";
    for(int i = 0; i < cols;i++){
        cout << i+1 << "\t\t";
    } 
        cout <<"Total";
        cout<<endl;
    
    for (int i = 0; i < rows; i++){
        int rowSum = 0;
        cout <<i+1 << "\t\t\t";
    for (int j = 0; j < cols; j++){
        cout <<arr[i][j]<<"\t\t";
        rowSum += arr[i][j];
    }
        cout<<rowSum;
        cout<<endl;
    }
    //footer
    cout<<"Total\t\t\t";

    int totalSum = 0;
    
    for(int j = 0; j < cols; j++){
        int colSum = 0;
        for(int i = 0;i < rows;i++){
            colSum += arr[i][j];
        }

        cout<<colSum <<"\t\t";
        totalSum += colSum;

    }
        
        cout <<totalSum << endl;
        cout << "\n";
        for(int i = 0; i < rows; i++){
        delete[] arr[i];
        }
        delete[] arr;

        cout << "Do you want to repeat? [Y/y]: ";
        cin>>again;

}while(tolower(again)=='y');
    return 0;
}