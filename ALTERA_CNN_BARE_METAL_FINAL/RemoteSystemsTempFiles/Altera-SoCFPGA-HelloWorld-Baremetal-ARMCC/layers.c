#include "layers.h"

void ConvLayer_init(ConvLayer * layer, int i_inputSize, int i_fieldSize, int i_stride, int i_zeroPadding, int i_inputChannels, int i_outputChannels, float i_weights[4][4], float *** i_tab){
    int i,j;
	layer->inputSize=i_inputSize;
    layer->fieldSize=i_fieldSize;
    layer->stride=i_stride;
    layer->zeroPadding=i_zeroPadding;
    layer->inputChannels=i_inputChannels;
    layer->outputChannels=i_outputChannels;
    layer->nbNeurons=(int)((i_inputSize-i_fieldSize+2*i_zeroPadding)/i_stride + 1);
    for(i=0;i<4;i++){
    	for(j=0;j<4;j++){
    		layer->weights[i][j]=i_weights[i][j];
    	}
    }
    layer->tab=i_tab;
}

void forward(ConvLayer * layer, float *** inputVolume){
    //float tab[layer->outputChannels][layer->nbNeurons][layer->nbNeurons];
	int i,j,k,l,m,n;
    for(i=0;i<layer->outputChannels;i++){
        for(j=0;j<layer->nbNeurons;j++){
            for(k=0;k<layer->nbNeurons;k++){
                for(l=0;l<layer->fieldSize;l++){
                    for(m=0;m<layer->fieldSize;m++){
                        for(n=0;n<layer->inputChannels;n++){
                            layer->tab[i][j][k]+=inputVolume[n][j*layer->stride+l][k*layer->stride+m]*layer->weights[l][m]; // Add a dimension for output channels
        }}}}}}
    //tab = layer->tab;
}

/*ConvLayer::ConvLayer(int i_inputSize, int i_fieldSize, int i_stride, int i_zeroPadding, int i_inputChannels, int i_outputChannels){
    inputSize=i_inputSize;
    fieldSize=i_fieldSize;
    stride=i_stride;
    zeroPadding=i_zeroPadding;
    inputChannels=i_inputChannels;
    outputChannels=i_outputChannels;
    nbNeurons=int((inputSize-fieldSize+2*zeroPadding)/stride + 1);
    vector< vector< vector<float> > > tab(outputChannels, vector< vector<float> > (nbNeurons, vector<float> (nbNeurons)));
    }*/
    

/*vector< vector <vector<float> > > ConvLayer::forward(const vector< vector< vector<float> > >& inputVolume, const vector< vector<float> >& weights){
    /*for(int i=0;i<outputChannels;i++){
        vector< vector<float> > x(nbNeurons, vector<float> (nbNeurons));
        tab.push_back(x);}
    for(int i=0;i<outputChannels;i++){
        for(int j=0;j<nbNeurons;j++){
            for(int k=0;k<nbNeurons;k++){
                for(int l=0;l<fieldSize;l++){
                    for(int m=0;m<fieldSize;m++){
                        for(int n=0;n<inputChannels;n++){
                            tab[i][j][k]+=inputVolume[n][j*stride+l][k*stride+m]*weights[l][m]; // Add a dimension for output channels
        }}}}}}
        return tab;}

MaxpoolLayer::MaxpoolLayer(int i_inputSize, int i_fieldSize, int i_stride, int i_zeroPadding, int i_inputChannels){

    inputSize=i_inputSize;
    fieldSize=i_fieldSize;
    stride=i_stride;
    zeroPadding=i_zeroPadding;
    inputChannels=i_inputChannels;
    nbNeurons=int((inputSize-fieldSize+2*zeroPadding)/stride + 1);
}


/*class MaxpoolLayer():
    def __init__(self,inputSize,fieldSize,stride,zeropadding,inputChannels):
        self.ainputSize=inputSize
        self.fieldSize=fieldSize
        self.stride=stride
        self.inputChannels=inputChannels
        self.nbNeurons=int((self.inputSize-self.fieldSize)/self.stride +1)
    def forward(self,inputVolume):
        tab=[[[0 for i in range(self.inputSize)] for j in range(self.inputSize)] for k in range(self.inputChannels)]
        for i in range(self.inputChannels):
            for j in range(self.nbNeurons):
                for k in range(self.nbNeurons):
                    for l in range(self.fieldSize):
                        for m in range(self.fieldSize):
                            tab[i][j][k]=max(tab[i][j][k],inputVolume[i][j*self.stride+l][k*self.stride+m])
        return tab
        

class ReluLayer():
    def __init__(self,inputSize,inputChannels):
        self.inputSize=inputSize
        self.inputChannels=inputChannels

    def forward(self,inputVolume):
        tab=[[[0 for i in range(self.inputSize)] for j in range(self.inputSize)] for k in range(self.inputChannels)]
        for i in range(self.inputChannels):
            for j in range(self.inputSize):
                for k in range(self.inputSize):
                        tab[i][j][k]=max(inputVolume[i][j][k],0)
        return tab

class FullyConnected():
    def __init__(self,inputSize,outputSize,inputChannels,weights):
        self.inputSize=inputSize
        self.outputSize
        self.inputChannels=inputChannels
        self.weights=weights

    def forward(self,inputVolume):
        tab=[0 for i in range(self.inputSize*self.inputSize*self.inputChannels)]
        for i in range(self.inputChannels):
            for j in range(self.inputSize):
                for k in range(self.inputSize):
                    tab[self.inputSize(i*self.inputSize+j)+k]=inputVolume[i][j][k]
        tab2=[0 for i in range(outputSize)]
        for i in range(outputSize):
            for j in range(len(tab)):
                tab2[i]+=tab[j]*weights[i][j]
        return tab2

class SoftMax():
    def forward(self,inputRow):
        tab=[0 for i in range(len(inputRow))]
        sumSoft=0
        for i in range(len(inputRow)):
            sumSoft+=exp(inputRow[i])
        for i in range(len(inputRow)):
            tab[i]=exp(inputRow[i])/sumSoft
        return tab*/

