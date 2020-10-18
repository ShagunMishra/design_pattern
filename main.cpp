#include <iostream>

using namespace std;

int main()           //main function is start
{
    int upyra();         //prototype of uppyra function
    int dowpyr();        //prototype of dowpyr function
    int dia();           //prototype of dia function
    int star();          //prototype of star function
    int design();        //prototype of design function
    int a,b;

    cout<<"\t\tWELCOME TO PROJECT WORK OF COMPUTER SCIENCE\n";

    for(a=1;a<=80;a++)
        cout<<"-";

    cout<<"\nThis project is based on the concept of looping. \nIn this project different patterns are drawn according to situation (given downward).\nTo print choose option:\n";

    for(a=1;a<=80;a++)
    cout<<"-";

    cout<<"\n       1.To print pattern of upward pyramid\n\
       2.To print pattern of downward pyramid\n\
       3.To print pattern of diamond\n\
       4 To print pattern of star\n\
       5.To print beautiful pattern\n\
       6.To exit\n";

    for(a=1;a<=80;a++)
        cout<<"-";

    start:

    cout<<"\nEnter the option chosen by you: ";
    char ch;
    cin>>b;
    cout<<"\n";

    switch (b)
    {
        case 1 :  upyra();               //calling upyra function
	              break;
        case 2 :  dowpyr();              //calling dowpyr function
	              break;
        case 3 :  dia();                 //calling dia function
	              break;
        case 4 :  star();                //calling star function
	              break;
        case 5 :  design();              //calling design function
	              break;
        case 6 :  cout<<"\n\t\tTHANKS FOR ACCESSING MY PROJECT";
	              break;
        default:  cout<<"Wrong value!!!!!!!!!!\n";
	              break;
    }

    cout<<"\n";
    if(b==6)
        goto bot;
    cout<<"Do you want to continue?\nEnter (y or n):\t";

    top:
    cin>>ch;

    if(ch=='y'||ch=='Y')
        goto start;
    else
        if(ch=='n'||ch=='N')
            cout<<"\n\t\tTHANKS FOR ACCESSING MY PROJECT";
        else
            cout<<"Wrong value!!!!!!!\nType (y or n):";

    goto top;

    bot:

    return 0;
}             //main function is end here

int upyra()                     //declaration of function upyra
{
    for(int z=1;z<=5;z++)           //first main loop of upyra is start
    {
        for(int a=5;a>=z;a--)
            cout<<"  ";
        for(int b=1;b<=z;b++)
            cout<<"* ";
        for(int c=2;c<=z;c++)
            cout<<"* ";
        for(int d=5;d>=z;d--)
            cout<<"  ";
        for(int e=1;e<=z;e++)
            cout<<"  ";
        for(int f=5;f>=z;f--)
            cout<<"  ";
        for(int g=5;g>=z;g--)
            cout<<"  ";
        for(int h=1;h<=z;h++)
            if(h==1||z==5)
                cout<<"* ";
            else
                cout<<"  ";
        for(int i=2;i<=z;i++)
            if(i==1||i==z||z==5)
                cout<<"* ";
            else
                cout<<"  ";
        cout<<"\n";
    }                            //first loop of upyra end
    return 0;
}

int dowpyr()                 //declaration of function dowpyr
{
    for(int z=1;z<=5;z++)        //first main loop of dowpyr start
    {
        for(int a=1;a<=z;a++)
            cout<<"  ";
        for(int b=5;b>=z;b--)
            cout<<"* ";
        for(int c=4;c>=z;c--)
            cout<<"* ";
        for(int d=1;d<=z;d++)
            cout<<"  ";
        for(int e=5;e>=z;e--)
            cout<<"  ";
        for(int f=1;f<=z;f++)
            cout<<"  ";
        for(int g=1;g<=z;g++)
            cout<<"  ";
        for(int h=5;h>=z;h--)
            if(h==5||z==1)
                cout<<"* ";
            else
                cout<<"  ";
        for(int i=4;i>=z;i--)
                if(i==5||i==z||z==1)
                    cout<<"* ";
                else
                    cout<<"  ";
        cout<<"\n";
    }                             //first main loop of dowpyr end
    return 0;
}

int dia()           //declaration of function dia
{
    for(int z=1;z<=5;z++)        //first main loop of dia start
    {
        for(int a=5;a>=z;a--)
            cout<<"  ";
        for(int b=1;b<=z;b++)
            cout<<"* ";
        for(int c=2;c<=z;c++)
            cout<<"* ";
        for(int d=5;d>=z;d--)
            cout<<"  ";
        for(int e=1;e<=z;e++)
            cout<<"  ";
        for(int f=5;f>=z;f--)
            cout<<"  ";
        for(int g=5;g>=z;g--)
            cout<<"  ";
        for(int h=1;h<=z;h++)
            if(h==1)
                cout<<"* ";
            else
                cout<<"  ";
        for(int i=2;i<=z;i++)
            if(i==1||i==z)
                cout<<"* ";
            else
                cout<<"  ";
        cout<<"\n";
    }                       //first main loop of dia end
    for(int y=2;y<=5;y++)       //second main loop of dia start
    {
        for(int a=1;a<=y;a++)
            cout<<"  ";
        for(int b=5;b>=y;b--)
            cout<<"* ";
        for(int c=4;c>=y;c--)
            cout<<"* ";
        for(int d=1;d<=y;d++)
            cout<<"  ";
        for(int e=1;e<=y;e++)
            cout<<"  ";
        for(int f=5;f>=y;f--)
            cout<<"  ";
        for(int g=1;g<=y;g++)
            cout<<"  ";
        for(int h=5;h>=y;h--)
            if(h==5||h==1)
                cout<<"* ";
            else
                cout<<"  ";
        for(int i=4;i>=y;i--)
            if(i==5||i==y)
                cout<<"* ";
            else
                cout<<"  ";
        cout<<"\n";
     }                    //second main loop of dia end
     return 0;
}

