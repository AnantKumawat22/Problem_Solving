long a = x, y = 0;
        int flag = 0, r = 0;
        
        if(x == 0) return 0;
        
        if(x < 0){
            a = (-a);
            flag = 1;
        }
        while(a > 0){
            r = a % 10;
            y = y*10 + r;
            a = a / 10;
        }
        if(y < INT_MIN || y > INT_MAX){
            return 0;
        }
        
        if(flag == 0) return y;
        else return (-y);