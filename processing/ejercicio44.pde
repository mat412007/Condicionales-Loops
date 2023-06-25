void setup(){
    size(400, 400);
    background(128);
    stroke(0);
    fill(255);
    int k = 0;
    for(int y = 0; y < 500; y += 25){
        for(int x = 0; x < 500; x += 25){
            if(k % 2 == 0){
                rect(x-20, y, 40, 20);
            }
            else{
                rect(x, y, 40, 20);
            }
        }
        k++;
    }
}