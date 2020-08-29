#include <iostream>

using namespace std;

int main() {

    int grade1, grade2, grade3, grade4, grade5;
    float average;
    const int numGrades = 5;

    cout << "Enter a grade 1: ";
    cin >> grade1;

    cout << "Enter a grade 2: ";
    cin >> grade2;

    cout << "Enter a grade 3: ";
    cin >> grade3;

    cout << "Enter a grade 4: ";
    cin >> grade4;

    cout << "Enter a grade 5: ";
    cin >> grade5;    

    average = (grade1+grade2+grade3+grade4+grade5)/numGrades;

    printf("The average is %.2f", average);
    cout << endl;

    return 0;
}
