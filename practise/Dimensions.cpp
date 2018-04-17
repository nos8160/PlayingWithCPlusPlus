#include <iostream>
#include <sstream>
#include <string>
#include <fstream>
#include<cmath>
//#include <hash_map>
#include <ext/hash_map>

//#include <string.h>


using namespace std;
using namespace __gnu_cxx;
typedef hash_map<char, double> flowerMap;

int main(){
    ifstream infile("Iris.csv"); // for example
    ofstream outfile;

    string id;
    string SepalLengthCm;
    string SepalWidthCm;
    string PetalLengthCm;
    string PetalWidthCm;
    string Species;

    int i=0,count =0;

    double ida[150];
    double sl[150];
    double sw[150];
    double pl[150];
    double pw[150];
    double sp[150];
    getline(infile,id,',');
    while (!infile.eof()){

        //getline(infile,id,',');
        getline(infile,SepalLengthCm,',');
        getline(infile,SepalWidthCm,',');
        getline(infile,PetalLengthCm,',');
        getline(infile,PetalWidthCm,',');
        getline(infile,Species,',');






        //istringstream ( id ) >> ida[i];
        istringstream ( SepalLengthCm ) >> sl[i];
        istringstream ( SepalWidthCm ) >> sw[i];
        istringstream ( PetalLengthCm ) >> pl[i];
        istringstream ( PetalWidthCm ) >> pw[i];
        istringstream ( Species ) >> sp[i];

        i = i+1;
        count++;
    }

        //cout <<"Array Size: " <<count;

        infile.close();

        int countslS = 0,countslM = 0,countslH=0;
        int countswS = 0,countswM = 0,countswH=0;

        for(int j=0;j<150;j++)
        {
            double slS = 5.018;
            double slM = 6.668;
            double swS = 2.622;
            double swM = 3.486;

            if(sl[j] <= slS)
                countslS++;
            if(sl[j] > slS && sl[j] <= slM)
                countslM++;
            if(sl[j] > slM)
                countslH++;
            if(sw[j] <= swS)
                countswS++;
            if(sw[j] > swS && sw[j] <= swM)
                countswM++;
            if(sw[j] > swM)
                countswH++;
        }


        double countIris=0;
        double countsetosaLL=0,countsetosaLM=0,countsetosaLH=0;
        double countsetosaML=0,countsetosaMM=0,countsetosaMH=0;
        double countsetosaHL=0,countsetosaHM=0,countsetosaHH=0;

        for(int j=0;j<50;j++)
        {
            double slS = 5.018;
            double slM = 6.668;
            double swS = 2.622;
            double swM = 3.486;

            if(sl[j] <= slS && sw[j] <=swS )
                countsetosaLL++;
            if(sl[j] <= slS && sw[j] >swS && sw[j] <=swM)
                countsetosaLM++;
            if(sl[j] <= slS && sw[j] >swM)
                countsetosaLH++;

            if(sl[j] > slS && sl[j] <= slM && sw[j] <=swS )
                countsetosaML++;
            if(sl[j] > slS && sl[j] <= slM && sw[j] >swS && sw[j] <=swM )
                countsetosaMM++;
            if(sl[j] > slS && sl[j] <= slM && sw[j] >swM )
                countsetosaMH++;

            if(sl[j] > slM && sw[j] <=swS )
                countsetosaHL++;
            if(sl[j] > slM && sw[j] >swS && sw[j] <=swM)
                countsetosaHM++;
            if(sl[j] > slM && sw[j] >swM)
                countsetosaHH++;
            countIris++;


        }


        double countversicolorLL=0,countversicolorLM=0,countversicolorLH=0;
        double countversicolorML=0,countversicolorMM=0,countversicolorMH=0;
        double countversicolorHL=0,countversicolorHM=0,countversicolorHH=0;

        for(int j=50;j<100;j++)
        {
            double slS = 5.018;
            double slM = 6.668;
            double swS = 2.622;
            double swM = 3.486;

            if(sl[j] <= slS && sw[j] <=swS )
                countversicolorLL++;
            if(sl[j] <= slS && sw[j] >swS && sw[j] <=swM)
                countversicolorLM++;
            if(sl[j] <= slS && sw[j] >swM)
                countversicolorLH++;

            if(sl[j] > slS && sl[j] <= slM && sw[j] <=swS )
                countversicolorML++;
            if(sl[j] > slS && sl[j] <= slM && sw[j] >swS && sw[j] <=swM )
                countversicolorMM++;
            if(sl[j] > slS && sl[j] <= slM && sw[j] >swM )
                countversicolorMH++;

            if(sl[j] > slM && sw[j] <=swS )
                countversicolorHL++;
            if(sl[j] > slM && sw[j] >swS && sw[j] <=swM)
                countversicolorHM++;
            if(sl[j] > slM && sw[j] >swM)
                countversicolorHH++;


        }

        double countvirginicaLL=0,countvirginicaLM=0,countvirginicaLH=0;
        double countvirginicaML=0,countvirginicaMM=0,countvirginicaMH=0;
        double countvirginicaHL=0,countvirginicaHM=0,countvirginicaHH=0;

        for(int j=100;j<150;j++)
        {
            double slS = 5.018;
            double slM = 6.668;
           // double slM = 6.668;
            double swS = 2.622;
            double swM = 3.486;

            if(sl[j] <= slS && sw[j] <=swS )
                countvirginicaLL++;
            if(sl[j] <= slS && sw[j] >swS && sw[j] <=swM)
                countvirginicaLM++;
            if(sl[j] <= slS && sw[j] >swM)
                countvirginicaLH++;

            if(sl[j] > slS && sl[j] <= slM && sw[j] <=swS )
                countvirginicaML++;
            if(sl[j] > slS && sl[j] <= slM && sw[j] >swS && sw[j] <=swM )
                countvirginicaMM++;
            if(sl[j] > slS && sl[j] <= slM && sw[j] >swM )
                countvirginicaMH++;

            if(sl[j] > slM && sw[j] <=swS )
                countvirginicaHL++;
            if(sl[j] > slM && sw[j] >swS && sw[j] <=swM)
                countvirginicaHM++;
            if(sl[j] > slM && sw[j] >swM)
                countvirginicaHH++;

        }



        double sumLL = countsetosaLL+countversicolorLL+countvirginicaLL;
        double sumLM = countsetosaLM+countversicolorLM+countvirginicaLM;
        double sumLH = countsetosaLH+countversicolorLH+countvirginicaLH;
        double sumML = countsetosaML+countversicolorML+countvirginicaML;
        double sumMM = countsetosaMM+countversicolorMM+countvirginicaMM;
        double sumMH = countsetosaMH+countversicolorMH+countvirginicaMH;
        double sumHL = countsetosaHL+countversicolorHL+countvirginicaHL;
        double sumHM = countsetosaHM+countversicolorHM+countvirginicaHM;
        double sumHH = countsetosaHH+countversicolorHH+countvirginicaHH;


        double pIR=countIris /count;

        double pLL=sumLL/count;
        double pLM=sumLM/count;
        double pLH=sumLH/count;
        double pML=sumML/count;
        double pMM=sumMM/count;
        double pMH=sumMH/count;
        double pHL=sumHL/count;
        double pHM=sumHM/count;
        double pHH=sumHH/count;



        double pLLIS = countsetosaLL/sumLL;
        double pLMIS = countsetosaLM/sumLM;
        double pLHIS = countsetosaLH/sumLH;

        double pMLIS = countsetosaML/sumML;
        double pMMIS = countsetosaMM/sumMM;
        double pMHIS = countsetosaMH/sumMH;

        double pHLIS = countsetosaHL/sumHL;
        double pHMIS = countsetosaHM/sumHM;
        double pHHIS = countsetosaHH/sumHH;


        double pLLIV = countversicolorLL/sumLL;
        double pLMIV = countversicolorLM/sumLM;
        double pLHIV = countversicolorLH/sumLH;

        double pMLIV = countversicolorML/sumML;
        double pMMIV = countversicolorMM/sumMM;
        double pMHIV = countversicolorMH/sumMH;

        double pHLIV = countversicolorHL/sumHL;
        double pHMIV = countversicolorHM/sumHM;
        double pHHIV = countversicolorHH/sumHH;


        double pLLIVi = countvirginicaLL/sumLL;
        double pLMIVi = countvirginicaLM/sumLM;
        double pLHIVi = countvirginicaLH/sumLH;

        double pMLIVi = countvirginicaML/sumML;
        double pMMIVi = countvirginicaMM/sumMM;
        double pMHIVi = countvirginicaMH/sumMH;

        double pHLIVi = countvirginicaHL/sumHL;
        double pHMIVi = countvirginicaHM/sumHM;
        double pHHIVi = countvirginicaHH/sumHH;



        //cout<<"Value :"<<pLLIS<<'\n';
        //cout<<"Value :"<<countsetosaLL<<'\n';
        //cout<<"Value :"<<sumLL<<'\n';


        double septalLength=0,septalWidth=0;

        cout <<"Enter Septal Length: ";
        cin >>septalLength;
        cout << septalLength<<'\n';

        cout <<"Enter Septal Width: ";
        cin >>septalWidth;
        cout << septalWidth<<'\n';

            double slS = 5.018;
            double slM = 6.668;
            double swS = 2.622;
            double swM = 3.486;

        double pISLL=0,pISLM=0,pISLH=0;

        double setosa=0,versicolor=0,virginica=0;

        if(septalLength< 4.2 || septalLength >8.2 || septalWidth < 1.8 || septalWidth > 4.7)
        {
            cout << "Value is out of Range."<<'n';
        }
        else{
            if(septalLength<=slS && septalWidth <=swS )
        {
            setosa =pLLIS;
            versicolor =pLLIV;
            virginica =pLLIVi;

        }
        else if(septalLength<=slS && septalWidth >swS && septalWidth <=swM )
        {
            setosa =pLMIS;
            versicolor =pLMIV;
            virginica =pLMIVi;
        }
        else if(septalLength<=slS && septalWidth >swM )
        {
            setosa =pLHIS;
            versicolor =pLHIV;
            virginica =pLHIVi;
        }

        else if(septalLength >slS && septalLength <=slM && septalWidth <=swS )
        {
            setosa =pMLIS;
            versicolor =pMLIV;
            virginica =pMLIVi;
        }
        else if(septalLength >slS && septalLength <=slM && septalWidth >swS && septalWidth <=swM )
        {
            setosa =pMMIS;
            versicolor =pMMIV;
            virginica =pMMIVi;
        }
        else if(septalLength >slS && septalLength <=slM && septalWidth >swM )
        {
            setosa =pMHIS;
            versicolor =pMHIV;
            virginica =pMHIVi;
        }


        else if(septalLength >slM && septalWidth <=swS )
        {
            setosa =pHLIS;
            versicolor =pHLIV;
            virginica =pHLIVi;
        }
        else if(septalLength >slM && septalWidth >swS && septalWidth <=swM )
        {
            setosa =pHMIS;
            versicolor =pHMIV;
            virginica =pHMIVi;
        }
        else if(septalLength >slM && septalWidth >swM )
        {
            setosa =pHHIS;
            versicolor =pHHIV;
            virginica =pHHIVi;
        }
            cout <<"Probability of Iris-Setosa: "<<setosa<<'\n';;
            cout <<"Probability of Iris-Versicolor: "<<versicolor<<'\n';
            cout <<"Probability of Iris-Virginica: "<<virginica<<'\n';
        }

            cout <<"Probability of Iris-Setosa can not measure"<<'\n';;
            cout <<"Probability of Iris-Versicolor can not measure"<<'\n';
            cout <<"Probability of Iris-Virginica can not measure "<<'\n';



        //string isSetosa,isVersicolor,isVirginica;

        //flowerMap   irisMap;

    return 0;

}