int star()                 //declaration of function star
{
    for (int z=1;z<=3;z++)             //first main loop of star start
    {
        cout<<"\t\t";
        for(int a=3;a>=z;a--)
            cout<<"  ";
        for(int b=1;b<=z;b++)
            cout<<"  ";
        for(int c=3;c>=z;c--)
            cout<<"  ";
        for(int d=2;d<=z;d++)
            cout<<"* ";
        for(int e=1;e<=z;e++)
            cout<<"* ";
        for(int f=3;f>=z;f--)
            cout<<"  ";
        cout<<"\n";
    }                                 //first main loop of star end
    for (int y=1;y<=3;y++)            //second main loop of star start
    {
        cout<<"\t\t";
        for(int a=1;a<=y;a++)
            cout<<"  ";
        for(int b=3;b>=y;b--)
            cout<<"* ";
        for(int c=3;c>=y;c--)
            cout<<"* ";
        for(int d=1;d<=y;d++)
            cout<<"@ ";
        for(int e=2;e<=y;e++)
            cout<<"@ ";
        for(int f=3;f>=y;f--)
            cout<<"* ";
        for(int g=3;g>=y;g--)
            cout<<"* ";
        for(int h=1;h<=y;h++)
            cout<<"  ";
        cout<<"\n";
     }                              //second main loop of star end
    for (int x=1;x<=3;x++)         //third main loop of star start
    {
        cout<<"\t\t";
        for(int a=3;a>=x;a--)
            cout<<"  ";
        for(int b=1;b<=x;b++)
            cout<<"* ";
        for(int c=1;c<=x;c++)
            cout<<"* ";
        for(int d=3;d>=x;d--)
            cout<<"@ ";
        for(int e=2;e>=x;e--)
            cout<<"@ ";
        for(int f=1;f<=x;f++)
            cout<<"* ";
        for(int g=1;g<=x;g++)
            cout<<"* ";
        for(int h=3;h>=x;h--)
            cout<<"  ";
        cout<<"\n";
     }                              //third main loop of star end
    for (int w=1;w<=3;w++)             //fourth main loop of star start
    {
        cout<<"\t\t";
        for(int a=3;a>=w;a--)
            cout<<"  ";
        for(int b=1;b<=w;b++)
            cout<<"  ";
        for(int c=1;c<=w;c++)
            cout<<"  ";
        for(int d=3;d>=w;d--)
            cout<<"* ";
        for(int e=2;e>=w;e--)
            cout<<"* ";
        for(int f=1;f<=w;f++)
            cout<<"  ";
        cout<<"\n";
    }                                    //fourth main loop of start end
    return 0;
}

int design()                        //declaration of function design
{
    for(int z=1;z<=5;z++)             //first main loop of design start
    {
        for(int a=5;a>=z;a--)
            cout<<"  ";
        for(int b=1;b<=z;b++)
            if(b==1||z==5||b==z)
                cout<<"@ ";
            else
                cout<<"* ";
        for(int c=2;c<=z;c++)
            if(c==1||c==z||z==5)
                cout<<"@ ";
            else
                cout<<"* ";
        for(int d=5;d>=z;d--)
            cout<<"  ";
        for(int e=1;e<=z;e++)
            cout<<"  ";
        for(int f=5;f>=z;f--)
            cout<<"  ";
        for(int g=5;g>=z;g--)
            cout<<"  ";
        for(int h=1;h<=z;h++)
            if(h==1||h==5)
                cout<<"@ ";
            else
                cout<<"* ";
        for(int i=2;i<=z;i++)
            if(i==1||i==z)
                cout<<"@ ";
            else
                cout<<"* ";
        for(int j=5;j>=z;j--)
                cout<<"  ";
        cout<<"\n";
    }                             //first main loop of design end
    for(int y=2;y<=5;y++)         //second main loop of design start
    {
        for(int a=1;a<=y;a++)
            cout<<"  ";
        for(int b=5;b>=y;b--)
            if(b==5||b==1||b==y)
                cout<<"@ ";
            else
                cout<<"* ";
        for(int c=4;c>=y;c--)
            if(c==1||c==y)
                cout<<"@ ";
            else
                cout<<"* ";
        for(int d=1;d<=y;d++)
            cout<<"  ";
        for(int e=5;e>=y;e--)
            cout<<"  ";
        for(int f=1;f<=y;f++)
            cout<<"  ";
        for(int g=1;g<=y;g++)
            cout<<"  ";
        for(int h=5;h>=y;h--)
            if(h==5||h==1)
                cout<<"@ ";
            else
                cout<<"* ";
        for(int i=4;i>=y;i--)
            if(i==5||i==y)
                cout<<"@ ";
            else
                cout<<"* ";
        for(int j=1;j<=y;j++)
            cout<<"  ";
        cout<<"\n";
    }                                //second main loop of design end
    return 0;
}
