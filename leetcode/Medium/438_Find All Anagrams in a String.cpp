// We have to insert starting index of all anagram in vector.
// string s is in which we have to check anagram.
// string p is the string of which we have to find its anagram in string s.

// Logic :-
// if length of p is greater than length of s then return empty vector becz no anagram can found in string s.

// Now our logic is to create two vector, in first vector we have the track of frequency of character of string p. And in second vector we will make changes to the track of frequency of character of string s ( till now logic of first while loop) and simultaneously we can check if it will equal to vector1 means we find our anagram. 

// when we will get our anagram we will push (i - j + 1) becz our anagram will be find at such place from where if we will subract the length of string p and do +1 then we can get the starting index of our anagram becz when we will get our anagram it means all previous element (till length of p) are element of p as well that's why we have get our anagram.

// Sliding window concept is used here by eleminating the first character and add next character of s in vector 2 and then check
// the vector1 == vector2.
// eg. ====>    b  a  c  b  a
//              _______

//              b  a  c  b  a
//              x  _______

//              b  a  c  b  a
//              x  x  _______

//              where, p = "abc"
//                     s="bacbad..."

vector<int> findAnagrams(string s, string p)
{
    if (s.length() < p.length())
        return {};

    vector<int> v1(26, 0);
    vector<int> v2(26, 0);
    vector<int> res;
    int i = 0, j = p.length();

    while (p[i])
    {
        v1[p[i] - 'a']++;
        v2[s[i] - 'a']++;
        i++;
    }
    i--;
    while (1)
    {
        if (v1 == v2)
            res.push_back(i - j + 1);
        i++;
        if (!s[i])
            break;
        v2[s[i - j] - 'a']--;
        v2[s[i] - 'a']++;
    }
    return res;
}

