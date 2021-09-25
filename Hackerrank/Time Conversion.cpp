string rm = s.substr(2, 6);
    int hr = stoi(s.substr(0, 2));
    
    if(s[s.length()-2] == 'P'){
        if(hr < 12){
            return(to_string(hr+12) + rm);
        }
        return(to_string(hr) + rm);  
    }
    if(hr == 12){
        return( "00" + rm);
    }
    return(s.substr(0, 8));