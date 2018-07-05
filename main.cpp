#include <iostream>

using namespace std;

int main()
{int a,b,c,ua,ub,uc,pa,pb,pc,t;
    cout<<"Introduceti numarul a:";
    cin>>a;
    cout<<"Introduceti numarul b:";
    cin>>b;
    cout<<"Introduceti numarul c:";
    cin>>c;
    pa=a%10;
    pb=b%10;
    pc=c%10;
    ua=a/10%10;
    ub=b/10%10;
    uc=c/10%10;
    cout<<endl<<endl<<"                     Rezultate:"<<endl<<"==============================================="<<endl<<endl;
    cout<<endl<<endl<<"Primul numar este:"<<ua<<ub<<uc<<endl<<"Ultimul numar este:"<<pa<<pb<<pc<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
    return 0;
}
