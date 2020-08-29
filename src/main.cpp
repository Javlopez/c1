#include <iostream>
#include <vector>
using namespace std;

int main() {

    int numGrades, grade;
    double average;
    vector<int> grades;
    int total = 0;

    

    cout << "Please enter the number of grades to calculate: ";
    cin >> numGrades;

    for(int i = 1; i<numGrades+1; i++){
        cout << "Enter the grade " << i << ":";
        cin >> grade;
        grades.push_back(grade);
    }
    for (int i = 0; i < grades.size(); i++)
    {
        total += grades[i];
    }

    average = total/grades.size();
    

    cout << endl << "------------- Great Average --------" << endl;
    cout << "Num of grades: " << numGrades << endl;
    cout << "Average: " << average << endl << endl;


    return 0;
}
