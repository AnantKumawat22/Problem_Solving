void update(int *a, int *b)
{
    int x = *a;
    *a = (*a + *b);
    *b = (x - *b) < 0 ? -(x - *b) : (x - *b);
}