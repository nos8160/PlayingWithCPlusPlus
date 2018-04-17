#include <bits/stdc++.h>
using namespace std;

float arrTotal[4][150];//Index 0=sepalLength,1=sepalWidth,2=petalLength,3=petalWidth
float arrTemp[4][150];//Index 0=sepalLength,1=sepalWidth,2=petalLength,3=petalWidth
int totalIdx=0;

float square(float x)
{
    return x*x;
}
int main()
{
    ifstream inFile;// ("E:\worldtex.bmp",ios::in |ios::binary);

    inFile.open("files/iris.csv");
    if(!inFile.is_open())
    {
        cout<<"file not found."<<endl;
        return 1;
    }
    else
    {
        cout << "Successfully open csv file" << endl;
    }
    string line = "";
    string sepalLength,sepalWidth,petalLength,petalWidth,species;
    bool isFirstLine=true;
    // Iterate through each line
    while (!inFile.eof())
    {
        if(isFirstLine)
        {
            getline (inFile, line);
            isFirstLine=false;
        }
        getline ( inFile, sepalLength, ',' );//skip ID
        if (sepalLength.empty())
            continue;
        getline ( inFile, sepalLength, ',' );
        getline ( inFile, sepalWidth, ',' );
        getline ( inFile, petalLength, ',' );
        getline ( inFile, petalWidth, ',' );
        getline ( inFile, species );
        arrTotal[0][totalIdx]=atof (sepalLength.c_str());
        arrTotal[1][totalIdx]=atof (sepalWidth.c_str());
        arrTotal[2][totalIdx]=atof (petalLength.c_str());
        arrTotal[3][totalIdx]=atof (petalWidth.c_str());
        totalIdx++;
    }
    inFile.close();

    float sl,sw,pl,pw;
    float dis=0,eps,minPts;
    int countTemp=0,clusterCount=0,arrClsPoint[100],countDis=0;
    cin>>eps>>minPts;
    int i=0,j=0;
    for(i=0; i<totalIdx; i++)
    {
        if(arrTotal[0][i]==-1)
            continue;
        dis=0;
        j=0;
        arrTemp[0][j]=arrTotal[0][i];
        arrTemp[1][j]=arrTotal[1][i];
        arrTemp[2][j]=arrTotal[2][i];
        arrTemp[3][j]=arrTotal[3][i];
        arrTotal[0][i]=-1;
        countDis=1;
        countTemp=1;
        while(j<countTemp)
        {
            sl=arrTemp[0][j];
            sw=arrTemp[1][j];
            pl=arrTemp[2][j];
            pw=arrTemp[3][j];
            for(int k=0; k<totalIdx; k++)
            {
                if(arrTotal[0][k]==-1)
                    continue;
                dis = sqrt(square(sl-arrTotal[0][k])+square(sw-arrTotal[1][k])+square(pl-arrTotal[2][k])+square(pw-arrTotal[3][k]));
                if(dis<=eps)
                {
                    countDis++;
                    arrTemp[0][countTemp]=arrTotal[0][k];
                    arrTemp[1][countTemp]=arrTotal[1][k];
                    arrTemp[2][countTemp]=arrTotal[2][k];
                    arrTemp[3][countTemp]=arrTotal[3][k];
                    countTemp++;
                    arrTotal[0][k]=-1;
                }
            }
            j++;
        }
        if(countDis>0 && countDis>=minPts)
        {
            arrClsPoint[clusterCount]=  countDis ;
            clusterCount++;
        }

    }
    cout<<"Total cluster: "<<clusterCount<<endl;
    for(i=0; i<clusterCount; i++)
    {
        cout<<"No. of point for cluster "<<i+1<<":"<<arrClsPoint[i]<<endl;
    }

    return 0;
}
