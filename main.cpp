#include <iostream>

using namespace std;

int main()
{
    float mid,root,x;
    cout << "A program to Get Squareroot of a number!" << endl;
    cout<<"Enter a number to calculate its squareroot\n";
    cin>>x;
    //get the  value at the center of the number endered by the user
    root = x/2;

    mid = 0;//this value is looped until it is mid-1

    while (root != mid)//loop until root is greater than mid by 1
    {
        mid = root;

        root = (x /mid+mid)/2;//get the root


    }
    cout<<root;

    return 0;
}
