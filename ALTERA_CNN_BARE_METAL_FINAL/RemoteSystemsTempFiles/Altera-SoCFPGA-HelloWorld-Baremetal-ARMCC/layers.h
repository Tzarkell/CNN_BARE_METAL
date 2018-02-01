#ifndef LAYERS_H
#define LAYERS_H

typedef struct ConvLayer {
        int inputSize;
        int fieldSize;
        int stride;
        int zeroPadding;
        int inputChannels;
        int outputChannels;
        int nbNeurons;
        float weights[4][4];
        float *** tab;
} ConvLayer;

void ConvLayer_init(ConvLayer * layer, int i_inputSize, int i_fieldSize, int i_stride, int i_zeroPadding, int i_inputChannels, int i_outputChannels, float i_weights[4][4], float*** i_tab);
void forward(ConvLayer * layer, float *** image);
#endif
