int max = A[0];
int min = A[0];
for (int i = 1; i < A.size(); i++)
{
    if (A[i] >= max)
    {
        max = A[i];
    }
    else if (A[i] < min)
    {
        min = A[i];
    }
}
return (max + min);