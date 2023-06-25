void setup() {
    size(400, 400);
    int n = 8;
    int step = width/n;
    //println(step);
    for(int x = 0; x < width; x += step){
        for(int y = 0; y < width; y += step){
            fill(int(random(0, 256)));
            rect(x, y, step, step);
        }
    }
}