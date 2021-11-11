Difference(vector<int> a)
{
    elements = a;
}

void computeDifference()
{
    int x;
    maximumDifference = abs(elements[0] - elements[1]);
    for (int i = 0; i < elements.size(); i++)
    {
        for (int j = i + 1; j < elements.size(); j++)
        {
            x = abs(elements[i] - elements[j]);
            if (maximumDifference < x)
            {
                maximumDifference = x;
            }
        }
    }
}