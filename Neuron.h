#ifndef NEURON_HEADER
#define NEURON_HEADER


class Neuron
{
    public:
        virtual int getOutput();
        virtual int computeOutput(int input);

    protected:
      int weigth;
      unsigned char nbOfInputs;
      

}

#endif
