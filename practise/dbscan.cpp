#include<iostream>
#include<fstream>
#include<math.h>
#define row 150
#define col 4
using namespace std;
int main()
{
    int i,j,k,flag=1,count=0,minGroup,counter;
    int cluster[row]={0},finalCluster[row],result[200];
    double data[row][col];
    double distance,eps;
    fstream ifile;
    ifile.open("files/iris.txt");

    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            ifile>>data[i][j];
        }
    }

    cin>>eps>>minGroup;
        cout<<endl;

    for(i=0;i<row;i++)
    {
        if(cluster[i]>=0)
        {
            
            for(k=0;k<row;k++)
            {

                distance = 0;
                for(j=0;j<col;j++)
                {
                    distance = distance + pow(data[i][j]-data[k][j],2);
                }
                distance = sqrt(distance);

                if(distance<eps)
                {

                    if(cluster[k]==0)
                        cluster[k]=flag;
                }
            }
        }
        flag++;
    }



    for(i=0;i<row;i++)
    {
        counter=0;
        for(j=0;j<row;j++)
        {
            if(cluster[i]==cluster[j])
            {
                counter++;
            }
        }
        finalCluster[i]=counter;
    }




    for(i=0;i<row;i++)
    {
        for(j=0;j<i;j++)
        {
            if(cluster[i] == cluster[j])
                break;
        }
        if(i == j && finalCluster[i]>=minGroup)
        {
            count++;
        }
    }

    cout<<"Total number of clusters = "<<count<<endl;

    return 0;
}
