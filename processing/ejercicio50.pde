void setup(){
    size(600, 600);
    background(255);
    int a = parseInt(args[0]);
    int b = parseInt(args[1]);
    int c = parseInt(args[2]);
    int d = parseInt(args[3]);
    stroke(0);
    fill(65);
    line(10, 590, 10, 10);
    line(10, 590, 590, 590);
    rect(30, 590-(20*a), 40, 20*a);
    rect(90, 590-(20*b), 40, 20*b);
    rect(150, 590-(20*c), 40, 20*c);
    rect(210, 590-(20*d), 40, 20*d);
}