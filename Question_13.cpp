#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    int RollNo;
    string Name;
    int Class;
    int Year;
    int TotalMarks;
};

int main()
{
    ofstream f2;
    f2.open("Question_13_output.txt");

    for (int i = 0; i < 5; i++)
    {
        Student obj;
        cout << "Roll No     : ";
        cin >> obj.RollNo;
        f2 << obj.RollNo << "  ";

        cout << "Name        : ";
        cin.ignore();
        getline(cin, obj.Name);
        f2 << obj.Name << "    ";
        
        cout << "Class       : ";
        cin >> obj.Class;

        cout << "Year        : ";
        cin >> obj.Year;

        cout << "Total Marks : ";
        cin >> obj.TotalMarks;

        f2 << obj.Class << "  " << obj.Year << "  " << obj.TotalMarks << endl;
        }

    return 0;
}