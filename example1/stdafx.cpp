// stdafx.cpp : source file that includes just the standard includes
// example1.pch will be the pre-compiled header
// stdafx.obj will contain the pre-compiled type information

//header file
#include "stdafx.h"
// body of various functions are defined below
//-------------------------------------------------------------------
void log(const char* message) {
	std::cout << message << std::endl;
	std::cout << "Press ENTER to start the program..." << std::endl;
	std::cin.get();
}
//-------------------------------------------------------------------
double pythagorasTh() {
	int x, y;
	std::cout << "This calculates Pythagoral Theorems for two numbers." << std::endl;
	std::cout << "Enter number no1..." << std::endl;
	std::cin >> x;
	// check whether the user has input a number
	while (std::cin.fail()) {
		std::cout << "Error: Enter an integer number!" << std::endl;
		std::cin.clear();
		std::cin.ignore(256, '\n');
		std::cin >> x;
	}
	std::cout << "Enter number no2..." << std::endl;
	std::cin >> y;
	// check whether the user has input a number
	while (std::cin.fail()) {
		std::cout << "Error: Enter an integer number!" << std::endl;
		std::cin.clear();
		std::cin.ignore(256, '\n');
		std::cin >> y;
	}
	double result = sqrt(x*x + y * y);
	std::cout << "The pythagoras theorem for " << x << " and " << y << " is " << result << std::endl;
	return result;
}
//-------------------------------------------------------------------
void multiplication_table() {
	int number;
	std::cout << "Enter the number whose multiplication you wish to see" << std::endl;
	std::cin >> number;
	// check whether the user has input a number
	while (std::cin.fail()) {
		std::cout << "Error: Enter an integer number!" << std::endl;
		std::cin.clear();
		std::cin.ignore(256, '\n');
		std::cin >> number;
	}
	std::cout << "\nThe Multiplication table for the number " << number << " is below." << std::endl;
	std::cout << "----------------------------------------------------" << std::endl;
	for (int times = 1; times < 11; times++) {
		std::cout << "\t" << number << " x " << times << " = " << number * times << "." << std::endl;
		Sleep(100);
	}

}
//-------------------------------------------------------------------
//void doWork() {
//	using namespace std::literals::chrono_literals;
//	while (!s_Finished) {
//		std::cout << "thread working... and press ENTER key to stop the thread" << std::endl;
//		Sleep(200);
//		std::this_thread::sleep_for(1s);
//		/* VOID WINAPI Sleep( _In_ DWORD dwMilliseconds); */
//	}
//}
//-------------------------------------------------------------------
void task1(std::string msg)
{
	std::cout << "task1 says: " << msg << std::endl;
	std::cout << "The Id of the thread is " << std::this_thread::get_id() << std::endl;
}
//-------------------------------------------------------------------
void simple_triangle() {
	int rows;
	std::cout << "Enter number of rows (0 - 200): ";
	std::cin >> rows;

	while (rows <= 0 || rows > 200 || std::cin.fail()) {
		std::cout << "Please enter the valid number ";
		std::cin.clear();
		std::cin.ignore(256, '\n');
		std::cin >> rows;
	}

	for (int i = 1; i <= rows; i++) {
		// printing columns
		for (int j = 1; j <= i; j++) {
			std::cout << "*";
		}
		std::cout << "\n"; // next row
	}
}
//-------------------------------------------------------------------
void draw_pyramid() {
	int space, rows;

	std::cout << "The number should be positive and between 0 to 60. Please enter the number  ";
	std::cin >> rows;

	while (rows <= 0 || rows > 60 || std::cin.fail()) {
		std::cout << "Please enter the valid number ";
		std::cin.clear();
		std::cin.ignore(256, '\n');
		std::cin >> rows;
	}

	for (int i = 1, k = 0; i <= rows; ++i, k = 0)
	{
		for (space = 1; space <= rows - i; ++space)
		{
			std::cout << "  ";
		}

		while (k != 2 * i - 1)
		{
			std::cout << "* ";
			++k;
		}
		std::cout << std::endl;
		Sleep(1);
	}
}
//-------------------------------------------------------------------
something::something() {
	std::cout << "calling the constructor...created your object" << std::endl;
}
something::~something() {
	std::cout << "I am Shiva...the Lord of Death....killing your object" << std::endl;
}

void something::do_something() {
	std::cout << "hello " << this -> some_names << " " << this ->some_nos << "  - methods example." << std::endl;
}

void something::tell_name_animal(animals name) {
	std::cout << "The id number of animal is " << name << std::endl;
}