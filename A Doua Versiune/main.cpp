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
