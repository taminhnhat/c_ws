int factorial(int num)
{
    if (num < 0)
        return -1;
    int res = 1;
    while (num > 0)
    {
        res *= num;
        num--;
    }
    return res;
}