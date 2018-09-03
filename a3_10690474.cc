#include <iostream>

using namespace std;

int main() {
    int mark;
    string grade;

    cout << "Enter your mark" << endl;
    cin >> mark;

    if(mark >= 80 && mark <= 100)
    {
        grade = "A";
    } else if(mark >= 75 && mark <= 79)
    {
        grade = "B+";
    } else if(mark >= 70 && mark <= 74)
    {
        grade = "B";
    } else if(mark >= 65 && mark <= 69)
    {
        grade = "C+";
    } else if(mark >= 60 && mark <= 64)
    {
        grade = "C";
    } else if(mark >= 55 && mark <= 59)
    {
        grade = "D+";
    } else if(mark >= 50 && mark <= 54)
    {
        grade = "D";
    } else if(mark >= 45 && mark <= 49)
    {
        grade = "E";
    } else if(mark <= 44 && mark >= 0)
    {
        grade = "F";
    } else
    {
        cout << "Your mark has to be between 0 and 100" << endl;
    }

    cout << "Your Grade: " << grade << endl;
    return 0;
}
