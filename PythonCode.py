
import serial
import time
import pyautogui
import webbrowser

#abre o jogo
webbrowser.open('https://supermarioplay.com/')

porta = serial.Serial('COM5', 9600)
time.sleep(1)
dado = porta.readline().decode().strip('\r\n')

while(dado != 't'):
    time.sleep(0.01)
    dado = porta.readline().decode().strip('\r\n')

    #tratamento da entrada
    if dado == 'e':
        pyautogui.press('d')
    if dado == 'd':
        pyautogui.press('a')
    if dado == 'u':
        pyautogui.press('w')
    if dado == 'o':
        pyautogui.press('shift')

porta.close()
