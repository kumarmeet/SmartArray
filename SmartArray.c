#include <stdio.h>
#include <stdlib.h>
typedef struct
{
    int arr_stored_elements;
    int arr_total_capacity;
    int arr[];
} SmartArray;

// for creating smart array
void create_array(SmartArray *name, int length);
//store values only left aligned | should not store value any where
void input(SmartArray *name, int value, int index_number);
void print_element(SmartArray *name, int index_number);
void insert_element_on_index(SmartArray *name, int index_number, int value);
void delete_element_to_index(SmartArray *name, int index_number);
int stored_elements(SmartArray *str_ele); //have to check how many value entered in array!!!
int total_capacity(SmartArray *name);

int main()
{
    SmartArray arr;

    create_array(&arr, 3);
    input(&arr, 4,0);
    input(&arr, 7,1);
    input(&arr, 6,2);

    print_element(&arr,0);
    print_element(&arr,1);
    print_element(&arr,2);

    printf("After change\n");
    insert_element_on_index(&arr,1,99);

    print_element(&arr,0);
    print_element(&arr,1);
    print_element(&arr,2);
    print_element(&arr,3);

    return 0;
}

void insert_element_on_index(SmartArray *name, int index_number, int value)
{
    int i;
    name->arr_total_capacity++;
    name->arr[name->arr_total_capacity];

    for (i = total_capacity(name); i >= index_number; i--)
    {
         name->arr[i] = name->arr[i - 1] ;
    }

    input(name,value, index_number);
}

void delete_element_to_index(SmartArray *name, int index_number)
{
    int i;
    name->arr_total_capacity--;
    name->arr[name->arr_total_capacity];

    for (i = index_number; i < name->arr_total_capacity; i++)
    {
        name->arr[index_number] = name->arr[index_number + 1];
    }
}

void input(SmartArray *name, int value, int index_number)
{
    if(index_number < name->arr_total_capacity)
    {
        name->arr[index_number] = value;
        name->arr_stored_elements++;
    }
    else
    {
        printf("Please check your array size, Your array size is different");
        exit(0);
    }
}

void print_element(SmartArray *name, int index_number)
{
    if (index_number < name->arr_total_capacity)
    {
        printf("Element %d is %d\n", index_number, name->arr[index_number]);
    }
    else
    {
        printf("You can't access more than your array size");
        exit(0);
    }
}

void create_array(SmartArray *name, int length)
{
    name->arr_total_capacity = length;

    if (name->arr_total_capacity < 1)
    {
        printf("Invalid input!!!");
        exit(0);
    }
    else
    {
        name->arr[name->arr_total_capacity];
        printf("Your array is created with capacity of %d\n", length);
        name->arr_stored_elements=0;
    }
}

int stored_elements(SmartArray *str_ele)
{

    if (str_ele->arr_total_capacity < 1)
        return str_ele->arr_stored_elements = 0;

    return str_ele->arr_stored_elements;
}

int total_capacity(SmartArray *name)
{
    if(name->arr_total_capacity < 1)
        return name->arr_total_capacity = 0;

    return name->arr_total_capacity;
}

