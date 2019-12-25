#pragma once
#include "Student.h"
#include<string>
using namespace std;

class Student
{
private:
	string FName;
	string LName;
	double Gpa;
	int SemesterNo;
	string StudentNo;

public:
	//Get
	string GetFName() const
	{
		return FName;
	}
	string GetLName() const
	{
		return LName;
	}
	double GetGpa() const
	{
		return Gpa;
	}
	int GetSemesterNo() const
	{
		return SemesterNo;
	}
	string GetStudentNo() const
	{
		return StudentNo;
	}
	//Set
	void SetFName(string fName)
	{
		this->FName = fName;
	}
	void SetLName(string lName)
	{
		this->LName = lName;
	}
	void SetGpa(double gpa)
	{
		this->Gpa = gpa;
	}
	void SetSemesterNo(int semesterNo)
	{
		this->SemesterNo = semesterNo;
	}
	void SetStudentNo(string studentNo)
	{
		this->StudentNo = studentNo;
	}
};

