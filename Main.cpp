#include <iostream>

using namespace std;

class MathematicsX
{
    public:
        void Display(int*,int);
};

void MathematicsX::Display(int* iArr, int iLength)
{
    for(int j = 0; j < iLength; j++)
    {
        if(iArr[j] % 11 == 0)
        {   
            cout<<iArr[j]<<"\t";
        }
    }

    cout<<endl;
}

int main()
{
    int iSize = 0;
    int *p = NULL;

    cout<<"Enter Count of Elements"<<endl;
    cin>>iSize;

    p = new int[iSize];

    if(p == NULL)
    {
        cout<<"Unable to Allocate Memory"<<endl;
        return -1;
    }

    cout<<"Enter "<<iSize<<" Elements"<<endl;

    for(int i = 0; i < iSize; i++)
    {
        cin>>p[i];
    }

    MathematicsX mobj;

    mobj.Display(p,iSize);

    delete(p);

    return 0;
}