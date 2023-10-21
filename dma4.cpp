//search an element using binary search using dma in class
#include<iostream>
using namespace std;
class Array
{
    int *arr;
    int size;
public:
    void get_data(int n)
    {
        size=n;
        arr=new int[size];
        cout<<"Enter the elements: ";
        for(int i=0;i<size;i++)
        {
            cin>>arr[i];
        }
    }
    void binary_search()
    {
        int a,loc=-1;
        cout<<"\nEnter the element you want to search: ";
        cin>>a;
        int beg=0;
        int last=size-1;
        for(int i=0;i<size;i++)
        {
            int mid=(beg+last)/2;
            if(arr[mid]==a)
            {
                loc=mid;
                break;
            }
            else
            {
                if(arr[mid]>a)
                {
                    last=mid-1;
                }
                else if(arr[mid]<a)
                {
                    beg=mid+1;
                }
            }
        }
        if(loc!=-1)
        {
            cout<<"\nElement found at: "<<loc+1;
        }
        else
        {
            cout<<"\nElement not found";
        }
    }
    ~Array()
    {
        delete []arr;
        cout<<"\nMemory deallocated";
    }
};
int main()
{
    Array a;
    int n;
    cout<<"Enter the no. of elements: ";
    cin>>n;
    a.get_data(n);
    a.binary_search();
    return 0;
}
