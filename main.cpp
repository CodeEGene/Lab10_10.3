#include <iostream>
#include <iomanip>

using namespace std;

const int MAX_STUDENTS = 20;
int numberStudents;
int scores[MAX_STUDENTS];

int main() {

	double average;
	int sum = 0;
	cout << "Number of students: ";
	cin >> numberStudents;

	for (int i = 0; i < numberStudents; i++) {
		cout << "Enter Score: ";
		cin >> scores[i];
		sum += scores[i];
	}
	average = (double)sum / numberStudents;
	cout << "High: "<<*max_element(scores, scores + numberStudents)<< " " << "Low: "<< *min_element(scores, scores + numberStudents) << " " << "Average: " << setprecision(3)<< average << endl;

	return 0;
}