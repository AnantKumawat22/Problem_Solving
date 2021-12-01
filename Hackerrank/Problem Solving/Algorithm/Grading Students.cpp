vector<int> vect;
    
for(int i = 0; i < grades.size(); i++){
    if(grades[i] < 38){
        vect.push_back(grades[i]);
        continue;
    }
    int r = grades[i] % 5;
    if((5 - r) < 3){
        grades[i] = grades[i] + (5 - r);
    }
    vect.push_back(grades[i]);
}
return vect;