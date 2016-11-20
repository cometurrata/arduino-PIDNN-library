#ifndef P_NEURON_HEADER
#define P_NEURON_HEADER

#include "Neuron.h"

class PNeuron : public Neuron
{
    public:
        PNeuron(int initialWeight, PNeuron input 1)
        {
            this->weigth = initialWeight;
        }

        int getOutput(){
          for(char i=0; i<inputNumber; i++)
          {
            output += inputs[i].computeOutput();
          }
        return 0;
        }

        int computeOutput(int input){

        return 0;
        }

    private:
      const unsigned char inputNumber=3;
      const unsigned char outputNumber=3;
      long output = 0;
      PNeuron inputs[2];



}

#endif
