#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;


void buildArray(int arr[],int size)
{
  srand(time(NULL));
  for (int i=0;i<size;i++)
  {
    arr[i]=rand() % 100+1;
  }
}


void display(int arr[], int size)
{
  for(int i=0;i<size;i++)
  {
    cout<<arr[i]<<" ";
  }
}


void swap(int* num1,int* num2)
{
  int temp=*num1;
  *num1=*num2;
  *num2=temp;
}

void exchangeSort(int arr[], int size)
{
  for (int i=0;i<size-1;i++)
  {
    for(int j=i+1;j<size;j++)
    {
      if(arr[i]>arr[j])
      {
        swap(&arr[i],&arr[j]);
      }
    }
  }
}

int main()
{
  const int size=10;
  int numbers[size];
  buildArray(numbers,size);
  display(numbers,size);
  cout<<"after sort"<<endl;
  exchangeSort(numbers,size);
  display(numbers,size);
  return 0;
}
