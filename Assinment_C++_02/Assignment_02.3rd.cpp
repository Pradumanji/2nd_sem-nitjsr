/*NAME -PRADUMAN
REG NO- 2021PGCACA001
3) Write a C++ program with following inline function.
     i. Verifying Ideal gas law (Chemistry)
     ii. To compute buoyant force using archimedes principle
     iii. Final displacement using newton’s first law of motion
     iv. To compute a XOR b
*/
#include <iostream>
using namespace std;
const float R=8.314;
const float G=9.8;

inline int gas_law(float pressure,float vol,int moles,float temp)
{
    if( pressure*vol == moles*R*temp )
        return 1;
    else
        return 0;

}

inline float buoyant_force(float density,float volume)
{
    float f = density*volume*G;
    return f;
}

inline float displacement(float u,float t,float a)
{
    float s = u*t+(a*t*t)/2;
    return s;
}

inline int find_xor(int a,int b)
{
    return a^b;
}

int main()
{
    int ch,no;

    while(1)
    {
        cout<<"\n**********************MENU************************\n"<<endl;
        cout<<" 1) IDEAL GAS LAW : "<<endl;
        cout<<" 2) BUOYANT FORCE : "<<endl;
        cout<<" 3) DISPLACEMENT : "<<endl;
        cout<<" 4) XOR OPERATION : "<<endl;
        cout<<" 5) EXIT. "<<endl;
        cout<<"\n ENTER YOUR CHOICE : ";
        cin>>ch;
        switch(ch)
        {
        case 1:
            float p,v,n,t,check;
            cout<<"\n ENTER PRESSURE,VOLUME,NO OF MOLES AND TEMPERATURE = ";
            cin>>p>>v>>n>>t;
            check = gas_law(p,v,n,t);
            if(check==1)
                cout<<" IDEAL GAS"<<endl;
            else
                cout<<" NOT IDEAL GAS"<<endl;
            break;
        case 2:
            int d,vol;
            float force;
            cout<<" ENTER DENSITY AND VOLUME : ";
            cin>>d>>vol;
            force = buoyant_force(d,vol);
            cout<<" BUOYANT FORCE="<<force<<endl;
            break;
        case 3:
            float speed,time,acc;
            float dis;
            cout<<"\n ENTER SPEED,TIME AND ACCELERATION : ";
            cin>>speed>>time>>acc;
            dis = displacement(speed,time,acc);
            cout<<" DISPLACEMENT = "<< dis <<endl;
            break;
        case 4:
            int a,b,result;
            cout<<" ENTER TWO NUMBER : ";
            cin>>a>>b;
            result=find_xor(a,b);
            cout<<" XOR = "<<result<<endl;
            break;
        case 5:
            return 0;
        default:
            cout<<" WRONG CHOICE:"<<endl;
        }

    }

    return 0;
}
