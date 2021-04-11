#include <stdio.h>
#include <stdlib.h>
typedef struct
{
    int arr_stored_elements;
    int arr_total_capacity;
    int arr[];
} SmartArray;

void create_array(int length);           // for creating smart array
void input(int value, int index_number); //store values only left aligned | should not store value any where
void print_element(int index_number);
void insert_element_on_index(int index_number, int value);
void delete_element_to_index(int index_number);
int stored_elements(); //have to check how many value entered in array!!!
int total_capacity();

int main(void)
{
    create_array(1);
    input(4, 0);
    input(7, 1);
    input(48, 2);
    print_element(0);
    print_element(1);
    print_element(2);

    printf("%d", stored_elements());

    return 0;
}

void insert_element_on_index(int index_number, int value)
{
    SmartArray *ele;

    int i, temp;
    ele->arr_total_capacity++;
    ele->arr[ele->arr_total_capacity];

    for (i = index_number; i < ele->arr_total_capacity; i++)
    {
        temp = ele->arr[i];
        ele->arr[i + i] = ele->arr[i];
        ele->arr[i] = temp;
    }

    ele->arr[index_number] = value;
}

void create_array(int length)
{
    SmartArray *size;
    size->arr_total_capacity = length;

    if (size->arr_total_capacity < 1)
    {
        printf("Invalid input!!!");
        exit(0);
    }
    else
    {
        size->arr[size->arr_total_capacity];
        printf("Your array is created with capacity of %d\n", size->arr_total_capacity);
        size->arr_stored_elements = 0;
    }
}

void input(int value, int index_number)
{
    SmartArray *input;
    int i;
    i = 0;

    if (input->arr_total_capacity > 0)
    {
        input->arr[index_number] = value;
        ++i;
    }
    input->arr_stored_elements = i;
}

void print_element(int index_number)
{
    SmartArray *print;

    if (print->arr_total_capacity > 0)
    {
        printf("Element %d is %d\n", index_number, print->arr[index_number]);
    }
}

int stored_elements()
{
    SmartArray *str_ele;

    if (str_ele->arr_total_capacity < 1)
        return str_ele->arr_stored_elements = 0;

    return str_ele->arr_stored_elements;
}
