// Basic Bhop By Habit
// Pretty sure its gonna be vac proof forever since it doesnt access any memory within the game
#include <iostream>
#include <Windows.h>
using namespace std;

int main()
{
start:

	CONST int scrolldown = -120;
	CONST int scrollup = 120;

	while (true)
	{
		if (GetAsyncKeyState(VK_SPACE) < 0)
		{
			cout << "pressed ";
			Sleep(20);
			mouse_event(MOUSEEVENTF_WHEEL, 0, 0, scrolldown, 0); // make sure you have mwheeldown binded to +jump in game
			Sleep(20);
			continue;
		}
//
		// if (GetAsyncKeyState(VK_SPACE) < 0)
		// {

		// 	mouse_event(MOUSEEVENTF_WHEEL, 0, 0, scrolldown, 0); // make sure you have mwheeldown binded to +jump in game
		// 	Sleep(20);											 // play around with this for other games// 20 is best for cs 1.6

		// 	// 		while (true)
		// 	// 		{
		// 	// 				Sleep(20); //play around with this for other games// 20 is best for cs 1.6
		// 	// 				mouse_event(MOUSEEVENTF_WHEEL, 0, 0, scrolldown, 0); //make sure you have mwheeldown binded to +jump in game

		// 	// 		}
		// }
	}

	return 0;
}