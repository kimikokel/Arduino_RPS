import warnings

warnings.filterwarnings("ignore")

def changeJS(com, player, result, driver):
    # print("changjs")
    file_path = "game.js"

    with open(file_path, "r") as js_file:
        javascript_code = js_file.read()

    new_function = """
    function changeJS() {{
        var com = "{comJS}";
        var player = "{plyJS}";
        var result = "{rltJS}";

        var comPNG = "pics/" + com + ".png"
        var plyPNG = "pics/" + player + ".png"

        document.getElementById("com").src = comPNG;
        document.getElementById("player").src = plyPNG;
        document.getElementById("result").innerHTML = result;
    }}
    """

    javascript_code = new_function.format(comJS = com, plyJS = player, rltJS = result)

    with open(file_path, "w") as js_file:
        js_file.write(javascript_code)
    
    driver.refresh()
        

# driver.quit()
