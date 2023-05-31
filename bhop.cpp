#include <Windows.h>
#include <iostream>
#include <thread>
using namespace std;
bool paused = false;

// no deference from a python script, this is unusable garbage.
//it would be easy to code external bhop and just have fun with that but im to afraid that itll ban my acc someday so
//dont use this kinda shit go for external bhop just like zuhn does & have fun

void huy() 
{
    while(1)
    {
        cout << "is_paused: " << paused << "\r" << flush;
        Sleep(200);
    }
}

void stopOnVKEND() 
{
    while(true)
    {
        if (GetAsyncKeyState(VK_END))
        {
            paused = !paused;
            Sleep(200);
        }
    }
    Sleep(200);
}

void bhopOnSpace()
{
    
}

int main() 
{
    
    thread stopper(stopOnVKEND);
    stopper.detach();
    // thread bhop(bhopOnSpace);
    // bhop.detach();
    thread t1(huy);
    t1.detach();
    INPUT input;
    input.type = INPUT_KEYBOARD;
    input.ki.wScan = 0;
    input.ki.time = 0;
    input.ki.dwExtraInfo = 0;                                                                                                     
    input.ki.wVk = 0x20;

    while(true)
    {
        if (GetKeyState(VK_SPACE) < 0 && !paused) 
        {
            input.ki.dwFlags = 0;
            SendInput(1, &input, sizeof(INPUT));
            input.ki.dwFlags = KEYEVENTF_KEYUP;
            SendInput(1, &input, sizeof(INPUT));
            Sleep(10);
        }
    }
    return 0;
}

// TODO: