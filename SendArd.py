import serial
import time
import ReceiveArd


port = "/dev/cu.usbmodem143301"
arduinoData = serial.Serial(port, 9600)

def send(condition): 
    # print("send: ",repr(condition).encode())
    # arduinoData.write(b'1')
    # while (True):
    #     print("whiling")
    #     time.sleep(2)
    #     arduinoData.write(repr(condition).encode())

    #     if (ReceiveArd.getString() == arduinoData.write(repr(condition).encode())):
    #         print(ReceiveArd.getString())
    #         break
    # time.sleep(2)
    arduinoData.write(repr(condition).encode())
    time.sleep(2)
    # arduinoData.flush()

    # print(b'1')
    # 
    # try:
    #     while True:
    #         arduinoData.write(repr(condition).encode())  # Send the command to the Arduino
    #         time.sleep(2)  # Delay to allow the Arduino to process the command

    # except KeyboardInterrupt:
    #     arduinoData.close()   

# send(0)