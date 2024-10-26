#include <iostream>
#include <string>
using namespace std;

int main() {
    string name;
    int age;
    string department;
    string university;
    
    cout << "Enter your name: ";
    getline(cin >> ws, name);

    cout << "Enter your age: ";
    cin >> age;
    
    cout << "Enter your department: ";
    getline(cin >> ws, department);  // Clear newline before getline
    
    cout << "Enter your university: ";
    getline(cin >> ws, university);
    
    cout << "\n";
    cout << "==========================\n";
    cout << "YOUR BIO DATA\n";
    cout << "==========================\n";
    cout << "My name is " << name << ". I am " << age << " years old. I am from the " << department << " department at " << university << " university.\n";
    
    return 0;
}
