import ReceiveArd
import SendArd
import Game
import DisplayHTML
from selenium import webdriver
import random
import time
import threading as th  


select = ["rock", "paper", "scissor"]

player = 0
result = ""

driver = webdriver.Chrome()

driver.get("file:///Users/kimiko_kel/Desktop/Code/Arduino/Arduino_RPS/rps.html")

DisplayHTML.changeJS("empty", "empty", "", driver)

def play(player):

    if ("rock" in player or "paper" in player or "scissor" in player or "done" in player):

        print("player selection received from Arduino: ", player)

        comp = random.choice(select)
        print("comp random selection: ", comp)

        condition = Game.RPS(player, comp)

        S = th.Timer(0, SendArd.send, [condition])  
        S.start()  

        if (condition == 0):
            result = "lose"
        elif (condition == 1):
            result = "win"
        elif (condition == 2):
            result = "draw"
        elif (condition == 3):
            return False
        else:
            return 0
        print("result returned: ", result)
        
        DisplayHTML.changeJS(comp, player, result, driver)
    return 0


while True:
    player = ReceiveArd.getString()

    play(player)

    if (player == "done"):
        break