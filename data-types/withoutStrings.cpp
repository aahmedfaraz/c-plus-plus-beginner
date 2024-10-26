#include <iostream>
using namespace std;

int main() {
    char name;
    int age;
    char department;
    char university;
    
    cout << "Enter your name: ";
    cin >> name;

    cout << "Enter your age: ";
    cin >> age;
    
    cout << "Enter your department: ";
    cin >> department;
    
    cout << "Enter your university: ";
    cin >> university;
    
    cout << "\n";
    cout << "==========================\n";
    cout << "YOUR BIO DATA\n";
    cout << "==========================\n";
    cout << "My name is " << name << ", I am " << age << " years old, I am from the " << department << " department at " << university << " university.\n";
    
    return 0;
}
