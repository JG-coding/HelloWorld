#incude <iostream>
using namespace std;

void sort(int arr[], int size)
{
    int tmp = 0;
    for(int i = 0; i < size - 1; i++)
    {
        for(int j = 0; j < size - 1 - i; j++)
        {
            if(arr[j] > arr[j+1])
            {
                tmp = arr[j];
                arr[j] = arr[j + 1];
                arr[j+1] = tmp;
            }
        }
    }
}


int main()
{
    //linux�����ע��
    int arr[] = {12,55,66,77,1,3};
    int size = sizeof(arr)/sizeof(arr[0]);
    sort(arr,size);
    
    return 0;
}