#include <iostream>
using namespace std;

class Student
{
	protected:
		int rollNo, grade;
		char name[50];
		void setData()
		{
			cout << "Enter the grade and roll no" << endl;
			cin >> rollNo >> grade;
			cout << "Enter the name:" << endl;
			cin >> name;
		}
		
		void getRoll()
		{
			cout << "Roll is:" << rollNo << endl;
		}
		
		void getGrade()
		{
			cout << "Grade:" << grade << endl;
		}
		
		void display()
		{
			cout << "Name is: " << name << endl;
		}
};

class Test: protected Student
{
	protected:
		int m1, m2, m3;
		void setMark(int a, int b, int c)
		{
			m1 = a;
			m2 = b;
			m3 = c;
		}
		float getAvg()
		{
			return (m1 + m2 + m3) / 3;
		}	
};

class Sports
{
	protected:
		int extraCur;
		void setExtra(int x)
		{
			extraCur = x;
		}
		
		int getExtra()
		{
			return extraCur;
		}
		
};

class Result : protected Test, protected Sports
{
	protected:
		float avg;
	public:
		float getTotal()
		{
			setData();
			getRoll();
			getGrade();
			display();
			setMark(60, 89, 93);
			setExtra(88);
			avg = getAvg() + getExtra();
			if (avg/2 >= 90 )
			{
				cout << "Pass" << endl;
			}
			else
			{
				cout << "Fail" << endl;
			}
		}
			
};

int main()
{
	Result r1;
	r1.getTotal();
}
