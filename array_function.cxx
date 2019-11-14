#include <iostream>

using namespace std;
 
int arrSize;
 
int inputArrSize();
void inputArray(string[], string [], int[], int[], string[], string[]);
void displayArray(string [], string [], int[], int[], string[], string[]);
 
int main()
{
   string firstname [10], lastname [10], email [10], address [10];
   int age [10], contact_no[10];
   inputArray(firstname, lastname, age, contact_no, email, address);
   displayArray(firstname, lastname, age, contact_no, email, address);
 
    return 0;
}
 
int inputArrSize (){
 
    cout << "Enter array size: ";
    cin >> arrSize;
 
    return arrSize;
}
 
void inputArray(string firstname[], string lastname[], int age [], int contact_no[], string email[], string address[]){
 
inputArrSize();
    for (int i= 0; i<=arrSize-1; i++) {
        cout << "Enter Firstname: " <<i+1<<" : ";
        cin >> firstname [i];
    }
 
    for (int i= 0; i<=arrSize-1; i++) {
        cout << "Enter Lastname: " <<i+1<<" : ";
        cin >> lastname [i];
    }
    for (int i= 0; i<=arrSize-1; i++) {
        cout << "Enter age: " <<i+1<<" : ";
        cin >> age [i];
    }
 
    for (int i= 0; i<=arrSize-1; i++) {
        cout << "Enter contact number: " <<i+1<<" : ";
        cin >> contact_no [i];
    }
 
    for (int i= 0; i<=arrSize-1; i++) {
        cout << "Enter email: " <<i+1<<" : ";
        cin >> email[i];
    }
 
    for (int i= 0; i<=arrSize-1; i++) {
        cout << "Enter address: " <<i+1<<" : ";
        cin >> address[i];
    }
}
 
void displayArray(string firstname[], string lastname [], int age[], int contact_no[], string email[], string address[]){
 
system ("CLS");
    cout << "| Firstname | Lastname | Age | Contacts | Email | Address"<< endl;
    for (int i= 0; i<=arrSize-1; i++) {
    cout << "\n  " << firstname [i]<< "       |    " << lastname[i] << "       |    " << age[i] << "       |    " << contact_no[i] << "       |    " << email[i]<< "       |    " << address[i] <<endl;
 
    }
 }