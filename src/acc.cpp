#include<bits/stdc++.h>
#include "acc.h"
#include<fstream>
#define pp pair<int,int>
using namespace std;

int pos[100000];
int n;
string sp,sc;

acc::acc()
{
    cout<<"__________________________________Welcome to PST Assistant_______________________________"<<endl;
    cout<<"                                                 an assistant to teach with comfort"<<endl<<endl<<endl;
    cout<<"                                   SetUp Your App . . . . "<<endl<<endl<<endl;
    cout<<"                                   Number of students:  ";
    cin>>n;
    cout<<endl;
    cout<<"                                           Class :  ";
    cin>>sp;
    cout<<endl;
    cout<<"                                          Section :  ";
    cin>>sc;
    system("cls");
    menu();
}


void acc::menu()
{
    while(1)
    {
        int bc;
        cout<<"                           ,__________________________,"<<endl;
        cout<<"                           |            Task :        |"<<endl;
        cout<<"                           |press 1 for Attendance    |"<<endl;
        cout<<"                           |press 2 for Result        |"<<endl;
        cout<<"                           |press 3 for Search Result |"<<endl;
        cout<<"                           |press 0 to EXIT           |"<<endl;
        cout<<"                           |__________________________|"<<endl;
        //cout<<"                           * Option \"Search result\" under development ..."<<endl;
        cout<<"                                        ";
        cin>>bc;
        if(bc==1) attendance();
        else if(bc==2) result();
        else if(bc==3) search_();
        else if(bc==0) exit(0);
    }
}

void acc::attendance()
{
        string a,b="attendance_",c;
        cout<<"                            ,___________________________,"<<endl;
        cout<<"                            | Input the Date (dd/mm/yy) |"<<endl;
        cout<<"                            |___________________________|"<<endl;
        cout<<"                                      ";
        cin>>a;
        b+=a+".txt";
        for(int kk=0;kk<b.size();kk++)
            if(b[kk]=='/')b[kk]='_';
        //cout<<b<<endl;
        ofstream ab;
    ab.open(b);
    ab<<"\t\t\t\t\t______________________Attendance Sheet___________________________"<<endl<<endl<<endl;
    ab<<"\t\t\t\t\t                        Date:"<<a<<endl;
    ab<<"\t\t\t\t\t                        Class:"<<sp<<endl<<endl<<endl;
    ab<<"\t\t\t\t\t                        Section:"<<sc<<endl<<endl<<endl;
    ab<<"_______________________________"<<endl;
        cout<<"                           ,__________________________,"<<endl;
        cout<<"                           |     Instruction :        |"<<endl;
        cout<<"                           |press p for present       |"<<endl;
        cout<<"                           |press a for Absent        |"<<endl;
        cout<<"                           |__________________________|"<<endl;
        cout<<"                           |press 0 for main menu     |"<<endl;
        cout<<"                           |__________________________|"<<endl<<endl;

    for(int i=1;i<=n ; i++)
    {
        char att;
        cout<<"180300"<<i<<" :  ";
        cin>>att;
        cout<<endl;
        if(att=='0')
        {
            system("cls");
            menu();
        }
        ab<<"   "<<i<<"  --------------> 	  "<<att<<endl;
        ab<<"_______________________________"<<endl;
    }
    ab.close();
    char ses,bes;
    cout<<"Press 0 for main menu ....."<<endl;
    //getch(ses);
    cin>>bes;
    system("cls");
    menu();

}

void acc:: search_()
{
    int src;
        cout<<"                            ,________________________,"<<endl;
        cout<<"                            | Input your Roll :      |"<<endl;
        cout<<"                            |________________________|"<<endl;
        cout<<"                                      ";
        cin>>src;
        int kpp;
        kpp=src%100 ;
        cout<<kpp<<endl;
        dekho(kpp);

}

