// CalculateGrades.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
#include <string>
using namespace std;

int main() {

	double Q1, Q2, MT, Fl, NA;
	char sim;

	struct Student {
		string FirstName, LastName;
		double Quiz1, Quiz2, Midterm, final, grade;
	};

	struct Student p;

BEGIN:
	cout << "Lets calculate your grade.\n" << endl;
	cout << "Enter your first name: ";
	cin >> p.FirstName;
	cout << "Enter your last name: ";
	cin >> p.LastName;
	
	while(p.Quiz1 < 0 || p.Quiz1 > 10) {
		cout << "\nEnter the grade of your Quiz 1 (Max of 10): ";
		cin >> p.Quiz1;
		if (p.Quiz1 < 0 || p.Quiz1 > 10) {
			cout << "> Please enter a number between 0 and 10.\n";
		}
	}
	while (p.Quiz2 < 0 || p.Quiz2 > 10) {
		cout << "Enter the grade of your Quiz 2 (Max of 10): ";
		cin >> p.Quiz2;
		if (p.Quiz2 < 0 || p.Quiz2 > 10) {
			cout << "> Please enter a number between 0 and 10.\n";
		}
	}
	while (p.Midterm < 0 || p.Midterm > 100) {
		cout << "Enter the grade of your midterm (Max of 100): ";
		cin >> p.Midterm;
		if (p.Midterm < 0 || p.Midterm > 100) {
			cout << "> Please enter a number between 0 and 100.\n";
		}
	}
	while (p.final < 0 || p.final > 100) {
		cout << "Enter the grade of your final (Max of 100): ";
		cin >> p.final;
		if (p.final < 0 || p.final > 100) {
			cout << "> Please enter a number between 0 and 100.\n" << endl;
		}
	}

	Q1 = p.Quiz1 * 1.25;
	Q2 = p.Quiz2 * 1.25;
	MT = p.Midterm * 0.25;
	Fl = p.final * 0.50;
	NA = Q1 + Q2 + MT + Fl;

	cout << "\nHere are the results for " << p.FirstName << p.LastName << endl;
	cout << "\nTEST\t\tYOUR SCORE\t\tMAX SCORE\t\tAVERAGE SCORE" << endl;
	cout << "QUIZ 1\t\t" << p.Quiz1 << "\t\t\t10\t\t\t\t" << Q1 << "%" << endl;
	cout << "QUIZ 2\t\t" << p.Quiz2 << "\t\t\t10\t\t\t\t" << Q2 << "%" << endl;
	cout << "MIDTERM\t\t" << p.Midterm << "\t\t\t100\t\t\t\t" << MT << "%" << endl;
	cout << "FINAL\t\t" << p.final << "\t\t\t100\t\t\t\t" << Fl << "%" << endl;
	cout << "__________________________________________________________________________________________" << endl;
	cout << "TOTAL\t\t" << p.Quiz1 + p.Quiz2 + p.Midterm + p.final << "\t\t\t220\t\t\t" << NA << "%" << endl;

	cout << "Numeric Average: " << NA << "%" << endl;
	if (NA >= 90)
		cout << "Final Grade is A" << endl;
	else if (NA >= 80 && NA < 90)
		cout << "Final Grade is B" << endl;
	else if (NA >= 70 && NA < 80)
		cout << "Final Grade is C" << endl;
	else if (NA >= 60 && NA < 70)
		cout << "Final Grade is D" << endl;
	else if (NA < 60)
		cout << "Final Grade is F" << endl;

	cout << "Would you like to try again for another student? (Enter Y or N)" << endl;
	cin >> sim;
	if (sim == 'Y' || sim == 'y')
		goto BEGIN;

	return 0;
}

