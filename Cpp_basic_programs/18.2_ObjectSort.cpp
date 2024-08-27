#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Student
{
public:
	string name;
	int grade;

	Student(string n, int g) : name(n), grade(g) {}
};

// Comparison function to sort by grade
bool compareByGrade(const Student &a, const Student &b)
{
	return a.grade < b.grade; // Ascending order
}

int main()
{
	vector<Student> students = {
		Student("Alice", 90),
		Student("Bob", 85),
		Student("Charlie", 95)};

	sort(students.begin(), students.end(), compareByGrade);

	for (const auto &student : students)
	{
		cout << student.name << " " << student.grade << endl;
	}

	return 0;
}
