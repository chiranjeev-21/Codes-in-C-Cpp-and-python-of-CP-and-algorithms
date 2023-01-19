#include<bits/stdc++.h>
using namespace std;

template<typename T>
void pop_front(std::vector<T> &v)
{
    if (v.size() > 0) {
        v.erase(v.begin());
    }
}


int main(){
    vector<int> v;
    v.push_back(1);//Insert element 1.
    v.push_back(1);//Insert element 2.
    v.push_back(0);//Insert element 1.
    v.push_back(1);
    //Now the vector(v) has 2 elements in it, with size 2

    pop_front(v); // This method will remove the first element

    for(int i=0;i<v.size();i++){
        cout << v[i] << " ";
    }
    //Prints [1]
    return 0;
}