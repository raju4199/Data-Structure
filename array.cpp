#include <iostream>
using namespace std;

//hold
void printArray(){

}
int main(){
    //declare 
    int number[15];
    // accesing an array
    cout << "value of 15 index" << number[14] << endl;

    // accessing out of array's size (index size 0-> (n-1))

    cout << "value of 25 index" << number[24] << endl;
    // array with given variable
    int number1[2] = {1, 2};
     int n = sizeof(number1);

    for (int i = 0; i < n; i++){
        cout << "print the value of number 1 array:" << number1[i] << endl;
        
    }

    cout << "everything will fine" << endl
         << endl;
    return 0;
}