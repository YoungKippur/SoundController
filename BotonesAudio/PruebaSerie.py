import time
import serial

estado = 0
serialArduino = serial.Serial("COM4",9600)

while True:
    estadoAux = serialArduino.readline()
    estado = int(estadoAux.decode('Ascii'))

    print(estado)
        

