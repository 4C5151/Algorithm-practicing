#include <iostream>

using namespace std;
void insertion_sort(int ped[])
{
    int j=0;
    int temp;
    int last;
    for (j=1; j<10;j++)
    {
        last=j-1;
        temp=ped[j];
        while (last>=0 && ped[last]>temp)
        {
            ped[last+1]=ped[last];
            last--;
        }
        ped[last+1]=temp;
    }
    for (int k=0;k<10;k++)
    {
        cout << ped[k] <<' ';
    }
}
int main()
{
    int df[10],n;
    for (int i=0;i<10;i++)
    {
        cin >> df[i];
    }
    insertion_sort(df);
    return 0;
}
