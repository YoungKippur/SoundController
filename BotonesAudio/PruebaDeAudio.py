import pyautogui
import serial

num = 1
estado = 0
serialArduino = serial.Serial("COM3",9600)


while True:
    while num == 1:
        estadoAux = serialArduino.readline()
        estado = int(estadoAux.decode('Ascii'))

        if estado == 2:
            pyautogui.press("volumeup")

        elif estado == 3:
            pyautogui.press("volumedown")
    
        elif estado == 0:
            break

        



    