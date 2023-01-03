#include<iostream>

using namespace std;

main()
{
    char a[10],i,count1=0,count2=0,count3=0,count4=0;
    cout<<"Enter the password of 8 digit"<<"\n";
    for(i=0; i<=7; i++)
    {
        cin>>a[i];
    }
    for(i=0; i<=7; i++)
    {

    if((a[i]>='0'&&a[i]<='9')==1)
    {
        count1++;
    }
    else if((((a[i]>='A'&&a[i]<='Z'))==1)||(((a[i]>='A'&&a[i]<='Z')||(a[i]>='a'&&a[i]<='z'))==1)) 
    {
        count2++;

    }
    else 
    {
        count4++;
    }
}
    if((count2==8))
    {
        cout<<"Password is weak"<<"\n";
    }
    else if(count1>=1&&count2>=1&&count4>=1)
    {
        cout<<"Password is strong"<<"\n";
    }
    else if(count1>=1&&count2>=1)
    {
        cout<<"Password is moderate"<<"\n";
    }

}