vector<int> circularArrayRotation(vector<int> a, int k, vector<int> queries) {
    vector<int> vect;
    int n = a.size();
    
    for(auto x: queries) vect.push_back(a[(n - (k % n) + x) % n]);
    return vect;
}

// Explanation in Image: Circular Array Rotation.jpg