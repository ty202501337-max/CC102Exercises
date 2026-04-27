//Esmail, Datu Johari I.
//BSCS 1B
#include <iostream>
#include <fstream>

using namespace std;

    // if prime 
    bool isPrime(int num){
    for(int i = 2; i < num; i++){
        if(num % i == 0){
            return false;
        }
    }
    return true; 
}

    //counting the prime
   int countPrime(){
    fstream file;
    int num, count = 0;
    file.open("NUMS.TXT", ios::in);
    if(file.is_open()){
        while(file >> num){
            if(isPrime(num)){ 
                count++;
            }
        }
        file.close();
    }
    return count;
}

int main(){

    cout << "How many prime numbers: " << countPrime();

    return 0;
}