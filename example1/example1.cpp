// example1.cpp : Defines the entry point for the console application.

#include "stdafx.h"

//when i am defining the template body in stdafx.cpp the template isn't working.
template <typename T>
void Print(T what_ever) {
	std::cout << what_ever << std::endl;
}

int main()
{
	log("Hello World!");
	//----------------------------
	/*std::thread worker(doWork);
	std::cin.get();
	s_Finished = true;
	worker.join();*/
	//----------------------------
	pythagorasTh();
	//----------------------------
	multiplication_table();
	//----------------------------
	//Constructs the new thread and runs it. Does not block execution.
	std::thread t1(task1, "Hello C++");
	/*Makes the main thread wait for the new thread to 
	finish execution, therefore blocks its own execution. */
	t1.join();
	//----------------------------
	Print(786);
	Print(452.68f);
	Print("Hello Genius Bjarne!");
	//----------------------------
	simple_triangle();
	draw_pyramid();
	//----------------------------
	std::cin.get();
	//----------------------------
	something object1;
	object1.some_names = "C++ programming languages";
	object1.some_nos = 400;

	object1.do_something();

	animals Animal = donkey;
	object1.tell_name_animal(Animal);
	//----------------------------
	std::string s = "Bjarne is founder of C++ programming language\n.";
	copy(s.begin(), s.end(), std::ostream_iterator<char>(std::cout)); 
	//----------------------------
	/*
	cout<<"Elements output without delimiter: ";
	copy(vec.begin(), vec.end(), ostream_iterator<int> (cout));
	cout<<endl;
	
	// write elements with delimiter " " to output stream
	cout<<"Elements output with delimiter: ";
	copy(vec.begin(), vec.end(), ostream_iterator<int> (cout, " "));
	*/
	std::vector<int> myvector; // vector container

 // push/insert data into myvector vector
	for (int i = 1; i < 10; i++) myvector.push_back(i * 900);

	std::ofstream of("myoutput.txt");

	std::ostream_iterator<int> out_it(of, ", ");
	std::copy(myvector.begin(), myvector.end(), out_it);
	//----------------------------
	return 0;
}

