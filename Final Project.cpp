// Final Project.cpp : Defines the entry point for the console application.
// Funnt bot timmer 

//
//Setting Up the Program 
#include "stdafx.h"
#include <iostream>
#include <chrono>
#include <conio.h>
#include <Windows.h>

using namespace std;

//Start of main function
int main()
{
	//Text to tell the user who uses this program that the clock has started 
	std::cout << "My name is Funny bot break clock starts now\n";
	std::cout << "\nYour reward is a joke at the end\n ";
	std::cout << "\nWhats a cat's favorite salad dressing?..\n";

	int m, s;
	int total;



	cout << "Enter m and s" << endl;
	cin >> m >> s;



	for (int sec = s; s >= 0; s--)
	{

		cout << "You have " << "minutes " << m << " seconds" << s << endl;
		Sleep(700);

		if (s == 0)
		{
			total = m * 60;

			for (int min = total; total >= 0; total--)
			{
				cout << "You have the remaining seconds " << total << endl;
				Sleep(700);
			}



		}
	}





	system("pause");




	////Here we are using the variable Chrono to keep the time, and what the line below does is doing 
	//// is subtractring the end time so in the case, the time after X amount of minutes and the time that it is now
	//std::chrono::steady_clock::time_point tend = std::chrono::steady_clock::now()
	//	+ std::chrono::minutes(1);
	////Starting a while loop while the timmer is running 
	//while (std::chrono::steady_clock::now() < tend)
	//{
	//	// Declaring argument for time()
	//	time_t tt;

	//	// Declaring variable to store return value of
	//	// localtime()
	//	struct tm * ti;

	//	// Applying time()
	//	time(&tt);

	//	// Using localtime()
	//	auto ti = localtime_s(&tt);

	//	cout << "Current Day, Date and Time is = "
	//		<< asctime(ti);

	//}
	//Text that appears with joke punchline once the timer runs out 
	std::cout << "Times Up \n";
	std::cout << "\nPunch Line- Rrrrrrranch!";
	//pauses program so it doesn't autimatcilly open 
	system("pause");
	return 0;
}
