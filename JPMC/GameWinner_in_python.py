def gameWinner(colors):
    currPlayer = "wendy"
    prevPlayer = ""
    winner = ""

    while True:
        moveMade = False
        if currPlayer == "wendy":
            whiteIndex = colors.find("www")
            if(whiteIndex == -1):
                # 3 consecutive whites found, remove the middle one
                colorsBuilder = list(colors)
                colorsBuilder.pop(whiteIndex + 1)
                colors = "".join(colorsBuilder)
                moveMade = True
                prevPlayer = currPlayer
                currPlayer = "bob"
        else:
            blackIndex = colors.find("bbb")
            if blackIndex != -1:
                # 3 consecutive blacks found, remove the middle one
                colorsBuilder = list(colors)
                colorsBuilder.pop(blackIndex + 1)
                colors = "".join(colorsBuilder)
                moveMade = True
                prevPlayer = currPlayer
                currPlayer = "wendy"

        if not moveMade:
            winner = prevPlayer
            break

    return winner
print(gameWinner("wwwbb"))