void acc::dekho(int kpp)
{
    ifstream bng;
    bng.open("bangla.txt");
    ifstream eng;
    eng.open("english.txt");
    ifstream mth;
    mth.open("math.txt");
    ifstream scp;
    scp.open("science.txt");
    ifstream scl;
    scl.open("social_science.txt");
    ifstream rel;
    rel.open("religious_studies.txt");
    ifstream rt;
    rt.open("art.txt");
    ifstream exa;
    exa.open("physical_studies.txt");
    vector<pp>v;

    for(int i=1; i<=n; i++)
    {
        //cout<<i<<endl;
        int sum=0;
        int ba,en,ma,sc,ssc,rs,ar,ps;
        bng>>ba;
        eng>>en;
        mth>>ma;
        scp>>sc;
        scl>>ssc;
        rel>>rs;
        rt>>ar;
        exa>>ps;
        sum=ba+en+ma+sc+ssc+rs+ar+ps;
        if(i==kpp)
        {
            cout<<"__________________________________________________________________________"<<endl;
            cout<<"Bangla : "<<ba<<endl;
            cout<<"English : "<<en<<endl;
            cout<<"Math : "<<ma<<endl;
            cout<<"Science : "<<sc<<endl;
            cout<<"Social Science : "<<ssc<<endl;
            cout<<"Religious studies : "<<rs<<endl;
            cout<<"Art : "<<ar<<endl;
            cout<<"Physical Studies : "<<ps<<endl;
            cout<<"Total marks : "<<sum<<endl;
            cout<<"Position : "<<pos[i]<<endl;
            cout<<"__________________________________________________________________________"<<endl;
        }
    }
    char ses,bes;
    cout<<"Press 0 for main menu ....."<<endl;
    //getch(ses);
    cin>>bes;
    system("cls");
    menu();
}

void acc::result()
{
    int a;
    cout<<",____________________________________________,"<<endl;
    cout<<"| Subject\t\t\tSubject code |"<<endl;
    cout<<"| Bangla\t\t\t 01\t     |"<<endl;
    cout<<"| English\t\t\t 02\t     |            _________________________________________"<<endl;
    cout<<"| Math\t\t\t\t 03\t     |           | Enter '9' (nine) to prepare marksheets  |"<<endl;
    cout<<"| Science\t\t\t 04\t     |           | Enter '0' (zero) for main menu          |"<<endl;
    cout<<"| Social Science\t\t 05\t     |           |_________________________________________|"<<endl;
    cout<<"| Religious Studies\t\t 06\t     |"<<endl;
    cout<<"| Art\t\t\t\t 07\t     |"<<endl;
    cout<<"| Physical Studies\t\t 08\t     |"<<endl;
    cout<<"|____________________________________________|"<<endl<<endl;

    while(1)
    {
        cout<<"                            ,________________________,"<<endl;
        cout<<"                            | Input the Subject Code |"<<endl;
        cout<<"                            |________________________|"<<endl;
        cout<<"                                      ";
        cin>>a;
        if(a==9){name();}
        if(a==0){
                system("cls");menu();}
        cout<<"                           ,__________________________,"<<endl;
        cout<<"                           |            Term :        |"<<endl;
        cout<<"                           |press 1 for mid term exam |"<<endl;
        cout<<"                           |press 2 for final exam    |"<<endl;
        cout<<"                           |__________________________|"<<endl;
        cout<<"                                        ";
        cin>>bc;

            if(a==1) acc::Bangla();
        if(a==2) acc::English();
        if(a==3) acc::Math();
        if(a==4) acc::Science();
        if(a==5) acc::Social();
        if(a==6) acc::Islam();
        if(a==7) acc::Art();
        if(a==8) acc::Ex();
    }
}

void acc:: name()
{
    ifstream bng;
    bng.open("bangla.txt");
    ifstream eng;
    eng.open("english.txt");
    ifstream mth;
    mth.open("math.txt");
    ifstream scp;
    scp.open("science.txt");
    ifstream scl;
    scl.open("social_science.txt");
    ifstream rel;
    rel.open("religious_studies.txt");
    ifstream rt;
    rt.open("art.txt");
    ifstream exa;
    exa.open("physical_studies.txt");
    vector<pp>v;

    for(int i=1; i<=n; i++)
    {
        //cout<<i<<endl;
        int sum=0;
        int ba,en,ma,sc,ssc,rs,ar,ps;
        bng>>ba;
        eng>>en;
        mth>>ma;
        scp>>sc;
        scl>>ssc;
        rel>>rs;
        rt>>ar;
        exa>>ps;
        sum=ba+en+ma+sc+ssc+rs+ar+ps;
        v.push_back({sum,i});
    }
    sort(v.rbegin(),v.rend());
    for(int i=0;i<v.size();i++)
    {   //cout<<v[i].second<<" "<<i+1<<endl;
        pos[v[i].second]=i+1;
    }
     bng.close();
    eng.close();
    mth.close();
    scp.close();
    scl.close();
    rel.close();
    rt.close();
    exa.close();
    hobe();

}

