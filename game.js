
    function changeJS() {
        var com = "empty";
        var player = "empty";
        var result = "";

        var comPNG = "pics/" + com + ".png"
        var plyPNG = "pics/" + player + ".png"

        document.getElementById("com").src = comPNG;
        document.getElementById("player").src = plyPNG;
        document.getElementById("result").innerHTML = result;
    }
    