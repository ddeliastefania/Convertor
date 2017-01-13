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

