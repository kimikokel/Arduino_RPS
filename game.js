
    function changeJS() {
        var com = "scissor";
        var player = "rock";
        var result = "win";

        var comPNG = "pics/" + com + ".png"
        var plyPNG = "pics/" + player + ".png"

        document.getElementById("com").src = comPNG;
        document.getElementById("player").src = plyPNG;
        document.getElementById("result").innerHTML = result;
    }
    