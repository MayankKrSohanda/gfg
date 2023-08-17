#include<iostream>
#include<vector>
using namespace std;

void task2(int a[], int size, int index, int num)
{
    int i;
    vector<int> res;
    for(i=0;i<size;i++) {
        if(i==index)                        //Matches the index
            res.push_back(num);             //If true we push desired number to the vector
        res.push_back(a[i]);               
    }
    if(index>=i)                            //If the index is out of array bound
        res.push_back(num);                 //We push the desired number at last
    for(i=0;i<res.size();i++) {
        cout<<res[i]<<" ";
    }
}

int main()
{
    int a[] = {1, 2, 3, 4, 5, 6};
    int index, num, size;
    size = sizeof(a) / sizeof(a[0]);
    cout << "Enter Index: ";
    cin >> index;
    cout << "Enter Number: ";
    cin >> num;
    task2(a, size, index, num);
    return 0;
}