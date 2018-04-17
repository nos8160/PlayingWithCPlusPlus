
#include <iostream>
#include <sstream>
#include <fstream>
#include <vector>
#include <string>
#include <algorithm>
#include <math.h>
#include <map>

using namespace std;

double stringToDouble(string s) {
    double d;
    stringstream ss(s);
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
double getSepalLengthXsetosa(double mean, double variance, double IP){
    double Sqrt = 0;
    double MeanByVariance = 0;
    double retValue = 0;

    MeanByVariance = (-((IP - mean)*(IP - mean)))/(2*variance);
    MeanByVariance = exp(MeanByVariance);
    Sqrt = 2*3.1416*variance;
    Sqrt = 1/(sqrt(Sqrt));
    retValue = Sqrt * MeanByVariance;

    return retValue;
}

//P(Sepal Width | Setosa)
double getSepalWidthXsetosa(double mean, double variance, double IP){
    double Sqrt = 0;
    double MeanByVariance = 0;
    double retValue = 0;

    MeanByVariance = (-((IP - mean)*(IP - mean)))/(2*variance);
    MeanByVariance = exp(MeanByVariance);
    Sqrt = 2*3.1416*variance;
    Sqrt = 1/(sqrt(Sqrt));
    retValue = Sqrt * MeanByVariance;

    return retValue;
}

//P(Petal Length | Setosa)
double getPetalLengthXsetosa(double mean, double variance, double IP){
    double Sqrt = 0;
    double MeanByVariance = 0;
    double retValue = 0;

    MeanByVariance = (-((IP - mean)*(IP - mean)))/(2*variance);
    MeanByVariance = exp(MeanByVariance);
    Sqrt = 2*3.1416*variance;
    Sqrt = 1/(sqrt(Sqrt));
    retValue = Sqrt * MeanByVariance;

    return retValue;
}


//P(Petal Width | Setosa)
double getPetalWidthXsetosa(double mean, double variance, double IP){
    double Sqrt = 0;
    double MeanByVariance = 0;
    double retValue = 0;

    MeanByVariance = (-((IP - mean)*(IP - mean)))/(2*variance);
    MeanByVariance = exp(MeanByVariance);
    Sqrt = 2*3.1416*variance;
    Sqrt = 1/(sqrt(Sqrt));
    retValue = Sqrt * MeanByVariance;

    return retValue;
}


//////////////////////////////////

//P(Sepal Lenght | versicolor)
double getSepalLengthXversicolor(double mean, double variance, double IP){
    double Sqrt = 0;
    double MeanByVariance = 0;
    double retValue = 0;

    MeanByVariance = (-((IP - mean)*(IP - mean)))/(2*variance);
    MeanByVariance = exp(MeanByVariance);
    Sqrt = 2*3.1416*variance;
    Sqrt = 1/(sqrt(Sqrt));
    retValue = Sqrt * MeanByVariance;

    return retValue;
}

//P(Sepal Width | versicolor)
double getSepalWidthXversicolor(double mean, double variance, double IP){
    double Sqrt = 0;
    double MeanByVariance = 0;
    double retValue = 0;

    MeanByVariance = (-((IP - mean)*(IP - mean)))/(2*variance);
    MeanByVariance = exp(MeanByVariance);
    Sqrt = 2*3.1416*variance;
    Sqrt = 1/(sqrt(Sqrt));
    retValue = Sqrt * MeanByVariance;

    return retValue;
}

//P(Petal Length | versicolor)
double getPetalLengthXversicolor(double mean, double variance, double IP){
    double Sqrt = 0;
    double MeanByVariance = 0;
    double retValue = 0;

    MeanByVariance = (-((IP - mean)*(IP - mean)))/(2*variance);
    MeanByVariance = exp(MeanByVariance);
    Sqrt = 2*3.1416*variance;
    Sqrt = 1/(sqrt(Sqrt));
    retValue = Sqrt * MeanByVariance;

    return retValue;
}


//P(Petal Width | versicolor)
double getPetalWidthXversicolor(double mean, double variance, double IP){
    double Sqrt = 0;
    double MeanByVariance = 0;
    double retValue = 0;

    MeanByVariance = (-((IP - mean)*(IP - mean)))/(2*variance);
    MeanByVariance = exp(MeanByVariance);
    Sqrt = 2*3.1416*variance;
    Sqrt = 1/(sqrt(Sqrt));
    retValue = Sqrt * MeanByVariance;

    return retValue;
}


////////////////////////////////////////////

//P(Sepal Lenght | virginica)
double getSepalLengthXvirginica(double mean, double variance, double IP){
    double Sqrt = 0;
    double MeanByVariance = 0;
    double retValue = 0;

    MeanByVariance = (-((IP - mean)*(IP - mean)))/(2*variance);
    MeanByVariance = exp(MeanByVariance);
    Sqrt = 2*3.1416*variance;
    Sqrt = 1/(sqrt(Sqrt));
    retValue = Sqrt * MeanByVariance;

    return retValue;
}

//P(Sepal Width | virginica)
double getSepalWidthXvirginica(double mean, double variance, double IP){
    double Sqrt = 0;
    double MeanByVariance = 0;
    double retValue = 0;

    MeanByVariance = (-((IP - mean)*(IP - mean)))/(2*variance);
    MeanByVariance = exp(MeanByVariance);
    Sqrt = 2*3.1416*variance;
    Sqrt = 1/(sqrt(Sqrt));
    retValue = Sqrt * MeanByVariance;

    return retValue;
}

//P(Petal Length | virginica)
double getPetalLengthXvirginica(double mean, double variance, double IP){
    double Sqrt = 0;
    double MeanByVariance = 0;
    double retValue = 0;

    MeanByVariance = (-((IP - mean)*(IP - mean)))/(2*variance);
    MeanByVariance = exp(MeanByVariance);
    Sqrt = 2*3.1416*variance;
    Sqrt = 1/(sqrt(Sqrt));
    retValue = Sqrt * MeanByVariance;

    return retValue;
}


//P(Petal Width | virginica)
double getPetalWidthXvirginica(double mean, double variance, double IP){
    double Sqrt = 0;
    double MeanByVariance = 0;
    double retValue = 0;

    MeanByVariance = (-((IP - mean)*(IP - mean)))/(2*variance);
    MeanByVariance = exp(MeanByVariance);
    Sqrt = 2*3.1416*variance;
    Sqrt = 1/(sqrt(Sqrt));
    retValue = Sqrt * MeanByVariance;

    return retValue;
}


int main()
{
    //taking inputs
    double SepalLengthIP;
    double SepalWidthIP;
    double PetalLengthIP;
    double PetalWidthIP;

    cout<< "Please enter Sepal Length: ";
    cin>>SepalLengthIP;
    cout<< "Please enter Sepal Width: ";
    cin>>SepalWidthIP;
    cout<< "Please enter Petal Length: ";
    cin>>PetalLengthIP;
    cout<< "Please enter Petal Width: ";
    cin>>PetalWidthIP;

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
    SepalLengthXsetosa = getSepalLengthXsetosa(SepalLengthMeansetosa,SepalLengthVariancesetosa ,SepalLengthIP);
    SepalWidthXsetosa = getSepalWidthXsetosa(SepalWidthMeansetosa,SepalWidthVariancesetosa ,SepalWidthIP);
    PetalLengthXsetosa = getPetalLengthXsetosa(PetalLengthMeansetosa,PetalLengthVariancesetosa ,PetalLengthIP);
    PetalWidthXsetosa = getPetalWidthXsetosa(PetalWidthMeansetosa,PetalWidthVariancesetosa ,PetalWidthIP);

    //finding Features | versicolor
    double SepalLengthXversicolor,SepalWidthXversicolor,PetalLengthXversicolor,PetalWidthXversicolor;
    SepalLengthXversicolor = getSepalLengthXversicolor(SepalLengthMeanversicolor,SepalLengthVarianceversicolor ,SepalLengthIP);
    SepalWidthXversicolor = getSepalWidthXversicolor(SepalWidthMeanversicolor,SepalWidthVarianceversicolor ,SepalWidthIP);
    PetalLengthXversicolor = getPetalLengthXversicolor(PetalLengthMeanversicolor,PetalLengthVarianceversicolor ,PetalLengthIP);
    PetalWidthXversicolor = getPetalWidthXversicolor(PetalWidthMeanversicolor,PetalWidthVarianceversicolor ,PetalWidthIP);


    //finding Features | virginica
    double SepalLengthXvirginica,SepalWidthXvirginica,PetalLengthXvirginica,PetalWidthXvirginica;
    SepalLengthXvirginica = getSepalLengthXvirginica(SepalLengthMeanvirginica,SepalLengthVariancevirginica ,SepalLengthIP);
    SepalWidthXvirginica = getSepalWidthXvirginica(SepalWidthMeanvirginica,SepalWidthVariancevirginica ,SepalWidthIP);
    PetalLengthXvirginica = getPetalLengthXvirginica(PetalLengthMeanvirginica,PetalLengthVariancevirginica ,PetalLengthIP);
    PetalWidthXvirginica = getPetalWidthXvirginica(PetalWidthMeanvirginica,PetalWidthVariancevirginica ,PetalWidthIP);

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


    cout << "probability of setosa: "<< ProbabilitySetosa*100 <<"%"<<endl;
    cout << "probability of versicolor: "<< ProbabilityVersicolor*100<<"%" <<endl;
    cout << "probability of virginica: "<< ProbabilityVirginica*100 <<"%" <<endl;
    return 0;
}
