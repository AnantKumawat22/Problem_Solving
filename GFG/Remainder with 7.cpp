int r = 0;
        for(int i = 0; i < n.length(); i++){
            r = r*10 + (n[i] - '0');
            r = r % 7;
        }
        return (r);