void acc::hobe()
{
    ifstream bng;
    bng.open("bangla.txt");
    ifstream eng;
    eng.open("english.txt");
    ifstream mth;
    mth.open("math.txt");
    ifstream scp;
    scp.open("science.txt");
    ifstream scl;
    scl.open("social_science.txt");
    ifstream rel;
    rel.open("religious_studies.txt");
    ifstream rt;
    rt.open("art.txt");
    ifstream exa;
    exa.open("physical_studies.txt");
    vector<pp>v;

    for(int i=1; i<=n; i++)
    {
        //cout<<i<<endl;
        int sum=0;
        string a,c,b;
        a="1800300";
        char kkk='0'+i;
        a+=kkk;
        c=a+".txt";
        int ba,en,ma,sc,ssc,rs,ar,ps;
        bng>>ba;
        eng>>en;
        mth>>ma;
        scp>>sc;
        scl>>ssc;
        rel>>rs;
        rt>>ar;
        exa>>ps;
        sum=ba+en+ma+sc+ssc+rs+ar+ps;
        ofstream ab;
    ab.open(c);
    ab<<"\t\t\t\t\t\t\t\t\t\t অ আ সরকারি  প্রাথমিক বিদ্যালয়, আজিবনগর"<<endl;
    ab<<"\t\t\t\t\t\t\t\t\t\t\tমুল্যায়ন পত্র"<<endl;
    //ab<<"\n\n\nStudents Name : "<<nm<<endl;
    ab<<"রোল  : \t"<<a<<endl;
    ab<<"শ্রেণি : "<<sp<<endl;
    ab<<"শাখা : "<<sc<<"\n\n\n\n";
    ab<<"\t\t\t"<<"বাংলা"<<"\t\t"<<"ইংরেজী"<<"\t\t";
    ab<<"গণিত"<<"\t\t"<<"সাধারণ বিজ্ঞান"<<"\t\t";
    ab<<"বাংলাদেশ ও বিশ্ব পরিচয়"<<"\t\t"<<"ধর্মীয় শিক্ষা"<<"\t\t";
    ab<<"চারু ও কারুকলা "<<"\t\t"<<"শারিরিক শিক্ষা"<<"\n\n";
    if(bc==1)
    {ab<<"অর্ধ‌বার্ষিক পরীক্ষাঃ\t\t";}
    else if (bc==2) {ab<<"বার্ষিক পরীক্ষাঃ    \t\t";}
    ab<<ba<<"  \t\t"<<en<<"  \t\t";
    ab<<ma<<"   \t\t"<<sc<<" \t\t\t";
    ab<<ssc<<"   \t\t\t "<<rs<<"  \t\t";
    ab<<ar<<"     \t\t\t"<<ps<<"  \t\t";
    ab<<endl;
    ab<<endl<<endl <<endl<<endl;
    ab<<"     \t\t\t Total marks: "<< sum<<endl<<endl;;
    ab<<"     \t\t\t Position   : "<< pos[i]<<endl<<endl;;
    ab.close();
    }
     bng.close();
    eng.close();
    mth.close();
    scp.close();
    scl.close();
    rel.close();
    rt.close();
    exa.close();
    system("cls");
    menu();
}

void acc::Bangla()
{
    ofstream ab;
    ab.open("bangla.txt");

        cout<<"                           ,__________________________,"<<endl;
        cout<<"                           | press -9 for result menu |"<<endl;
        cout<<"                           | press -1for main menu    |"<<endl;
        cout<<"                           |__________________________|"<<endl<<endl;
   for(int i=1;i<=n ; i++)
    {
        int a;
        cout<<",_______________________________________,"<<endl;
       cout<<" Roll: "<<i<<"\t\tMarks:    ";
        ;
        cin>>a;
        if(a==-9){system("cls"); result();}
        if(a==-1){system("cls"); menu();}
        cout<<",_______________________________________,"<<endl;
        if(a!=-9 || a!=-1)
        ab<<a<<endl;
    }
    ab.close();
    system("cls");
    result();
}

