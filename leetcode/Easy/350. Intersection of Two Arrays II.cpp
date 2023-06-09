// LeetCode Solution Link :- https://leetcode.com/problems/intersection-of-two-arrays-ii/solutions/3163412/c-two-solutions-hash-map-sorting-350-intersection-of-two-arrays-ii/

// Approach 1:
// Logic :- 
// Our logic is to store the counting of each element of nums1 vector in unordered map. We know that we have to return those element which are common in both including repeated element also.
// After that subract the counting of elements in unordered map using nums2 vector. So the only common element will get subtracted.
// On every substraction in umap store it in a vector that is our result.

class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int> vect;
        unordered_map<int, int> umap;

        for(int i = 0; i < nums1.size(); i++) umap[nums1[i]]++;
        for(int j = 0; j < nums2.size(); j++){
            if(umap[nums2[j]] > 0){
                vect.push_back(nums2[j]);
                umap[nums2[j]]--;
            }
        }
        return vect;
    }
};

// Apporach 2: 
// Logic :-
// Logic is to First sort both vector and traverse both of them simultaneously.
// If we get equal elements then we wil store that element in new vector [resultant vector] and if we get some small and large value then we will update the pointers of both vector according to that.
// basically the pointer which has greater value will stop where elements are unequal and the pointer having small value will keep increasing.

class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int> vect;
        int i = 0, j = 0;
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());

        while(i < nums1.size() && j < nums2.size()){
            if(nums1[i] == nums2[j]){
                vect.push_back(nums1[i]);
                i++; j++;
            }
            else if(nums1[i] > nums2[j]) j++;
            else i++;
        }
        return vect;
    }
};