int temp = x, r = 0;
        long int y = 0;
        
        if(x < 0) return false;
        while(x > 0){
            r = x % 10;
            y = y*10 + r;
            x /= 10;
        }
        if(y == temp) return true;
        else return false;