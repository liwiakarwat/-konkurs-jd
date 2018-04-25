#include <iostream>

using namespace std;

int main()
{
    int b;
    string a, c, d;
    cin >> b;
    for(int j=0; j<b; j++){
        cin >> a >> c;
        for(int i=0; i<a.size(); i++){
        if(a[i]==c[i] || c[i]==42){
            d="ok";
        }
        else{
            d="error";
            break;
        }
    }
    cout << d << endl;
    }

    return 0;
}
