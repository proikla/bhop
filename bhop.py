import keyboard
import asyncio
import pyautogui
from time import sleep
k = keyboard

paused = False

async def pause():
    while True:
        while k.is_pressed('='):
            paused = not paused
            sleep(0.1)

async def bhop():
    while True:
        if keyboard.is_pressed('space'):
            pyautogui.press('space')
            sleep(0.01)


async def main():
    await bhop()
    await pause()

if __name__ == '__main__':
    asyncio.run(main())                                                                                                                                             
    asyncio.run(pause())