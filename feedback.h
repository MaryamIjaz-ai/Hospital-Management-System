
#pragma once
#include<iostream>
#include"Appointment.h"
#include"Doctor.h"
#include"patient.h"

class Feedback {
private:
	int rating;
public:
	Feedback(int rating)
	{
		rating = rating;
}
	int setrating(int rating)
	{
		rating = rating;
}
	int getrating()
	{
		return rating;
	}

	/*string Givereview(string r)
	{
		cout << "******Pease Enter a review*********" << endl;
		cin >> r;
		cout << "  " << r << endl;
	}*/
	void Updaterating()
	{

	}

	void Displayrating()
	{

	}



};
