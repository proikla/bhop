import keyboard
import asyncio
import pyautogui
import mouse
from time import sleep 
k = keyboard

paused = False

# this shit wont work cuz csgo is stupid just like me 

async def pause():
    while True:
        while k.is_pressed('='):
            paused = not paused
            sleep(0.1)
        sleep(1)

async def bhop():
    while True:
        while keyboard.is_pressed('alt'):
            mouse.wheel(-10)
            sleep(20/100)
        else:
            print("ELSE")
            sleep(.5)


async def main():
    await bhop()
    await pause()

if __name__ == '__main__':
    asyncio.run(main())                                                                                                                                             
    asyncio.run(pause())