//print frequency of array each element
void frequency_array_element(int a[], int range)
{
    int i, j, f;

    for(i = 0; i <= range - 1; i++)
        scanf("%d", &a[i]);

    for(i = 0; i <= range - 1; i++)
    {
        for(j = i + 1; j <= range -1; j++)
        {
          if(a[i] == a[j])
          {
            f++;
            continue;
          }
        }

        if(j == range)
        {
          printf("%d", f);
        }
    }
}

//find distinct element of an array
void distinct_element(int a[], int range)
{
    int i, j;

    for(i = 0; i <= range - 1; i++)
        scanf("%d", &a[i]);

    for(i = 0; i <= range - 1; i++)
    {
        for(j = i + 1; j <= range -1; j++)
        {
          if(a[i] == a[j])
          {
            break;
          }
        }

        if(j == range)
        {
          printf("%d", a[i]);
        }
    }
}

//find smallest element index of an array
void small_element_index(int a[], int range)
{
    int i, min = 10000, index = 0;

    for(i = 0; i <= range - 1; i++)
        scanf("%d", &a[i]);

    for(i = 0; i <= range - 1; i++)
    {
        if(a[i] < min)
        {
            min = a[i];
            index = i;
        }
    }

    printf("Index position of smallest element -> %d", index);
}


//ascending order sort array
void sort_array(int a[], int range)
{
    int i, j, t;

    for(i = 0; i <= range - 1; i++)
        scanf("%d", &a[i]);

    for(i = 1; i <= range - 1; i++)
    {
        for(j = 0; j <= (range - 1) - i; j++)
        {
            if(a[i] > a[i + 1])
            {
                t = a[i];
                a[i] = a[i + 1];
                a[i + 1] = t;
            }
        }
    }

    for(i = 0; i <= range - 1; i++)
        printf("\n%d\t", a[i]);

}

//reverse array elements
void reverse_array(int arr[], int range)
{
    int i, t, l = range - 1;

    for(i = 0; i <= range - 1; i++)
        scanf("%d", &arr[i]);

    for(i = 0; i <= l; i++, l--)
    {
        t = arr[i];
        arr[i] = arr[l];
        arr[l] = t;
    }

    for(i = 0; i <= range - 1; i++)
        printf("\n%d\t", arr[i]);
}

//function rotate one element its right position
void rotate_right_one_position(int arr[], int range)
{
    int i, temp = 0, last = 0;

    for(i = 0; i <= range - 1; i++)
        scanf("%d", &arr[i]);

    last = arr[range - 1];

    for(i = range - 1; i > 0; i--)
        arr[i] = arr[i - 1];

    arr[0] = last;

    for(i = 0; i <= range - 1; i++)
        printf("\n%d\t", arr[i]);
}
