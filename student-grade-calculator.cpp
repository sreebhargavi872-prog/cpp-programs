
#include <iostream>
using namespace std;

int main() {
    string name;
    int m1, m2, m3;
    int total;
    float average;

    cout << "Enter student name: ";
    cin >> name;

    cout << "Enter marks in 3 subjects: ";
    cin >> m1 >> m2 >> m3;

    total = m1 + m2 + m3;
    average = total / 3.0;

    cout << "\nStudent Name: " << name << endl;
    cout << "Total Marks: " << total << endl;
    cout << "Average: " << average << endl;

    if (average >= 90)
        cout << "Grade: A";
    else if (average >= 75)
        cout << "Grade: B";
    else if (average >= 50)
        cout << "Grade: C";
    else
        cout << "Grade: D";

    return 0;
}
