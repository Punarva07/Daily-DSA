#include <iostream>
#include <vector>
using namespace std;
//CodeHelp- Love Babbar
int main()
{
    vector <int> v;

   /* vector <int> vec(5,1); // 5 is the size and 1 in initialized as every element
    cout<<"print vd: "<<endl;

    for(int i:vec) // This is how you print a vector
    {
        cout<<i<<" ";
    }cout<<endl;
*/
    cout<<"Capacity: "<<v.capacity()<<endl;

    v.push_back(3);  // Inserting an element
    cout<<"Capacity: "<<v.capacity()<<endl;

    
    v.push_back(5);
    cout<<"Capacity: "<<v.capacity()<<endl;

    
    v.push_back(4);
    cout<<"Capacity: "<<v.capacity()<<endl;
    cout<<"Size: "<<v.size()<<endl;

    cout<<"Element at 2nd index: "<< v.at(2)<<endl;

    cout<<"front: "<< v.front()<<endl;
    cout<<"back: "<< v.back()<<endl;

    cout<<"before pop: "<<endl;
    for(int i:v) // This is how you print a vector
    {
        cout<<i<<" ";
    }
    cout<<endl;
    v.pop_back();

    cout<<"after pop: "<<endl;
    for(int i:v)
    {
        cout<<i<<" ";
    }
    cout<<endl;

    cout<<"Before Clear size: "<<v.size()<<endl;
    v.clear(); //size becomes zero, not capacity
    cout<<"After Clear size: "<<v.size()<<endl;

}