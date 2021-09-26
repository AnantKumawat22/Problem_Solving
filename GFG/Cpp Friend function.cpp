int first_sum, last_sum;
    first_sum = last_sum = 0;
    
    for(int i = 0, j = 0; i < k.first_name.length(); i++, j++){
        first_sum += int(k.first_name[i]);
        last_sum += int(k.last_name[j]);
    }
    if(first_sum == last_sum){
        cout<<"ANAGRAM"<<endl;
    }
    else cout<<"NOT ANAGRAM"<<endl;