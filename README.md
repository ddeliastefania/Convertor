# Convertor
#include <iostream>
using namespace std;
int x;
void Lungime()
{
    int ValoareInput,ValoareOutput;
    float numar;
    long long Rezultat;
    cout<<"Unitati:"<<endl;
    cout<<"1.km"<<endl;
    cout<<"2.m"<<endl;
    cout<<"3.cm"<<endl;
    cout<<"4.mm"<<endl;
    cout<<"Introduceti unitatea de masura actuala a numarului: "<<endl;
    cin>>ValoareInput;
    cout<<"Introduceti unitatea la care doriti sa ajungeti  :"<<endl;
    cin>>ValoareOutput;
    cout<<"Introduceti numarul pe care doriti sa il transformati : "<<endl;
    cin>>numar;
    cout<<"Rezultatul este : ";
    switch(ValoareInput)
    {
    case 1:
    {
        switch(ValoareOutput)
        {
        case 1:
        {
            cout<<numar<<" km";
            break;
        }
        case 2:
        {
            cout<<numar;
            numar=numar*1000;
            cout<<" km = "<<numar<<" m ";
            break;
        }
        case 3:
        {
            cout<<numar;
            Rezultat=numar*100000;
            cout<<" km = "<<Rezultat<<" cm ";
            break;
        }
        case 4:
        {
            cout<<numar;
            Rezultat=numar*1000000;
            cout<<" km = "<<Rezultat<<" mm ";
            break;
        }
        break;
        }
    }
    break;
    case 2:
    {
        switch(ValoareOutput)
        {
        case 1:
        {
            cout<<numar;
            numar=numar*0.001;
            cout<<" m = "<<numar<<" km ";
            break;
        }
        case 2:
        {
            cout<<numar<<" m";
            break;
        }
        case 3:
        {
            cout<<numar;
            numar=numar*100;
            cout<<" m = "<<numar<<" cm ";
            break;
        }
        case 4:
        {
            cout<<numar;
            Rezultat=numar*1000;
            cout<<" m = "<<Rezultat<<" mm ";
            break;
        }
        break;
        }
    }
    break;
    case 3:
    {
        switch(ValoareOutput)
        {
        case 1:
        {
            cout<<numar;
            numar=numar*100;
            cout<<" cm = 0.0000000"<<numar<<" km ";
            break;
        }
        case 2:
        {
            cout<<numar;
            numar=numar/100;
            cout<<" cm = "<<numar<<" m ";
            break;
        }
        case 3:
        {
            cout<<numar<<" cm";
            break;
        }
        case 4:
        {
            cout<<numar;
            numar=numar*10;
            cout<<" cm = "<<numar<<" mm ";
            break;
        }
        break;
        }
    }
    break;
    case 4:
    {
        switch(ValoareOutput)
        {
        case 1:
        {
            cout<<numar;
            numar=numar*100;
            cout<<" mm = 0.00000000"<<numar<<" km ";
            break;
        }
        case 2:
        {
            cout<<numar;
            numar=numar/1000;
            cout<<" mm = "<<numar<<" m ";
            break;
        }
        case 3:
        {
            cout<<numar;
            numar=numar/10;
            cout<<" mm = "<<numar<<" cm ";
            break;
        }
        case 4:
        {
            cout<<numar<<" mm";
            break;
        }
        break;
        }
    }
    break;

    break;
    }

}
void Arie()
{
    int ValoareInput,ValoareOutput;
    float nr;
    long Rez;
    cout<<"Unitati:"<<endl;
    cout<<"1.km^2"<<endl;
    cout<<"2.m^2"<<endl;
    cout<<"3.cm^2"<<endl;
    cout<<"4.mm^2"<<endl;
    cout<<"Introduceti unitatea de masura actuala a numarului: "<<endl;
    cin>>ValoareInput;
    cout<<"Introduceti unitatea la care doriti sa ajungeti  :"<<endl;
    cin>>ValoareOutput;
    cout<<"Introduceti numarul pe care doriti sa il transformati : "<<endl;
    cin>>nr;
    cout<<"Rezultatul este : ";
    switch(ValoareInput)
    {
    case 1:
    {
        switch(ValoareOutput)
        {
        case 1:
        {
            cout<<nr<<" km^2";
            break;
        }
        case 2:
        {
            cout<<nr;
            Rez=nr*1000000;
            cout<<" km^2 = "<<Rez<<" m^2 ";
            break;
        }
        case 3:
        {
            cout<<nr;
            Rez=nr*10000000;
            cout<<" km^2 = "<<Rez<<"000 cm^2 ";
            break;
        }
        case 4:
        {
            cout<<nr;
            Rez=nr*1000000000;
            cout<<" km^2 = "<<Rez<<"000 mm^2 ";
            break;
        }
        break;
        }
    }
    break;
    case 2:
    {
        switch(ValoareOutput)
        {
        case 1:
        {
            cout<<nr;
            nr=nr*0.0000001;
            cout<<" m^2 = "<<nr<<" km^2 ";
            break;
        }
        case 2:
        {
            cout<<nr<<" m";
            break;
        }
        case 3:
        {
            cout<<nr;
            nr=nr*10000;
            cout<<" m = "<<nr<<" cm ";
            break;
        }
        case 4:
        {
            cout<<nr;
            nr=nr*1000000;
            cout<<" m = "<<nr<<" mm ";
            break;
        }
        break;
        }
    }
    break;
    case 3:
    {
        switch(ValoareOutput)
        {
        case 1:
        {
            cout<<nr;
            nr=nr/10000000;
            cout<<" cm^2 = "<<nr<<"000 km^2 ";
            break;
        }
        case 2:
        {
            cout<<nr;
            nr=nr/10000;
            cout<<" cm^2 = "<<nr<<" m^2 ";
            break;
        }
        case 3:
        {
            cout<<nr<<" cm^2";
            break;
        }
        case 4:
        {
            cout<<nr;
            nr=nr*100;
            cout<<" cm^2 = "<<nr<<" mm^2 ";
            break;
        }
        break;
        }
    }
    break;
    case 4:
    {
        switch(ValoareOutput)
        {
        case 1:
        {
            cout<<nr;
            nr=nr/1000000000;
            cout<<" mm^2 = "<<nr<<"000 km^2 ";
            break;
        }
        case 2:
        {
            cout<<nr;
            nr=nr/1000000;
            cout<<" mm^2 = "<<nr<<" m^2 ";
            break;
        }
        case 3:
        {
            cout<<nr;
            nr=nr/100;
            cout<<" mm^2 = "<<nr<<" cm^2 ";
            break;
        }
        case 4:
        {
            cout<<nr<<" mm^2";
            break;
        }
        break;
        }
    }
    break;

    break;
    }

}
void Volum()
{
    int ValoareInput,ValoareOutput;
    float VolumInitial;
    long long VolumFinal;
    cout<<"Unitati:"<<endl;
    cout<<"1.litri"<<endl;
    cout<<"2.m^3"<<endl;
    cout<<"3.cm^3"<<endl;
    cout<<"4.mm^3"<<endl;
    cout<<"Introduceti unitatea de masura actuala a numarului: "<<endl;
    cin>>ValoareInput;
    cout<<"Introduceti unitatea la care doriti sa ajungeti  :"<<endl;
    cin>>ValoareOutput;
    cout<<"Introduceti numarul pe care doriti sa il transformati : "<<endl;
    cin>>VolumInitial;
    cout<<"Rezultatul este : ";
    switch(ValoareInput)
    {
    case 1:
    {
        switch(ValoareOutput)
        {
        case 1:
        {
            cout<<VolumInitial<<" litri";
            break;
        }
        case 2:
        {
            cout<<VolumInitial;
            VolumInitial=VolumInitial/1000;
            cout<<" litri = "<<VolumInitial<<" m^3 ";
            break;
        }
        case 3:
        {
            cout<<VolumInitial;
            VolumInitial=VolumInitial*1000;
            cout<<" litri = "<<VolumInitial<<" cm^3 ";
            break;
        }
        case 4:
        {
            cout<<VolumInitial;
            VolumFinal=VolumInitial*1000000;
            cout<<" litri = "<<VolumFinal<<" mm^3 ";
            break;
        }
        break;
        }
    }
    break;
    case 2:
    {
        switch(ValoareOutput)
        {
        case 1:
        {
            cout<<VolumInitial;
            VolumInitial=VolumInitial*1000;
            cout<<" m^3 = "<<VolumInitial<<" litri ";
            break;
        }
        case 2:
        {
            cout<<VolumInitial<<" m^3";
            break;
        }
        case 3:
        {
            cout<<VolumInitial;
            VolumFinal=VolumInitial*1000000;
            cout<<" m^3 = "<<VolumFinal<<" cm^3 ";
            break;
        }
        case 4:
        {
            cout<<VolumInitial;
            VolumFinal=VolumInitial*1000000;
            cout<<" m^3 = "<<VolumFinal<<"000 mm^3 ";
            break;
        }
        break;
        }
    }
    break;
    case 3:
    {
        switch(ValoareOutput)
        {
        case 1:
        {
            cout<<VolumInitial;
            VolumInitial=VolumInitial/1000;
            cout<<" cm^2 = "<<VolumInitial<<" litri ";
            break;
        }
        case 2:
        {
            cout<<VolumInitial;
            VolumInitial=VolumInitial/1000000;
            cout<<" cm^2 = "<<VolumInitial<<" m^3 ";
            break;
        }
        case 3:
        {
            cout<<VolumInitial<<" cm^3";
            break;
        }
        case 4:
        {
            cout<<VolumInitial;
            VolumInitial=VolumInitial*1000;
            cout<<" cm^3 = "<<VolumInitial<<" mm^3 ";
            break;
        }
        break;
        }
    }
    break;
    case 4:
    {
        switch(ValoareOutput)
        {
        case 1:
        {
            cout<<VolumInitial;
            VolumInitial=VolumInitial/1000000;
            cout<<" mm^3 = "<<VolumInitial<<" litri ";
            break;
        }
        case 2:
        {
            cout<<VolumInitial;
            VolumInitial=VolumInitial/1000000000;
            cout<<" mm^3 = "<<VolumInitial<<" m^3 ";
            break;
        }
        case 3:
        {
            cout<<VolumInitial;
            VolumInitial=VolumInitial/1000;
            cout<<" mm^3 = "<<VolumInitial<<" cm^3 ";
            break;
        }
        case 4:
        {
            cout<<VolumInitial<<" mm^3";
            break;
        }
        break;
        }
    }
    break;

    break;
    }
}
void Timp()
{
    int ValoareIn,ValoareOut;
    float timp;
    cout<<"Unitati:"<<endl;
    cout<<"1.h"<<endl;
    cout<<"2.min"<<endl;
    cout<<"3.sec"<<endl;
    cout<<"Introduceti unitatea de masura actuala a numarului: "<<endl;
    cin>>ValoareIn;
    cout<<"Introduceti unitatea la care doriti sa ajungeti  :"<<endl;
    cin>>ValoareOut;
    cout<<"Introduceti numarul pe care doriti sa il transformati : "<<endl;
    cin>>timp;
    cout<<"Rezultatul este : ";
    switch(ValoareIn)
    {
    case 1:
    {
        switch(ValoareOut)
        {
        case 1:
        {
            cout<<timp<<" ore";
            break;
        }
        case 2:
        {
            cout<<timp;
            timp=timp*60;
            cout<<" ore = "<<timp<<" minute ";
            break;
        }
        case 3:
        {
            cout<<timp;
            timp=timp*3600;
            cout<<" ore = "<<timp<<" secunde ";
            break;
        }
        break;
        }
    }
    break;
    case 2:
    {
        switch(ValoareOut)
        {
        case 1:
        {
            cout<<timp;
            timp=timp/60;
            cout<<" minute = "<<timp<<" ore ";
            break;
        }
        case 2:
        {
            cout<<timp<<" minute";
            break;
        }
        case 3:
        {
            cout<<timp;
            timp=timp*60;
            cout<<" minute = "<<timp<<" secunde ";
            break;
        }
        break;
        }
    }
    break;
    case 3:
    {
        switch(ValoareOut)
        {
        case 1:
        {
            cout<<timp;
            timp=timp/3600;
            cout<<" secunde = "<<timp<<" ore ";
            break;
        }
        case 2:
        {
            cout<<timp;
            timp=timp/60;
            cout<<" secunde = "<<timp<<" minute ";
            break;
        }
        case 3:
        {
            cout<<timp<<" secunde";
            break;
        }
        break;
        }
    }
    break;
    }
}
void Viteza()
{
    int ValoareIn,ValoareOut;
    float vit;
    cout<<"Unitati:"<<endl;
    cout<<"1.km/h"<<endl;
    cout<<"2.mph"<<endl;
    cout<<"3.m/s"<<endl;
    cout<<"Introduceti unitatea de masura actuala a numarului: "<<endl;
    cin>>ValoareIn;
    cout<<"Introduceti unitatea la care doriti sa ajungeti  :"<<endl;
    cin>>ValoareOut;
    cout<<"Introduceti numarul pe care doriti sa il transformati : "<<endl;
    cin>>vit;
    cout<<"Rezultatul este: ";
    switch(ValoareIn)
    {
    case 1:
    {
        switch(ValoareOut)
        {
        case 1:
        {
            cout<<vit<<" km/h";
            break;
        }
        case 2:
        {
            cout<<vit;
            vit=vit/1.609;
            cout<<" km/h = "<<vit<<" mph ";
            break;
        }
        case 3:
        {
            cout<<vit;
            vit=vit/3.6;
            cout<<" km/h = "<<vit<<" m/s ";
            break;
        }
        break;
        }
    }
    break;
    case 2:
    {
        switch(ValoareOut)
        {
        case 1:
        {
            cout<<vit;
            vit=vit*1.609;
            cout<<" mph = "<<vit<<" km/h ";
            break;
        }
        case 2:
        {
            cout<<vit<<" mph";
            break;
        }
        case 3:
        {
            cout<<vit;
            vit=vit/2.236;
            cout<<" mph = "<<vit<<" m/s ";
            break;
        }
        break;
        }
    }
    break;
    case 3:
    {
        switch(ValoareOut)
        {
        case 1:
        {
            cout<<vit;
            vit=vit*3.599;
            cout<<" m/s = "<<vit<<" km/h ";
            break;
        }
        case 2:
        {
            cout<<vit;
            vit=vit*2.236;
            cout<<" m/s = "<<vit<<" mph ";
            break;
        }
        case 3:
        {
            cout<<vit<<" m/s";
            break;
        }
        break;
        }
    }
    break;
    }
}
void Temperatura()
{
    int ValoareIn,ValoareOut;
    float temp;
    cout<<"Unitati:"<<endl;
    cout<<"1.Celsius"<<endl;
    cout<<"2.Fahrenheit"<<endl;
    cout<<"3.Kelvin"<<endl;
    cout<<"Introduceti unitatea de transformat: "<<endl;
    cin>>ValoareIn;
    cout<<"Introduceti unitatea in care se efectueaza transformarea:"<<endl;
    cin>>ValoareOut;
    cout<<"Introduceti cantitatea de transformat: "<<endl;
    cin>>temp;
    cout<<"Rezultatul este: ";
    switch(ValoareIn)
    {
    case 1:
    {
        switch(ValoareOut)
        {
        case 1:
        {
            cout<<temp<<" grade Celsius";
            break;
        }
        case 2:
        {
            cout<<temp;
            temp=(temp*1.8)+32;
            cout<<" grade Celsius = "<<temp<<" grade Fahrenheit ";
            break;
        }
        case 3:
        {
            cout<<temp;
            temp=temp+273.15;
            cout<<" grade Celsius = "<<temp<<" grade Kelvin ";
            break;
        }
        break;
        }
    }
    break;
    case 2:
    {
        switch(ValoareOut)
        {
        case 1:
        {
            cout<<temp;
            temp=(temp-32)/1.8;
            cout<<" grade Fahrenheit = "<<temp<<" grade Celsius ";
            break;
        }
        case 2:
        {
            cout<<temp<<" grade Fahrenheit";
            break;
        }
        case 3:
        {
            cout<<temp;
            temp=temp+(459.67)*5/9;
            cout<<" grade Fahrenheit = "<<temp<<" grade Kelvin ";
            break;
        }
        break;
        }
    }
    break;
    case 3:
    {
        switch(ValoareOut)
        {
        case 1:
        {
            cout<<temp;
            temp=temp*273.15;
            cout<<" grade Kelvin = "<<temp<<" grade Celsius ";
            break;
        }
        case 2:
        {
            cout<<temp;
            temp=temp*9/5-459.67;
            cout<<" grade Kelvin = "<<temp<<" grade Fahrenheit ";
            break;
        }
        case 3:
        {
            cout<<temp<<" grade Kelvin";
            break;
        }
        break;
        }
    }
    break;
    }

}
void Masa()
{

    int ValoareIn,ValoareOut;
    float m_in;
    long long m_out;
    cout<<"Unitati:"<<endl;
    cout<<"1.kg"<<endl;
    cout<<"2.g"<<endl;
    cout<<"3.mg"<<endl;
    cout<<"Introduceti unitatea de masura actuala a numarului: "<<endl;
    cin>>ValoareIn;
    cout<<"Introduceti unitatea la care doriti sa ajungeti  :"<<endl;
    cin>>ValoareOut;
    cout<<"Introduceti numarul pe care doriti sa il transformati : "<<endl;
    cin>>m_in;
    cout<<"Rezultatul este : ";
    switch(ValoareIn)
    {
    case 1:
    {
        switch(ValoareOut)
        {
        case 1:
        {
            cout<<m_in<<" kg";
            break;
        }
        case 2:
        {
            cout<<m_in;
            m_in=m_in*1000;
            cout<<" kg = "<<m_in<<" g ";
            break;
        }
        case 3:
        {
            cout<<m_in;
            m_out=m_in*1000000;
            cout<<" kg = "<<m_out<<" mg ";
            break;
        }
        break;
        }
    }
    break;
    case 2:
    {
        switch(ValoareOut)
        {
        case 1:
        {
            cout<<m_in;
            m_in=m_in/1000;
            cout<<" g = "<<m_in<<" kg ";
            break;
        }
        case 2:
        {
            cout<<m_in<<" g";
            break;
        }
        case 3:
        {
            cout<<m_in;
            m_in=m_in*1000;
            cout<<" g = "<<m_in<<" mg ";
            break;
        }
        break;
        }
    }
    break;
    case 3:
    {
        switch(ValoareOut)
        {
        case 1:
        {
            cout<<m_in;
            m_in=m_in/1000000;
            cout<<" mg = "<<m_in<<" kg ";
            break;
        }
        case 2:
        {
            cout<<m_in;
            m_in=m_in/1000;
            cout<<" mg = "<<m_in<<"  ";
            break;
        }
        case 3:
        {
            cout<<m_in<" mg";
            break;
        }
        break;
        }
    }
    break;
    }
}
void Energie()
{
    int ValoareIn,ValoareOut;
    float e;
    cout<<"Unitati:"<<endl;
    cout<<"1.jouli"<<endl;
    cout<<"2.cal"<<endl;
    cout<<"3.kcal"<<endl;
    cout<<"Introduceti unitatea de masura actuala a numarului: "<<endl;
    cin>>ValoareIn;
    cout<<"Introduceti unitatea la care doriti sa ajungeti  :"<<endl;
    cin>>ValoareOut;
    cout<<"Introduceti numarul pe care doriti sa il transformati : "<<endl;
    cin>>e;
    cout<<"Rezultatul este: ";
    switch(ValoareIn)
    {
    case 1:
    {
        switch(ValoareOut)
        {
        case 1:
        {
            cout<<e<<" jouli";
            break;
        }
        case 2:
        {
            cout<<e;
            e=e/4184;
            cout<<" jouli = "<<e<<" kcal ";
            break;
        }
        case 3:
        {
            cout<<e;
            e=e/3600000;
            cout<<" jouli = "<<e<<" kW*h ";
            break;
        }
        break;
        }
    }
    break;
    case 2:
    {
        switch(ValoareOut)
        {
        case 1:
        {
            cout<<e;
            e=e/1000;
            cout<<" kcal = "<<e<" jouli ";
            break;
        }
        case 2:
        {
            cout<<e<<" kcal";
            break;
        }
        case 3:
        {
            cout<<e;
            e=e*1000;
            cout<<" kcal = "<<e<<" kW*h ";
            break;
        }
        break;
        }
    }
    break;
    case 3:
    {
        switch(ValoareOut)
        {
        case 1:
        {
            cout<<e;
            e=e/1000000;
            cout<<" kW*h = "<<e<<" jouli ";
            break;
        }
        case 2:
        {
            cout<<e;
            e=e/1000;
            cout<<" kW*h = "<<e<<" kcal ";
            break;
        }
        case 3:
        {
            cout<<e<<" kW*h";
            break;
        }
        break;
        }
    }
    break;
    }
}
void Presiune()
{
    int ValoareIn,ValoareOut;
    float n;
    cout<<"Unitati:"<<endl;
    cout<<"1.bar"<<endl;
    cout<<"2.PSI"<<endl;
    cout<<"3.PA"<<endl;
    cout<<"4.atm"<<endl;
    cout<<"Introduceti unitatea de masura actuala a numarului: "<<endl;
    cin>>ValoareIn;
    cout<<"Introduceti unitatea la care doriti sa ajungeti  :"<<endl;
    cin>>ValoareOut;
    cout<<"Introduceti numarul pe care doriti sa il transformati : "<<endl;
    cin>>n;
    cout<<"Rezultatul este : ";
    switch(ValoareIn)
    {
    case 1:
    {
        switch(ValoareOut)
        {
        case 1:
        {
            cout<<n<<"bar";
            break;
        }
        case 2:
        {
            cout<<n;
            n=n*14.21;
            cout<<"bar ="<<n<<"PSI";
            break;
        }
        case 3:
        {
            cout<<n;
            n=n*9800;
            cout<<"bar="<<n<<"PA";
            break;

        }
        case 4:
        {
            cout<<n;
            n=n*0.967;
            cout<<"bar="<<n<<"atm";
            break;
        }
        break;
        }
    }
    break;
    case 2:
    {
        switch(ValoareOut)
        {
        case 1:
        {
            cout<<n;
            n=n*0.070354;
            cout<<"PSI="<<n<<"bar";
            break;
        }
        case 2:
        {
            cout<<n<<"PSI";
            break;
        }
        case 3:
        {
            cout<<n;
            n=n*6894.75729317;
            cout<<"PSI="<<n<<"PA";
            break;
        }
        case 4:
        {
            cout<<n;
            n=n*0.068045;
            cout<<"psi="<<n<<"atm";
        }
        break;
        }

    }
    break;
    case 3:
    {
        switch(ValoareOut)
        {
        case 1:
        {
            cout<<n;
            n=n*0.000010204081632653061;
            cout<<"PA="<<n<<"bar";
            break;
        }
        case 2:
        {
            cout<<n;
            n=n*0.00014503773773017476;
            cout<<"PA="<<n<<"PSI";
            break;
        }
        case 3:
        {
            cout<<n<<"PA";
            break;
        }
        case 4:
        {
            cout<<n;
            n=n*0.0000009869205998632101;
            cout<<"PA="<<n<<"atm";
        }
        break;
        }
    }
    break;
    case 4:
    {
        switch(ValoareOut)
        {
        case 1:
        {
            cout<<n;
            n=n*1.033931365;
            cout<<"atm="<<n<<"bar";
            break;
        }
        case 2:
        {
            cout<<n;
            n=n*14.6959884868;
            cout<<"atm"<<n<<"PSI";
            break;
        }
        case 3:
        {
            cout<<n;
            n=n*101325.2738;
            cout<<"atm="<<n<<"PA";
            break;
        }
        case 4:
        {
            cout<<n<<"atm";
        }
        break;
        }
    }
    break;



    }


}
void Densitate()
{
    int ValoareIn,ValoareOut;
    float x;
    cout<<"Unitati:"<<endl;
    cout<<"1.kg/m^3"<<endl;
    cout<<"2.kg/l"<<endl;
    cout<<"3.g/m^3"<<endl;
    cout<<"4.g/mm^3"<<endl;
    cout<<"Introduceti unitatea de masura actuala a numarului: "<<endl;
    cin>>ValoareIn;
    cout<<"Introduceti unitatea la care doriti sa ajungeti  :"<<endl;
    cin>>ValoareOut;
    cout<<"Introduceti numarul pe care doriti sa il transformati : "<<endl;
    cin>>x;
    cout<<"Rezultatul este: ";
    switch(ValoareIn)
    {
    case 1:
    {
        switch(ValoareOut)
        {
        case 1:
        {
            cout<<x<<"kg/m^3";
            break;
        }
        case 2:
        {
            cout<<x;
            x=x*0.001;
            cout<<"kg/m^3="<<x<<"kg/l";
            break;
        }
        case 3:
        {
            cout<<x;
            x=x*1000;
            cout<<"kg/m^3="<<x<<"g/m^3";
            break;
        }
        case 4:
        {
            cout<<x;
            x=x*0.000001;
            cout<<"kg/m^3="<<x<<"g/mm^3";
        }
        break;
        }
    }
    break;
    case 2:
    {
        switch(ValoareOut)
        {
        case 1:
        {
            cout<<x;
            x=x*1000;
            cout<<"kg/l="<<x<<"kg/m^3";
            break;
        }

        case 2:
        {
            cout<<x<<"kg/l";
            break;
        }
        case 3:
        {
            cout<<x;
            x=x*1000000;
            cout<<"kg/l="<<x<<"g/m^3";
            break;
        }
        case 4:
        {
            cout<<x;
            x=x*0.001;
            cout<<"kg/l="<<x<<"g/mm^3";
            break;
        }
        break;
        }

    }
    break;
    case 3:
    {
        switch(ValoareOut)
        {
        case 1:
        {
            cout<<x;
            x=x*0.001;
            cout<<"g/m^3="<<x<<cout<<"kg/m^3";
            break;
        }
        case 2:
        {
            cout<<x;
            x=x*0.000001;
            cout<<"g/m^3="<<x<<"kg/l";
            break;
        }
        case 3:
        {
            cout<<x<<"g/m^3";
            break;
        }
        case 4:
        {
            cout<<x;
            x=x*1e-9;
            cout<<"g/m^3="<<x<<"g/mm^3";
            break;
        }
        break;
        }
    }
    break;
    case 4:
    {
        switch(ValoareOut)
        {
        case 1:
        {
            cout<<x;
            x=x*1000000;
            cout<<"g/mm^3="<<x<<"kg/m^3";
            break;
        }
        case 2:
        {
            cout<<x;
            x=x*1000;
            cout<<"g/mm^3="<<x<<"kg/l";
            break;
        }
        case 3:
        {
            cout<<x;
            x=x*1000000000;
            cout<<"g/mm^3="<<x<<"g/m^3";
            break;
        }
        case 4:
        {
            cout<<x<<"g/mm^3";
            break;
        }
        break;
        }
    }
    break;



    }
}
void ConsumCombustibil()
{
    int ValoareIn,ValoareOut;
    float n;
    cout<<"Unitati:"<<endl;
    cout<<"1.kg/m^3"<<endl;
    cout<<"2.kg/l"<<endl;
    cout<<"3.g/m^3"<<endl;
    cout<<"4.g/mm^3"<<endl;
    cout<<"Introduceti unitatea de masura actuala a numarului: "<<endl;
    cin>>ValoareIn;
    cout<<"Introduceti unitatea la care doriti sa ajungeti  :"<<endl;
    cin>>ValoareOut;
    cout<<"Introduceti numarul pe care doriti sa il transformati : "<<endl;
    cin>>n;
    cout<<"Rezultatul este: ";
    switch(ValoareIn)
    {
    case 1:
    {
        switch(ValoareOut)
        {
        case 1:
        {
            cout<<n<<"kg/m^3";
            break;
        }
        case 2:
        {
            cout<<n;
            n=n*0.001;
            cout<<"kg/m^3="<<n<<"kg/l";
            break;
        }
        case 3:
        {
            cout<<n;
            n=n*1000;
            cout<<"kg/m^3="<<n<<"g/m^3";
            break;
        }
        case 4:
        {
            cout<<n;
            n=n*0.000001;
            cout<<"kg/m^3="<<n<<"g/mm^3";
        }
        break;
        }
    }
    break;
    case 2:
    {
        switch(ValoareOut)
        {
        case 1:
        {
            cout<<n;
            n=n*1000;
            cout<<"kg/l="<<n<<"kg/m^3";
            break;
        }

        case 2:
        {
            cout<<n<<"kg/l";
            break;
        }
        case 3:
        {
            cout<<n;
            n=n*1000000;
            cout<<"kg/l="<<n <<"g/m^3";
            break;
        }
        case 4:
        {
            cout<<n;
            n=n*0.001;
            cout<<"kg/l="<<n<<"g/mm^3";
            break;
        }
        break;
        }

    }
    break;
    case 3:
    {
        switch(ValoareOut)
        {
        case 1:
        {
            cout<<n;
            n=n*0.001;
            cout<<"g/m^3="<<n<<cout<<"kg/m^3";
            break;
        }
        case 2:
        {
            cout<<n;
            n=n*0.000001;
            cout<<"g/m^3="<<n<<"kg/l";
            break;
        }
        case 3:
        {
            cout<<n<<"g/m^3";
            break;
        }
        case 4:
        {
            cout<<n;
            n=n*1e-9;
            cout<<"g/m^3="<<n<<"g/mm^3";
            break;
        }
        break;
        }
    }
    break;
    case 4:
    {
        switch(ValoareOut)
        {
        case 1:
        {
            cout<<n;
            n=n*1000000;
            cout<<"g/mm^3="<<n<<"kg/m^3";
            break;
        }
        case 2:
        {
            cout<<n;
            n=n*1000;
            cout<<"g/mm^3="<<n<<"kg/l";
            break;
        }
        case 3:
        {
            cout<<n;
            n=n*1000000000;
            cout<<"g/mm^3="<<n<<"g/m^3";
            break;
        }
        case 4:
        {
            cout<<n<<"g/mm^3";
            break;
        }
        break;
        }
    }
    break;



    }

}
void Debit()
{
    int ValoareIn,ValoareOut;
    float d;
    cout<<"Unitati:"<<endl;
    cout<<"1.m^3/s"<<endl;
    cout<<"2.l/min"<<endl;
    cout<<"3.l/s"<<endl;
    cout<<"4.m^3/h"<<endl;
    cout<<"5.m^3/min"<<endl;
    cout<<"Introduceti unitatea de masura actuala a numarului: "<<endl;
    cin>>ValoareIn;
    cout<<"Introduceti unitatea la care doriti sa ajungeti  :"<<endl;
    cin>>ValoareOut;
    cout<<"Introduceti numarul pe care doriti sa il transformati : "<<endl;
    cin>>d;
    cout<<"Rezultatul este: ";
    switch(ValoareIn)
    {
    case 1:
    {
        switch(ValoareOut)
        {
        case 1:
        {
            cout<<d<<"m^3/s";
            break;
        }
        case 2:
        {
            cout<<d;
            d=d*60000;
            cout<<"m^3/s="<<d<<"l/min";

            break;
        }
        case 3:
        {
            cout<<d;
            d=d*1000;
            cout<<"m^3/s="<<d<<"l/s";
            break;
        }
        case 4:
        {
            cout<<d;
            d=d*3600;
            cout<<"m^3/s="<<d<<"m^3/h";

            break;
        }
        case 5:

        {
            cout<<d;
            d=d*60;
            cout<<"m^3/s="<<d<<"m^3/min";
            break;
        }
        }
        break;
        case 2:
        {
            switch(ValoareOut)
            {
            case 1:
            {
                cout<<d;
                d=d*0.0000016666666;
                cout<<"l/min="<<d<<"m^3/s";

                break;
            }

            case 2:
            {
                cout<<d<<"l/min";

                break;
            }
            case 3:
            {
                cout<<d;
                d=d*0.01666666;
                cout<<"l/min="<<d<<"l/s";

                break;
            }
            case 4:
            {
                cout<<d;
                d=d*0.06000;
                cout<<"l/min="<<d<<"m^3/h";

                break;
            }
            case 5:
            {
                cout<<d;
                d=d*0.001;
                cout<<"l/min="<<d<<"m^3/min";
                break;

            }
            break;
            }

        }
        break;
        case 3:
        {
            switch(ValoareOut)
            {
            case 1:
            {
                cout<<d;
                d=d*0.001;
                cout<<"l/s="<<d<<"m^3/s";

                break;
            }
            case 2:
            {
                cout<<d;
                d=d*60;
                cout<<"l/s="<<d<<"l/min";

                break;
            }
            case 3:
            {
                cout<<d<<"l/s";

                break;
            }
            case 4:
            {
                cout<<d;
                d=d*3.6;
                cout<<"l/s="<<d<<"m^3/h";
                break;
            }
            case 5:

            {
                cout<<d;
                d=d*0.06000;
                cout<<"l/s="<<d<<"m^3/min";
                break;
            }
            break;
            }
        }
        break;
        case 4:
        {
            switch(ValoareOut)
            {
            case 1:
            {
                cout<<d;
                d=d*0,00027777;
                cout<<"m^3/h"<<d<<"m^3/s";
                break;
            }
            case 2:
            {
                cout<<d;
                d=d*16,666;
                cout<<"m^3/h"<<d<<"l/min";
                break;
            }
            case 3:
            {
                cout<<d;
                d=d*0.2777;
                cout<<"m^3/h"<<d<<"l/s";

                break;
            }
            case 4:
            {
                cout<<d<<"m^3/h";

                break;
            }
            case 5:
            {
                cout<<d;
                d=d*0.0166;
                cout<<"m^3/h"<<d<<"m^3/min";
                break;
            }
            break;
            }
        }
        break;
        case 5:
        {
            switch(ValoareOut)
            {
            case 1:
            {
                cout<<d;
                d=d*0.0166;
                cout<<"m^3/min"<<d<<"m^3/s";

                break;
            }
            case 2:
            {
                cout<<d;
                d=d*999.999;
                cout<<"m^3/min"<<d<<"l/min";

                break;
            }
            case 3:
            {
                cout<<d;
                d=d*16.666;
                cout<<"m^3/min"<<d<<"l/s";

                break;
            }
            case 4:
            {
                cout<<d;
                d=d*60;
                cout<<"m^3/min"<<d<<"m^3/h";
                break;
            }
            case 5:

            {
                cout<<d<<"m^3/min";
                break;
            }
            break;
            }
        }
        break;



    }

    }
}
int main()
{
    int tipuldeconvertire;
    while(true)
    {
        cout<<endl;
        cout <<" Convertor"<< endl;
        cout<<"1.Lungime"<<endl;
        cout<<"2.Arie"<<endl;
        cout<<"3.Volum"<<endl;
        cout<<"4.Timp"<<endl;
        cout<<"5.Viteza"<<endl;
        cout<<"6.Temperatura"<<endl;
        cout<<"7.Masa"<<endl;
        cout<<"8.Energie"<<endl;
        cout<<"9.Presiune"<<endl;
        cout<<"10.Densitate"<<endl;
        cout<<"11.Consum combustibil"<<endl;
        cout<<"12.Debit"<<endl;
        cout<<endl;
        cout<<"Alege tipul de convertire:" <<endl;
        cout<<endl;
        cin>>tipuldeconvertire;
        switch(tipuldeconvertire)
        {
        case 1:
            Lungime();
            break;
        case 2:
            Arie();
            break;
        case 3:
            Volum();
            break;
        case 4:
            Timp();
            break;
        case 5:
            Viteza();
            break;
        case 6:
            Temperatura();
            break;
        case 7:
            Masa();
            break;
        case 8:
            Energie();
            break;
        case 9:
            Presiune();
            break;
        case 10:
            Densitate();
            break;
        case 11:
            ConsumCombustibil();
            break;
        case 12:
            Debit();
            break;
        }

    }


    return 0;
}

