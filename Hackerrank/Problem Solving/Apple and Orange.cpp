int app = 0;
    int org = 0;
    for(int i = 0; i < apples.size(); i++){
        if(apples[i] >= 0){
            int sum = apples[i] + a;
            if(sum >= s && sum <= t){
                app++;
            }
        }
    }
    for(int i = 0; i < oranges.size(); i++){
        if(oranges[i] <= 0){
            int sum = oranges[i] + b;
            if(sum >= s && sum <= t){
                org++;
            }
        }
    }
    cout<<app<<"\n"<<org;