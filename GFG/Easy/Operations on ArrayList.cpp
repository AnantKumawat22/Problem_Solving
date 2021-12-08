public
static void insert(ArrayList<Integer> list, int x)
{
    list.add(x);
}

public
static void IncOrder(ArrayList<Integer> list)
{
    Collections.sort(list);
}

public
static void Search(ArrayList<Integer> list, int val)
{

    int flag = -1;
    for (int i = 0; i < list.size(); i++)
    {
        if (val == list.get(i))
        {
            System.out.println(i);
            flag = 1;
            break;
        }
    }
    if (flag == -1)
    {
        System.out.println("-1");
    }
}

public
static void DecOrder(ArrayList<Integer> list)
{
    Collections.sort(list, Collections.reverseOrder());
}