void acc::English()
{
    ofstream ab;
    ab.open("english.txt");
    for(int i=1;i<=n ; i++)
    {
        int a;
        cout<<",_______________________________________,"<<endl;
       cout<<" Roll: "<<i<<"\t\tMarks:    ";
        ;
        cin>>a;
        if(a==-9){system("cls"); result();}
        if(a==-1){system("cls"); menu();}
        cout<<",_______________________________________,"<<endl;
        if(a!=-9 || a!=-1)
        ab<<a<<endl;
    }
    ab.close();
    system("cls");
    result();
}

void acc::Math()
{
    ofstream ab;
    ab.open("math.txt");
    for(int i=1;i<=n ; i++)
    {
        int a;
        cout<<",_______________________________________,"<<endl;
       cout<<" Roll: "<<i<<"\t\tMarks:    ";
        ;
        cin>>a;
        if(a==-9){system("cls"); result();}
        if(a==-1){system("cls"); menu();}
        cout<<",_______________________________________,"<<endl;
        if(a!=-9 || a!=-1)
        ab<<a<<endl;
    }
    ab.close();
    system("cls");
    result();
}

void acc::Science()
{
    ofstream ab;
    ab.open("science.txt");
    for(int i=1;i<=n ; i++)
    {
        int a;
        cout<<",_______________________________________,"<<endl;
       cout<<" Roll: "<<i<<"\t\tMarks:    ";
        ;
        cin>>a;
        if(a==-9){system("cls"); result();}
        if(a==-1){system("cls"); menu();}
        cout<<",_______________________________________,"<<endl;
        if(a!=-9 || a!=-1)
        ab<<a<<endl;
    }
    ab.close();
    system("cls");
    result();
}

void acc::Social()
{
    ofstream ab;
    ab.open("social_science.txt");
    for(int i=1;i<=n ; i++)
    {
        int a;
        cout<<",_______________________________________,"<<endl;
       cout<<" Roll: "<<i<<"\t\tMarks:    ";
        ;
        cin>>a;
        if(a==-9){system("cls"); result();}
        if(a==-1){system("cls"); menu();}
        cout<<",_______________________________________,"<<endl;
        if(a!=-9 || a!=-1)
        ab<<a<<endl;
    }
    ab.close();
    system("cls");
    result();
}

void acc::Islam()
{
    ofstream ab;
    ab.open("religious_studies.txt");
    for(int i=1;i<=n ; i++)
    {
        int a;
        cout<<",_______________________________________,"<<endl;
       cout<<" Roll: "<<i<<"\t\tMarks:    ";
        ;
        cin>>a;
        if(a==-9){system("cls"); result();}
        if(a==-1){system("cls"); menu();}
        cout<<",_______________________________________,"<<endl;
        if(a!=-9 || a!=-1)
        ab<<a<<endl;
    }
    ab.close();
    system("cls");
    result();
}

void acc::Art()
{
    ofstream ab;
    ab.open("art.txt");
    for(int i=1; i<=n; i++)
    {
        int a;
        cout<<",_______________________________________,"<<endl;
       cout<<" Roll: "<<i<<"\t\tMarks:    ";
        ;
        cin>>a;
        cout<<",_______________________________________,"<<endl;
        if(a!=-9 || a!=-1)
        ab<<a<<endl;
    }
    ab.close();
    system("cls");
    result();
}

void acc::Ex()
{
    ofstream ab;
    ab.open("physical_studies.txt");
    for(int i=1;i<=n ; i++)
    {
        int a;
        cout<<",_______________________________________,"<<endl;
       cout<<" Roll: "<<i<<"\t\tMarks:    ";
        ;
        cin>>a;
        if(a==-9){system("cls"); result();}
        if(a==-1){system("cls"); menu();}
        cout<<",_______________________________________,"<<endl;
        if(a!=-9 || a!=-1)
        ab<<a<<endl;
    }
    ab.close();
    system("cls");
    result();
}
