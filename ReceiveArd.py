import serial
import time

string = ""

def remove_newline_and_carriage_return(s):
    cleaned_s = s.replace("\n", "").replace("\r", "")
    return cleaned_s

def getString():
    port = "/dev/cu.usbmodem142401"
    arduinoData = serial.Serial(port, 9600)

    line =  arduinoData.readline()
    string = line.decode("utf-8", errors="ignore")

    cleaned_string = remove_newline_and_carriage_return(string)

    # print("get " + cleaned_string)
    return cleaned_string
