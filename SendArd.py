import serial
import time
import ReceiveArd


port = "/dev/cu.usbmodem142401"
arduinoData = serial.Serial(port, 9600)

def send(condition): 
    print("encoded result sent to Arduino: ",repr(condition).encode())
    arduinoData.write(repr(condition).encode())
    time.sleep(2)
