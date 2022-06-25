// We have to return true if find any anagram in s2 of s1.
// string s2 is in which we have to check anagram.
// string s1 is the string of which we have to find its anagram in string s2.

// Logic :-
// if length of s1 is greater than length of s2 then return empty vector becz no anagram can found in string s.

// Now our logic is to create two vector, in first vector we have the track of frequency of character of string s1. And in second vector we will make changes to the track of frequency of character of string s2 ( till now logic of first while loop) and simultaneously we can check if it will equal to vector1 means we find our anagram and we get we will return true otherwise we will return false at last becz we unable to find anagram.

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


bool checkInclusion(string s1, string s2)
{
    if (s1.length() > s2.length())
        return false;

    vector<int> v1(26, 0);
    vector<int> v2(26, 0);
    int i = 0, j = s1.length();

    while (s1[i])
    {
        v1[s1[i] - 'a']++;
        v2[s2[i] - 'a']++;
        i++;
    }
    i--;
    while (1)
    {
        if (v1 == v2)
            return true;
        i++;
        if (!s2[i])
            break;
        v2[s2[i - j] - 'a']--;
        v2[s2[i] - 'a']++;
    }
    return false;
}