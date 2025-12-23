// LAB06_3.cpp : This file contains the 'main' function. Program execution begins and ends there.
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
	const int M = 4;
	const int N = 3;

	string name[N], id[N];
	double score[N][M];
	double total[N];
	char grade[N]; 

	// TODO: วนรับ name/id
	for (int i = 0; i < 3; i++) 
	{
		cout << "Enter Name : ";
		getline(cin >> ws, name[i]);

		cout << "Enter ID : ";
		getline(cin >> ws, id[i]);

		total[i] = 0.0;
		// TODO: nested loop รับคะแนน M วิชา + รวม total[i]
		for (int j = 0; j < M; j++)
		{
			cout << "Enter Score " << (j + 1) << ":";
			cin >> score[i][j];

			total[i] += score[i][j];
		}

		// TODO: calculateGrade(total[i], grade[i]);
		calculateGrade(total[i], grade[i]);
	}

	// TODO: แสดงผลโดยใช้ displayStudentInfo(name[i], id[i], total[i], grade[i]);
	for (int i = 0; i < N; i++)
	{
		displayStudentInfo(name[i], id[i], total[i], grade[i], counter);
	}

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
