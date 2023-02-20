#include<iostream>
#include<vector>
using namespace std;

int main()
{

    vector<int> v;
    cout<<"in starting size of vector is : " <<v.size() <<endl;

    //INSETING ELEMENTS IN AN VECTOR:
     v.push_back(10);
   cout<<"the starting element is : " << v.at(0);
   cout<<"\nnow the size of vector is : " << v.size() <<endl;

   v.push_back(20);
   v.push_back(30);
   v.push_back(40);
   v.push_back(50);
   cout<<v.at(1) <<endl;
   cout<<v.at(2)<<endl;
   cout<<v.at(3)<<endl;
   cout<<v.at(4)<<endl;
   cout<<"Current size is : " <<v.size();


   //REMOPVING ELEMENTS FROM THE VECTOR
   cout<<"\n now removing elements from the vector " <<endl;
    v.pop_back();
    cout<<"NOW after 1 pop size of vector is : " <<v.size() <<endl;
    cout<<"THE CAPACITY OF THE ARRAY THE VECTOR IS : " <<v.capacity() <<endl;
}