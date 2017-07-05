#include<bits/stdc++.h>
using namespace std;

struct students_information
{
    char name[55];
    float height;
    float weight;
};

bool compare(students_information a,students_information b)
{
    /*if(a.height<b.height)
        return true;
    else
        return false;*/
    /*if(a.height>b.height)
        return true;
    else
        return false;*/
    /*if(strcmp(a.name,b.name)==0)
        return true;
    else if(strcmp(a.name,b.name)==1)
        return false;
    else
        return true;*/
    if(strcmp(a.name,b.name)==0)
        return true;
    else if(strcmp(a.name,b.name)==1)
        return true;
    else
        return false;

}
main()
{
    vector<students_information>dept_of_CSE;
    //students_information [55];
    int i;
    for(i=1; i<=14; i++)
    {
        students_information abc;
        //double x,y;
        scanf("%s",abc.name);
        scanf("%f",&abc.height);
        scanf("%f",&abc.weight);
        //cout<<x<<" "<<y<<endl;
        //cout<<abc.height<<" "<<abc.weight<<endl;
        dept_of_CSE.push_back(abc);
    }
    sort(dept_of_CSE.begin(),dept_of_CSE.end(),compare);
    cout<<endl;
    for(i=0; i<14; i++)
    {
        printf("%s ",dept_of_CSE[i].name);
        printf("%.1f ",dept_of_CSE[i].height);
        printf("%.1f\n",dept_of_CSE[i].weight);
    }

}
