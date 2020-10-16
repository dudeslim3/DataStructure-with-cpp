#include<iostream>
using namespace std;

int maxsize;

void BubbleSort(int *a, int n)
{
    cout<<"\nBubble Sorting:"<<endl;
    int i,j,temp;

    for(i=0; i<n-1; i++)
    {
        for(j=0; j<n-1-i;j++)
        {
            if(a[j+1]<a[j])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }

    }
}

void SelectionSort(int *a, int n)
{
    cout<<"\nSelection Sorting:"<<endl;
    int i,j,key,temp;

    for(i=0; i<n-1; i++)
    {
        key=i;

        for(j=i+1; j<=n-1; j++)
        {
            if(a[key]>a[j])
            {
                key=j;
            }
        }

        temp=a[i];
        a[i]=a[key];
        a[key]=temp;
    }
}


void InsertionSort(int *a, int n)
{
    cout<<"\nInsertion Sorting:"<<endl;
    int i,j,temp;

    for(i=1; i<n; i++)
    {
        temp=a[i];
        j=i-1;

        while(j>=0 && a[j]>temp)
        {
            a[j+1]=a[j];
            j=j-1;
        }
        a[j+1]=temp;
    }
}

void MergeArray(int *a, int low, int high, int mid)
{
    int i=low;
    int j=mid+1;
    int k=0;
    int temp[maxsize];

    while(i<=mid && j<=high)
    {
        if(a[i]<=a[j])
        {
            temp[k++]=a[i++];
        }
        else
        {
            temp[k++]=a[j++];
        }
    }

    while(i<=mid)
    {
        temp[k++]=a[i++];
    }

    while(j<=high)
    {
        temp[k++]=a[j++];
    }

    k=0;
    for(i=low;i<=high; i++)
    {
        a[i]=temp[k++];
    }
}

void MergeSorting(int *a, int l, int h)
{
    int mid;

    if(l<h)
    {
      mid=(l+h)/2;

      MergeSorting(a,l,mid);
      MergeSorting(a,mid+1,h);

      MergeArray(a,l,h,mid);
    }

}


int main()
{
    int size,i;
    cout<<"Enter Size of Array"<<endl;
    cin>>size;
    maxsize=size;

    int arr[size];

    cout<<"Enter Array Elements"<<endl;
    for(i=0; i<size; i++)
    {
        cin>>arr[i];
    }

    cout<<"Array Before Sorting"<<endl;
    for(i=0; i<size; i++)
    {
        cout<<arr[i]<<"\t";
    }
    cout<<endl;

    //BubbleSort(arr, size);
    //SelectionSort(arr,size);
    InsertionSort(arr,size);
    //MergeSorting(arr,0,size-1);


    for(i=0; i<size; i++)
    {
        cout<<arr[i]<<"\t";
    }

    return 0;
}
