// LAB06_4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

void calculateGrade(double score, char& grade)
{
	if (score >= 90) grade = 'A';
	else if (score >= 80) grade = 'B';
	else if (score >= 70) grade = 'C';
	else if (score >= 60) grade = 'D';
	else grade = 'F';
}

void displayStudentInfo(string name, string id, double score, char grade, int& counter)
{
	cout << "\n";
	cout << "--- Student " << counter << " Information ---" << "\n";
	cout << "Student Name: " << name << "\n";
	cout << "Student ID : " << id << "\n";
	cout << "Score : " << fixed << setprecision(2) << score << "\n";
	cout << "Grade: " << grade << "\n";
	counter++;
}

int main()
{
	int counter = 1;
	int size;
	cout << "Enter number of students: ";
	cin >> size;
	cin.ignore(); // เคลียร์ newline ก่อน getline

	string* name = new string[size];
	string* id = new string[size];
	double* score = new double[size];
	char* grade = new char[size];

	// TODO: วนรับข้อมูล size คน
	for (int i = 0; i < size; i++)
	{
		cout << "Enter Name: ";
		getline(cin >> ws, name[i]);

		cout << "Enter ID: ";
		cin >> id[i];

		cout << "Enter Score: ";
		cin >> score[i];
	}
	// TODO: calculateGrade(score[i], grade[i]);
	// TODO: วนแสดงผล size คน ด้วย displayStudentInfo
	for (int i = 0; i < size; i++)
	{
		calculateGrade(score[i], grade[i]);
		displayStudentInfo(name[i], id[i], score[i], grade[i], counter);
	}
	// TODO: delete[] ให้ครบทุกตัวแปร
	delete name;
	delete id;
	delete score;
	delete grade;

	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
