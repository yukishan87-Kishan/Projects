#include<iostream>
using namespace std;

class findGrade
{
    float q1,q2,qT,midMarks,finalmarks;
    float percentage ,percQ,percM ,percF;
    public:
        void getMarks();
        void calcMarks();
        void calcGrade();
        void showGrade();
        
};

int main()
{
        
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

void findGrade :: calcGrade()
{
    qT=q1+q2;
    percQ=(25.0/20.0)*qT;
    percM=(25.0/100.0)*qT;
    cout<<"\nEnter the marks of Final Term out of(100) : ";
    cin>>finalmarks;
    cout<<endl;
}