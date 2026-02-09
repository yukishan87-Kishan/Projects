#include<iostream>
using namespace std;

class findGrade
{
    float q1,q2,qT,midMarks,finalmarks;
    float percentage ,percQ,percM ,percF;
    string grade;
    public:
        void getMarks();
        void calcMarks();
        void calcGrade();
        void showGrade();
        
}obj;

int main()
{
        obj.getMarks();
        obj.calcMarks();
        obj.calcGrade();
        obj.showGrade();

    return 0;
}

void findGrade :: getMarks()
{
    cout<<"\nEnter the marks of Quiz 1 out of(10) : ";
    cin>>q1;
    cout<<"\nEnter the marks of Quiz 2 out of(10) : ";
    cin>>q2;
    cout<<"\nEnter the marks of Mid Term out of(100) : ";
    cin>>midMarks;
    cout<<"\nEnter the marks of Final Term out of(100) : ";
    cin>>finalmarks;
    cout<<endl;
}

void findGrade :: calcMarks()
{
    qT=q1+q2;
    percQ=(25.0/20.0)*qT;
    percM=(25.0/100.0)*midMarks;
    percF=(50.0/100.0)*midMarks;

    percentage=percQ+percM+percF;

}

void findGrade ::calcGrade()
{
    if(percentage>= 90.0)
    {
        grade="A+";
    }
    if(percentage>= 80.0 && percentage<90.0)
    {
        grade="A";
    }
    if(percentage>= 70.0 && percentage<80.0)
    {
        grade="B+";
    }
    if(percentage>= 60.0 && percentage<70.0)
    {
        grade="B";
    }
    if(percentage>= 50.0 && percentage<60.0)
    {
        grade="C+";
    }
    if(percentage>= 40.0 && percentage<50.0)
    {
        grade="C";
    }
    if(percentage < 40.0)
    {
        grade="FAIL";
    }
}

void findGrade ::showGrade()
{
    cout<<"\n";
    cout<<"======================================="<<endl;
    cout<<"The Grade Obtained is : "<<grade<<endl;
    cout<<"======================================="<<endl;
    cout<<endl;
}