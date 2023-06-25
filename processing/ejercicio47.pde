void setup(){
    size(400, 400);
    background(255);
    fill(0);
    int x = parsetInt(args[0]);
    for(int i = 0; i < x; i++){
        for(int j = 0; j < x; j++){
            rect(100*i, 100*j, 100,100);
        }
    }
}