#include <iostream>

using namespace std;

int main()
{
    int arr[7]={4,8,3,6,2,5,7};
    int temp;


    for(int i=0;i<7;i++)
    {
        cout << arr[i] << " ";
    }
    for(int x=0;x<7;x++)
    {
        for(int y=0;y<7;y++)
        {
            if(arr[y+1]>arr[y]) //descending
            {
                temp=arr[y+1];
                arr[y+1]=arr[y];
                arr[y]=temp;
            }
        }
    }
    cout << endl;
     for(int i=0;i<7;i++)
        {
            cout << arr[i] << " ";
        }
}

