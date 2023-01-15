#include<iostream>
using namespace std;

void countingSort(int a[] , int key)
{   
    int count[key] = {0};
    for(int i = 0 ; i<17 ; i++)
    {
        ++count[a[i]];
    }

    for(int i = 1 ; i<=key ; i++)
    {
        count[i] = count[i]+ count[i-1];
    }
   int b[17];
    for(int i = 17-1 ; i>=0 ; i--)
    {
        b[--count[a[i]]] = a[i];
    }
    for(int i = 0 ; i<17 ; i++)
    {                            // THIS LOOP IS FOR COPY THE ELEMENTS OF b ARRAY IN a AARAY
        a[i] = b[i];
        cout<<"AFTER SORTING OUR ARRAY IS : \t" <<a[i] <<endl;
    }
     

}

int main()
{

int a[17] = {5 , 12 ,1 ,1 , 3 , 17 , 1 , 5 , 5 , 4 , 9 , 10 , 7 , 1 ,2 ,2 ,2};
int key = 10;
  countingSort(a, key);
  
 
}