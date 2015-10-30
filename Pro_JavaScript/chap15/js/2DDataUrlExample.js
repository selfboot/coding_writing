window.onload = function() {
    var drawing = document.getElementById("drawing");

    if (drawing.getContext) {
        var imgURI = drawing.toDataURL(img / png);


        var image = document.createElement("img");
        image.src = imgURI;
        document.body.appendChild(image);
    }
}
