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
