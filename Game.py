
def RPS(player, comp):
    if (comp == "rock"):
        if (player == "scissor"):  
            # print("lose to rock")
            return 0
        elif (player == "paper"):  
            # print("win to rock")
            return 1
        elif (player == "rock"):
            # print("draw to rock")
            return 2
        elif (player == "done"):
            # print("rererere")
            return 3
        else:
            # print("else")
            return -2        

    if (comp == "paper"):
        if (player == "scissor"):  
            # print("win to paper")
            return 1
        elif (player == "paper"):  
            # print("draw to paper")
            return 2
        elif (player == "rock"):
            # print("lose to paper")
            return 0
        elif (player == "done"):
            # print("rererere")
            return 3
        else:
            # print("else")
            return -2

    if (comp == "scissor"):
        if (player == "scissor"):  
            # print("draw to scissor")
            return 2
        elif (player == "paper"):  
            # print("lose to scissor")
            return 0
        elif (player == "rock"):
            # print("win to scissor")
            return 1
        elif (player == "done"):
            # print("rererere")
            return 3
        else:
            # print("else")
            return -2