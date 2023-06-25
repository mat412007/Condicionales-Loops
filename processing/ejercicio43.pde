void setup(){
    size(400, 400);
    background(255);
    fill(0);
    int n = parseInt(args[0]);
    while(n != 0){
        int r = int(random(9, 61));
        int rand1 = int(random(0, 401));
        int rand2 = int(random(0, 401));
        int randcolor = int(random(0, 256));
        fill(randcolor);
        ellipse(rand1, rand2, r, r);
        n--;
    }
}