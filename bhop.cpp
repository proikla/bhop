#include <Windows.h>
#include <iostream>

using namespace std;
int main() 
{
    bool paused = false;
    INPUT input;
    input.type = INPUT_KEYBOARD;
    input.ki.wScan = 0;
    input.ki.time = 0;
    input.ki.dwExtraInfo = 0;
    input.ki.wVk = 0x20;
    while(true)
    {
        if (GetAsyncKeyState(VK_END))
        {
            paused = !paused;
            break;
            Sleep(100);
        }
        if (GetAsyncKeyState(VK_SPACE) < 0)
        {
            input.ki.dwFlags = 0;
            SendInput(1, &input, sizeof(INPUT));
            input.ki.dwFlags = KEYEVENTF_KEYUP;
            // Sleep(1);
            SendInput(1, &input, sizeof(INPUT));
        }
        Sleep(10);
        system("CLS");
    }

}