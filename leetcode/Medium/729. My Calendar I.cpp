class MyCalendar {
public:
    MyCalendar() {}
    vector<vector<int>> vect;
    
    bool book(int start, int end) {    
        if(vect.empty()){ vect.push_back({start, end}); return true; }
        
        for(int i = 0; i < vect.size(); i++){
            int ft = vect[i][0], sd = vect[i][1];
            if(max(ft, start) < min(sd, end)) return false;
        }
        vect.push_back({start, end});
        return true;
    }
};