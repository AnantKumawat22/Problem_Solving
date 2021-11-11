int max_of_four(int a, int b, int c, int d)
{
    return (a > b && a > c && a > d) ? a : ((b > c && b > d) ? b : c > d ? c
                                                                         : d);
}