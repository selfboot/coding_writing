window.onload = function() {
    fillRect();
    strokeRect();
    clearRect();
}

function fillRect() {
    var drawing = document.getElementById("fill");

    //make sure <canvas> is completely supported
    if (drawing.getContext) {

        var context = drawing.getContext("2d");

        //draw a black rectangle
        context.fillStyle = "Orange";
        context.fillRect(50, 50, 200, 200);

        //draw a blue rectangle that's semi-transparent
        context.fillStyle = "black";
        context.fillRect(100, 100, 200, 200);
    }
}

function strokeRect() {
    var drawing = document.getElementById("stroke");
    if (drawing.getContext) {
        var context = drawing.getContext("2d");
        context.strokeStyle = "Green";
        context.strokeRect(50, 50, 200, 200);

        context.strokeStyle = "Blue";
        context.strokeRect(100, 100, 200, 200);
    }
}

function clearRect(){
    var drawing = document.getElementById("clear");
    if (drawing.getContext) {
        var context = drawing.getContext("2d");
        context.fillStyle = "Orange";
        context.fillRect(50, 50, 200, 200);

        context.fillStyle = "black";
        context.fillRect(100, 100, 200, 200);

        context.clearRect(100, 100, 150, 150);
    }
}
