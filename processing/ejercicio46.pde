vois setup(){
    size(400, 400);
    background(255);
    notFill();
    int v = 8;
    int c = 400 / v;
    for(int x = 0; x != 400; x += c){
        for(int y = 0; y != 400; y += c){
            rect(x, y, c, c);
        }
    }
}