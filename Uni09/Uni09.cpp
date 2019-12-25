#include <iostream>
#include "Student.h"
using namespace std;

double First(int x1, int y1, int x2, int y2)
{
	return (double)sqrt((double)pow(y2 - y1, 2) + (double)pow(y2 - y1, 2));
}
int Second(int no) {
	if ((no == 0) || (no == 1)) {
		return no;
	}
	else {
		return Second(no - 1) + Second(no - 2);
	}
}
void Third(char input[]) {
	for (int i = 0; i < sizeof input / sizeof * input; i++)
	{
		if (input[i] == 'a') {
			input[i] = 'i';
		}
		else if (input[i] == 'i') {
			input[i] = 'z';
		}
	}
}
void Forth(int no[]) {
	for (int i = 0; i < sizeof no / sizeof * no - 1; i++)
		for (int j = 0; j < sizeof no / sizeof * no - i - 1; j++)
			if (no[j] > no[j + 1])
			{
				int temp = no[j];
				no[j] = no[j + 1];
				no[j + 1] = temp;
			}
}

//Fifth
void Fifth(Student students[], string selectedStudentsNo) {
	for (int i = 0; i < sizeof students / sizeof * students - 1; i++)
		for (int j = 0; j < sizeof students / sizeof * students - i - 1; j++)
			if (students[j].GetGpa() < students[j + 1].GetGpa())
			{
				Student temp = students[j];
				students[j] = students[j + 1];
				students[j + 1] = temp;
			}
	for (int i = 0; i < sizeof students / sizeof * students - 1; i++)
		if (students[i].GetStudentNo() == selectedStudentsNo)
		{
			cout << students[i].GetFName() << " " << students[i].GetLName() << " ba shomare daneshuyi " << students[i].GetStudentNo() << " daraye moadele " << students[i].GetGpa() << " dar rotbeye " << i << " garar darad.\n";;
			break;
		}
	cout << "daneshjuye morede nazar peyda nashod";
}
int main()
{

}
