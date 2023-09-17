#include<iostream>
#include<string>
#include<vector>
#include<limits.h>
using namespace std;
int main()
{
    vector<string>StudentNames;
    vector<int>grades;
    int numofstudents;
    cout<<"Enter the number of Students: ";
    cin>>numofstudents;
    for(int i=0;i<numofstudents;i++)
    {
        string name;
        int grade;
        cout<<"Enter the name of the student"<<i+1<<":";
        cin>>name;
        cout<<"Enter the grade for"<<name<<":";
        cin>>grade;
        StudentNames.push_back(name);
        grades.push_back(grade);
    }

    int total=0;
    int highestgrade=INT_MIN;
    int lowestgrade=INT_MAX;
    for(int grade:grades)
    {
        total=total + grade;
    if(grade>highestgrade)
    {
        highestgrade=grade;
    }
    if(grade<lowestgrade)
    {
        lowestgrade=grade;
    }
    }
    double average=static_cast<double>(total)/numofstudents;
    cout<<"HERE IS THE STUDENT GRADES SUMMARY!!\n\n";
    cout<<"AVERAGE GRADE IS :"<<average<<endl;
    cout<<"HIGHEST GRADE IS:"<<highestgrade<<endl;
    cout<<"LOWEST GRADE IS :"<<lowestgrade<<endl;


}
