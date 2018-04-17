
#include <iostream>
#include <sstream>
#include <fstream>
#include <vector>
#include <string>
#include <math.h>
#include<iomanip>
using namespace std;

double stringToDouble(string str) {
    double d;
    stringstream ss(str);
    ss >> d;
    return d;
}

//for setosa finding mean
double getMeansetosa(vector <double>& data){
    double mean = 0;
    double sum = 0;
    for(int i=0;i<50;i++){
        sum = sum + data[i];
    }
    mean = sum/50;
    return mean;
}

//for versicolor finding mean
double getMeanversicolor(vector <double>& data){
    double mean = 0;
    double sum = 0;
    for(int i=50;i<100;i++){
        sum = sum + data[i];
    }
    mean = sum/50;
    return mean;
}

//for virginica finding mean
double getMeanvirginica(vector <double>& data){
    double mean = 0;
    double sum = 0;
    for(int i=100;i<150;i++){
        sum = sum + data[i];
    }
    mean = sum/50;
    return mean;
}

//for setosa finding Variance
double getVariancesetosa(vector <double>& data)
{
    double valuesMean = getMeansetosa(data);
    double sum = 0;
    for (int i = 0; i < 50; i++)
    {
        sum += (data[i] - valuesMean) * (data[i] - valuesMean);
    }
    return sum / (50);
}

//for versicolor finding Variance
double getVarianceversicolor(vector <double>& data)
{
    double valuesMean = getMeanversicolor(data);
    double sum = 0;
    for (int i = 50; i < 100; i++)
    {
        sum += (data[i] - valuesMean) * (data[i] - valuesMean);
    }
    return sum / (50);
}

//for virginica finding Variance
double getVariancevirginica(vector <double>& data)
{
    double valuesMean = getMeanvirginica(data);
    double sum = 0;
    for (int i = 100; i < 150; i++)
    {
        sum += (data[i] - valuesMean) * (data[i] - valuesMean);
    }
    return sum / (50);
}

//P(Sepal Lenght | Setosa)
double getFeatureOfSpecies(double mean, double variance, double input){
    double Sqrt = 0;
    double MeanByVariance = 0;
    double retValue = 0;

    MeanByVariance = (-((input - mean)*(input - mean)))/(2*variance);
    MeanByVariance = exp(MeanByVariance);
    Sqrt = 2*3.1416*variance;
    Sqrt = 1/(sqrt(Sqrt));
    retValue = Sqrt * MeanByVariance;

    return retValue;
}


