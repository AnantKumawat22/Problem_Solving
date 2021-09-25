vector<int> vect;
    int high, low;
    int lowcount = 0, highcount = 0;
    high = low = scores[0];
    
    for(int i = 1; i < scores.size(); i++){
        if(high < scores[i]){
            highcount++;
            high = scores[i];
        }
        else if(low > scores[i]){
            lowcount++;
            low = scores[i];
        }
    }
    vect.push_back(highcount);
    vect.push_back(lowcount);
    return vect;