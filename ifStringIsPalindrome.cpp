#include<iostream>
using namespace std;

int getLength(char name[])
{
  int count = 0;
  for(int i = 0 ; name[i] != 0 ; i++)
  {
    count++;
  }
  return count;
}

char upperToLower(char s)
{
    if(s >= 'A' && s <= 'Z')
    {
        char temp = s + 32;
        return temp;
    }
    else{
        return s;
    }
}

bool palindrome(char name[] , int length)
{
    int start = 0 , end = length-1;
    while(start<=end)
    {
        if(upperToLower( name[start] ) != upperToLower( name[end] ))
        {
            return 0;
        }
        else{
            start++;
            end--;
        }
    }
    return 1;
}

int main()
{
    cout<<"Enter your name "<<endl;
    char name[30];
    cin>>name;
    cout<<"Your name is " <<name <<endl;
      int length = getLength(name);
       cout<<"the length of your name is : " <<length <<endl;
   cout<<"your palindrome is " << palindrome(name , length );
}