int main()
{
    //taking inputs
    double inputSepalLength;
    double inputSepalWidth;
    double inputPetalLength;
    double inputPetalWidth;

    cout<< "Please enter Sepal Length: ";
    cin>>inputSepalLength;
    cout<< "Please enter Sepal Width: ";
    cin>>inputSepalWidth;
    cout<< "Please enter Petal Length: ";
    cin>>inputPetalLength;
    cout<< "Please enter Petal Width: ";
    cin>>inputPetalWidth;

    int setosa,versicolor,virginica;
    setosa = versicolor = virginica = 0;

    string Species;
    double distance = 0;
    ifstream ip("files/iris.txt");

    if(!ip.is_open()){
        cout << "unable to open File!!" << '\n';
    }

    string SepalLengthCmS;
    string SepalWidthCmS;
    string PetalLengthCmS;
    string PetalWidthCmS;
    string SpeciesS;

    vector<double> SepalLengthCmVector;
    vector<double> SepalWidthCmVector;
    vector<double> PetalLengthCmVector;
    vector<double> PetalWidthCmVector;
    vector<string> SpeciesVector;


    while(!ip.eof()){
        getline(ip,SepalLengthCmS,',');
        getline(ip,SepalWidthCmS,',');
        getline(ip,PetalLengthCmS,',');
        getline(ip,PetalWidthCmS,',');
        getline(ip,SpeciesS,'\n');

        SepalLengthCmVector.push_back(stringToDouble(SepalLengthCmS));
        SepalWidthCmVector.push_back(stringToDouble(SepalWidthCmS));
        PetalLengthCmVector.push_back(stringToDouble(PetalLengthCmS));
        PetalWidthCmVector.push_back(stringToDouble(PetalWidthCmS));
        SpeciesVector.push_back(SpeciesS);
    }
    ip.close();


    //for setosa finding mean
    double SepalLengthMeansetosa, SepalWidthMeansetosa, PetalLengthMeansetosa, PetalWidthMeansetosa;
    SepalLengthMeansetosa = getMeansetosa(SepalLengthCmVector);
    SepalWidthMeansetosa = getMeansetosa(SepalWidthCmVector);
    PetalLengthMeansetosa = getMeansetosa(PetalLengthCmVector);
    PetalWidthMeansetosa = getMeansetosa(PetalWidthCmVector);


    //for versicolor finding mean
    double SepalLengthMeanversicolor, SepalWidthMeanversicolor, PetalLengthMeanversicolor, PetalWidthMeanversicolor;
    SepalLengthMeanversicolor = getMeanversicolor(SepalLengthCmVector);
    SepalWidthMeanversicolor = getMeanversicolor(SepalWidthCmVector);
    PetalLengthMeanversicolor = getMeanversicolor(PetalLengthCmVector);
    PetalWidthMeanversicolor = getMeanversicolor(PetalWidthCmVector);



    //for virginica finding mean
    double SepalLengthMeanvirginica, SepalWidthMeanvirginica, PetalLengthMeanvirginica, PetalWidthMeanvirginica;
    SepalLengthMeanvirginica = getMeanvirginica(SepalLengthCmVector);
    SepalWidthMeanvirginica = getMeanvirginica(SepalWidthCmVector);
    PetalLengthMeanvirginica = getMeanvirginica(PetalLengthCmVector);
    PetalWidthMeanvirginica = getMeanvirginica(PetalWidthCmVector);



    //for setosa finding variance
    double SepalLengthVariancesetosa, SepalWidthVariancesetosa, PetalLengthVariancesetosa, PetalWidthVariancesetosa;
    SepalLengthVariancesetosa = getVariancesetosa(SepalLengthCmVector);
    SepalWidthVariancesetosa = getVariancesetosa(SepalWidthCmVector);
    PetalLengthVariancesetosa = getVariancesetosa(PetalLengthCmVector);
    PetalWidthVariancesetosa = getVariancesetosa(PetalWidthCmVector);

    //cout<<"SLength:"<<SepalLengthVariancesetosa <<" "<<"SWidth:"<<SepalWidthVariancesetosa <<" ";
    //cout<<"PLength:"<<PetalLengthVariancesetosa <<" "<<"PWidth:"<<PetalWidthVariancesetosa <<endl;


    //for versicolor finding variance
    double SepalLengthVarianceversicolor, SepalWidthVarianceversicolor, PetalLengthVarianceversicolor, PetalWidthVarianceversicolor;
    SepalLengthVarianceversicolor = getVarianceversicolor(SepalLengthCmVector);
    SepalWidthVarianceversicolor = getVarianceversicolor(SepalWidthCmVector);
    PetalLengthVarianceversicolor = getVarianceversicolor(PetalLengthCmVector);
    PetalWidthVarianceversicolor = getVarianceversicolor(PetalWidthCmVector);



    //for virginica finding variance
    double SepalLengthVariancevirginica, SepalWidthVariancevirginica, PetalLengthVariancevirginica, PetalWidthVariancevirginica;
    SepalLengthVariancevirginica = getVariancevirginica(SepalLengthCmVector);
    SepalWidthVariancevirginica = getVariancevirginica(SepalWidthCmVector);
    PetalLengthVariancevirginica = getVariancevirginica(PetalLengthCmVector);
    PetalWidthVariancevirginica = getVariancevirginica(PetalWidthCmVector);



    //finding Features | setosa
    double SepalLengthXsetosa,SepalWidthXsetosa,PetalLengthXsetosa,PetalWidthXsetosa;
    SepalLengthXsetosa = getFeatureOfSpecies(SepalLengthMeansetosa,SepalLengthVariancesetosa ,inputSepalLength);
    SepalWidthXsetosa = getFeatureOfSpecies(SepalWidthMeansetosa,SepalWidthVariancesetosa ,inputSepalWidth);
    PetalLengthXsetosa = getFeatureOfSpecies(PetalLengthMeansetosa,PetalLengthVariancesetosa ,inputPetalLength);
    PetalWidthXsetosa = getFeatureOfSpecies(PetalWidthMeansetosa,PetalWidthVariancesetosa ,inputPetalWidth);

    //finding Features | versicolor
    double SepalLengthXversicolor,SepalWidthXversicolor,PetalLengthXversicolor,PetalWidthXversicolor;
    SepalLengthXversicolor = getFeatureOfSpecies(SepalLengthMeanversicolor,SepalLengthVarianceversicolor ,inputSepalLength);
    SepalWidthXversicolor =  getFeatureOfSpecies(SepalWidthMeanversicolor,SepalWidthVarianceversicolor ,inputSepalWidth);
    PetalLengthXversicolor = getFeatureOfSpecies(PetalLengthMeanversicolor,PetalLengthVarianceversicolor ,inputPetalLength);
    PetalWidthXversicolor =  getFeatureOfSpecies(PetalWidthMeanversicolor,PetalWidthVarianceversicolor ,inputPetalWidth);


    //finding Features | virginica
    double SepalLengthXvirginica,SepalWidthXvirginica,PetalLengthXvirginica,PetalWidthXvirginica;
    SepalLengthXvirginica = getFeatureOfSpecies(SepalLengthMeanvirginica,SepalLengthVariancevirginica ,inputSepalLength);
    SepalWidthXvirginica = getFeatureOfSpecies(SepalWidthMeanvirginica,SepalWidthVariancevirginica ,inputSepalWidth);
    PetalLengthXvirginica = getFeatureOfSpecies(PetalLengthMeanvirginica,PetalLengthVariancevirginica ,inputPetalLength);
    PetalWidthXvirginica = getFeatureOfSpecies(PetalWidthMeanvirginica,PetalWidthVariancevirginica ,inputPetalWidth);

    //finding total evidence
    double totalEvidence = 0;
    totalEvidence = (0.3333 * SepalLengthXsetosa * SepalWidthXsetosa * PetalLengthXsetosa * PetalWidthXsetosa) + (.3333* SepalLengthXversicolor * SepalWidthXversicolor * PetalLengthXversicolor * PetalWidthXversicolor) + (.3333 * SepalLengthXvirginica * SepalWidthXvirginica * PetalLengthXvirginica * PetalWidthXvirginica);

    //finding probability of setosa
    double ProbabilitySetosa = 0;
    ProbabilitySetosa = (0.3333 * SepalLengthXsetosa * SepalWidthXsetosa * PetalLengthXsetosa * PetalWidthXsetosa)/ totalEvidence;

    //finding probability of versicolor
    double ProbabilityVersicolor = 0;
    ProbabilityVersicolor = (0.3333* SepalLengthXversicolor * SepalWidthXversicolor * PetalLengthXversicolor * PetalWidthXversicolor)/ totalEvidence;

    //finding probability of virginica
    double ProbabilityVirginica = 0;
    ProbabilityVirginica = (.3333 * SepalLengthXvirginica * SepalWidthXvirginica * PetalLengthXvirginica * PetalWidthXvirginica) / totalEvidence;


    cout << "probability of setosa: "<<setprecision(3)<<fixed<<ProbabilitySetosa*100 <<"%"<<endl;
    cout << "probability of versicolor: "<<setprecision(3)<<fixed<<ProbabilityVersicolor*100<<"%" <<endl;
    cout << "probability of virginica: "<<setprecision(3)<<fixed<<ProbabilityVirginica*100<<"%" <<endl;
    return 0;
}
