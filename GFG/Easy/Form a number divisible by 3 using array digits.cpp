// If sum of the number is divisible by 3 then some of the arrangement of the number is also divisible by 3.

// But if sum of the number is not divisible by 3 then whatever the arrangement we make it will not divisible by 3.

int isPossible(int N, int arr[])
{
    int sum = 0;
    for (int i = 0; i < N; i++)
        sum += arr[i];
    return sum % 3 == 0 ? 1 : 0;
}