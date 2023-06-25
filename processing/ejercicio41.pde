void setup(){
    size(600, 600);
    int x = 300;
    int y = 300;
    int dir = 1;
    int dx = 10;
    int dy = 10;
    for(int i = 0; i < 100; i++){
        line(x, y, x+dir*dx, y);
        x += dir*dx;
        line(x, y, x, y+dir*dy);
        y += dir*dy;
        dir *= -1;
        dx += 5;
        dy += 5;
    }
}