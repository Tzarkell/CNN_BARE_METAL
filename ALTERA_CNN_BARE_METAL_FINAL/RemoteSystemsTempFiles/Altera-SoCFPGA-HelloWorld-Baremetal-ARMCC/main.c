#include <stdio.h>
#include "layers.h"
#include <time.h>
#include "img.h"

int main(int argc, char * argv[]){

	int i,j,k;
	ConvLayer * layer;
	const int inputSize=32;
    const int fieldSize=4;
    const int stride=2;
    const int zeroPadding=0;
    const int inputChannels=3;
    const int outputChannels=1;
    const int nbNeurons=(int)((inputSize-fieldSize+2*zeroPadding)/stride +1);//225

	double time;
	clock_t end;

    float weights[4][4] = { {0.03,0.02,0.04,0.01}, {0.02,0.03,0.03,0.02}, {0.02,0.05,0.02,0.01}, {0.01,0.01,0.03,0.05} };
    float tab1[outputChannels][nbNeurons][nbNeurons];
    for(i=0;i<outputChannels;i++){
      	for(j=0;j<nbNeurons;j++){
      		for(k=0;k<nbNeurons;k++){
      			tab1[i][j][k] = 0;
      		}
       	}
    }
/*
	clock_t begin = clock();
    ConvLayer_init(layer,inputSize,fieldSize,stride,zeroPadding,inputChannels,outputChannels,weights, (float***)tab1);
    end = clock();
    time = (double)(end-begin)/CLOCKS_PER_SEC;
    printf("execution time = %lf s\n", time);
*/
	//clock_t begin = clock();
    //forward(layer,(float***)img);
    //printf("tab2[0][0][0]=%f",layer->tab[0][0][0]);
    //end = clock();
    //time = (double)(end-begin)/CLOCKS_PER_SEC;
    //printf("execution time = %lf s\n", time);


/*
    //validation de ConvLayer_init()
    printf("inputSize=%d\n",layer->inputSize);
    printf("fieldSize=%d\n",layer->fieldSize);
    printf("stride=%d\n",layer->stride);
    printf("zeroPadding=%d\n",layer->zeroPadding);
    printf("inputChannels=%d\n",layer->inputChannels);
    printf("outputChannels=%d\n",layer->outputChannels);
    printf("nbNeurons=%d\n",layer->nbNeurons);
    for(i=0;i<4;i++){
      	for(j=0;j<4;j++){

       	}
    }
    for(i=0;i<outputChannels;i++){
      	for(j=0;j<nbNeurons;j++){
      		for(k=0;k<nbNeurons;k++){
      			printf("tab1[%d][%d][%d]=%f\n",i,j,k,layer->tab[i][j][k]);
      		}
       	}
    }
*/

    /*vector <vector<float> > weights1;
    vector <vector<float> > weights2;
    weights2.push_back({0.1,0.2});
    weights2.push_back({0.3,0.35});
    cout<<weights1.size()<<endl;
    cout<<weights1[0][2]<<endl;

    ConvLayer layer1(452,4,2,0,3,1);
    ConvLayer layer2(225,2,5,0,1,1);

    ifstream im("cat_origin.jpeg",ios::ate);
    cout<<im.tellg()<<endl;*/
    return 0;  
}
