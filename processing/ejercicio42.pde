void setup(){
    size(400, 400);
    background(0);
    int v = 10;
    int c = 400 / v;
    int i = c / 2;
    for(int x = i; x < 400; x += c){
        for(int y = i; y < 400; y += c){
            ellipse(x, y, c, c);
        }
    }
}