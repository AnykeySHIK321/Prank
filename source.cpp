#include <iostream>
#include <thread>
#include <chrono>
#include <Windows.h>
using namespace std;
int main(int argc, char* argv[])
{
	ShowWindow(GetConsoleWindow(), SW_HIDE); // disabling the console window
	this_thread::sleep_for(chrono::seconds(20)); // Wait 20 seconds
	system("shutdown.exe -s -t 00"); // Shutting down the PC
	return 0;
}
