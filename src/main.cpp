using namespace std;

#include "declarations.h"
#include "generateur.h"
#include "experimentations.h"

int main(int argc,char **argv){

	cerr << "***************Start****************" << endl;

	time_t val=1448639227;
    srand (val);

    TableTuple donnees;

    string dataName;
    string path;
    DataType k;
    DataType n;
    Space d;
    int NB_THREADS;
    int cycles;
    int omega;
    int bufferSize;

    if (argc==8){
        dataName=argv[1];
        if (dataName=="ANTI"||dataName=="INDE"||dataName=="CORR"||dataName=="PERS"){
            k=atoi(argv[2]);
            path="";
        }else{
            k=0;
            path=argv[2];
        }
        omega=atoi(argv[3]);
        cycles=atoi(argv[4]);
        d=atoi(argv[5]);
        NB_THREADS=atoi(argv[6]);
        bufferSize=atoi(argv[7]);
        
    }else{
    	cout << "Arguments insuffisants" << endl;exit(1);
    }

    // generate data

	loadData(dataName, path, omega*cycles, d, k, donnees);

    experimentation_menu(dataName, donnees, d, k, path, omega, bufferSize);

    cerr <<"***************End****************"<< endl;

}



