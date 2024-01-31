#include<iostReam>
using namespace std;

int main()
{
    int n;
    cout << "Enter the size of array: ";
    cin >> n;
    int a[n];
    cout << "Enter the elements:\n";
    for(int i = 0;i < n; i++)
    {
        cin >> a[i];
    }
    int x;
    cout << "Enter the number to be searched: ";
    cin >> x;
    int m =0,o= n-1, comp = 0;
    while (m <= o)
    {
        int v = m + (o - m)/2;
        comp ++;

        if(a[v] == x)
        {
            cout << "Element found at: " << v+1<< endl;
            break;
        }else if( a[v] < x)
        {
            m = v + 1;
        }else{
            o = v - 1;
        }
    }
    cout << "number of comparisons made: " << comp << endl;
}
