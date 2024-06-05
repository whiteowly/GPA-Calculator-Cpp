#include <iostream>
using namespace std;
int main()
{

    float hours, marks, points, totalp=0, totalh=0, gpa;
    string course;
    cout<<"Type done when you're done listing your courses."<<endl;
    for(int i=0;;i++){
        cout<<"Enter Course "<<"#"<<i+1<<" name: ";
        cin>>course;
        if (course=="done")
            break;
        cout<<"Enter "<<course<<" Credit Hours: ";
        cin>>hours;
        mark:
        cout<<"Enter "<<course<<"'s mark out of 100: ";
        cin>>marks;
        if (marks<=100 && marks>=85)
            points = hours*4.00;
        else if (marks<85 && marks>=80)
            points = hours*3.75;
        else if (marks<80 && marks>=75)
            points = hours*3.50;
        else if (marks<75 && marks>=70)
            points = hours*3.00;
        else if (marks<70 && marks>=65)
            points = hours*2.75;
        else if (marks<65 && marks>=60)
            points = hours*2.50;
        else if (marks<60 && marks>=50)
            points = hours*2.00;
        else if (marks<50 && marks>=40)
            points = hours*1;
        else if (marks<40)
            points = hours*0;
        else {
            cout<<"Please Enter Correct marks"<<endl;
            goto mark;
        }
        totalp+=points;
        totalh+=hours;
    }
    gpa = totalp/totalh;
    cout<<"Your GPA is: "<<gpa<<endl;
    if(gpa==4)
        cout<<"Well done ma boy!";
        else if(gpa>=3.5 && gpa<4)
            cout<<"We'll get em next time";
        else if(gpa>=3 && gpa<3.5)
            cout<<"we're losing you broski";
        else if(gpa>=2 && gpa<3)
            cout<<"Are you even learning?";
        else if(gpa<2)
            cout<<"Dedeb!";
    else{
        cout<< "Tf did you input?";
    }

}

