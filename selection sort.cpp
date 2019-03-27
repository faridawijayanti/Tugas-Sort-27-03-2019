#include <iostream>
#include <iomanip>

using namespace std;
int main()
    {
        int x[10],i,temp,minindex,j;
    cout<<"------FARIDA WIJAYANTI---------\n";
    cout<<"---------18050623012-----------\n";
    cout<<"----PROGRAM SELECTION SORT-----\n";
    cout<<endl;
        cout<<"masukkan angka sebanyak 10\n";
        cout<<endl;
        for(i=0; i<10; i++)
            {
                cout<<"x["<<i+1<<"] = ";cin>>x[i];
            }
        cout<<"\n data sebelum di sort :";
        for(i=0; i<10;i++)
            {
                cout<<setw(9)<<x[i];
            }
        for(i=0; i<10-1; i++) //perulangan iterasi
            {
                minindex=i;
                for(j=i+1; j<5; j++) //perulangan membandingkan data
                    {
                        if(x[minindex]>x[j])
                            {
                                minindex=j;
                            }
                    }
                temp=x[i];
                x[i]=x[minindex];
                x[minindex]=temp;
                }
        cout<<"\n\nData setelah di sort :";
        for(i=0; i<10; i++)
            {
                cout<<setw(4)<<x[i];
        return 0;
    }
    }
