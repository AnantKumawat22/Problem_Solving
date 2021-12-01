ArrayList<Integer> arrlist = new ArrayList<Integer>(2);
int max = b[0], sum = 0;

for (int cur : b)
    max = Math.max(max, cur);
for (int i = 0; i < n; i++)
{
    sum += a[i][i];
}
arrlist.add(sum);
arrlist.add(max);
return arrlist;