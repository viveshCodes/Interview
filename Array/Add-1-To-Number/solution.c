int* plusOne(int* number, int size, int *len1)
{
    *len1 = size;
    int* result = calloc(size+1, sizeof(int));
    int carry = 1;
    int i = size-1;
    for (i=size-1; i >= 0; i--)
    {
        int sum = number[i]+carry;
        carry = sum/10;
        result[i] = result[i]+sum%10;
    }
    
    if (carry == 0) 
    {
        while (result[0] == 0) 
        {
            *len1 -= 1;
            result++;
        }
    }
    else
    {
        *len1 = size+1;
        for (i = size; i > 0; i--)
        {
            result[i] = result[i-1];
        }
        result[0] = carry;
    }
    
    return result;
}