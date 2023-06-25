void setup(){
    size(400, 400);
    int n = 5;
    int c = 400 / n;
    for(int x = 0; x != 400; x += c)
        line(x, 0, x, height);
    for(int y = 0; y != 400; y += c)
        line(0, y, width, y);
}