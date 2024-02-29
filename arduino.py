import serial
import time

arduino = serial.Serial(port='COM4',   baudrate=115200, timeout=.1)


def write_read(x):
    arduino.write(bytes(x,   'utf-8'))
    time.sleep(0.05)
    data = arduino.readline()
    return   data

a = 0
def sendDataToArduino():
   # num = input("Enter a number: ")
   for a in range(7):
     num = str("5")
     value   = write_read(num)
     print(value)

sendDataToArduino()

