#include<iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number of testcase: ";
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        int b;
        cout << " Enter the number of elements: ";
        cin >> b;
        int i[b];
        for(int j = 0; j < b; j++)
        {
            cin >> i[j];
        }
        int x;
        cout << " Enter the element to be searched: ";
        cin >> x;
        int k;
        for (k = 0; k < b; k++)
        {
            if( x == i[k])
            {
                cout << "Element found at: " << k+1 << endl;
                break;
            }
        }
        if( k == b)
        {
            cout << "Element not found" << endl;
        }
    }
}
