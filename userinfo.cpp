// Now we want to ask the users  name and age 

#include<iostream>


#include <string>
using namespace std;
int main()
{
    string name = "";
    cout << "What is your name?" << endl;
    
    getline(cin,name);
    
    cout << "Hello World!" << name << endl;
    
    int age = 0;
    cout << "How old are you?";
    cin >> age;
    cout<<"Oh so you are " << age << "years old";
    
    return 0;
