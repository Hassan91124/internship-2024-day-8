#include <iostream>
using namespace std;

char getGrade(int score) {
    switch (score / 10) {
        case 10:
        case 9:
            return 'A';
        case 8:
            return 'B';
        case 7:
            return 'C';
        case 6:
            return 'D';
        default:
            return 'F';
    }
}

int main() {
    int score;
    cout << "Enter the score: ";
    cin >> score;
    
    if (score < 0 || score > 100) {
        cout << "Invalid score." << endl;
    } else {
        cout << "Grade: " << getGrade(score) << endl;
    }
    return 0;
}
