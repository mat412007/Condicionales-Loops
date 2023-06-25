void setup(){
    size(400, 400);
    noFill();
    for(int x = 0; x < 400; x += 25){
        ellipse(200, 200, x, x);
    }
}