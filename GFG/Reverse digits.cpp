long long int x = 0;
		    while(n > 0){
		        int r = n % 10;
		        x = x*10 + r;
		        n = n / 10;
		    }
		    return x;