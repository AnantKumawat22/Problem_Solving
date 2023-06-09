class Solution
{
public:
    // Function to find majority element in the array
    // a: input array
    // size: size of input array
    int majorityElement(int a[], int size)
    {

        unordered_map<int, int> umap;

        for (int i = 0; i < size; i++)
            umap[a[i]]++;

        unordered_map<int, int>::iterator itr;

        for (itr = umap.begin(); itr != umap.end(); itr++)
        {
            if (itr->second > (size / 2))
                return itr->first;
        }
        return -1;
    }
};