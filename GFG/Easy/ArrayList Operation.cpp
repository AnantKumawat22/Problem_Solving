public
static void insert(ArrayList<Character> clist, char c)
{
    clist.add(c);
}
public
static void freq(ArrayList<Character> clist, char c)
{

    int fre = Collections.frequency(clist, c);
    if (fre != 0)
        System.out.println(fre);
    else
        System.out.println("Not Present");
}