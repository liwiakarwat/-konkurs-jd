#include <iostream>

using namespace std;

int main()
{
    string a;
    cin >> a;
    long long int b=1, c;
    for(int i=0; i<a.size(); i++)
    {
        c=a[i];

        if(c%2==0){
            b=0; break;
        }

    }
    if(b==0){
        cout << "Tak";
    }
    else
        cout << "Nie";
    return 0;
}
