#include <Windows.h>
#include <iostream>


int main() 
{
    bool paused = false;
    INPUT input;
    input.type = INPUT_KEYBOARD;
    input.ki.wScan = 0;
    input.ki.time = 0;
    input.ki.dwExtraInfo = 0;

    // Press the 'A' key
    input.ki.wVk = ' ';
    input.ki.dwFlags = 0; 

    while(1)
    {
        if (GetAsyncKeyState(VK_END))
        {
            paused = !paused;
            Sleep(100);
        }
        if (GetAsyncKeyState(VK_SPACE))
        {
            SendInput(1, &input, sizeof(INPUT));
            Sleep(1);
            SendInput(1, &input, sizeof(INPUT));
        }
    }

}