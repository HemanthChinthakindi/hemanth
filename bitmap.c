#include"bitmap.h"






int Sequence(unsigned int Num)
{
 Num = pow(10,Num)/(10 -1)* Num;
   return Num; 
}




int NivenNumber(unsigned int Num)
{
     int addDigit=0;
    int res=0;
    int dummy=Num;
    while(Num>0)
    {
        addDigit+=Num%10;
        Num = Num/10;

    }
    res=dummy%addDigit;

    if(res==0)
    return 0;
    else
    return 1; 
}














int Find3rdSmallestNumber(unsigned int arrVal[], unsigned int arrSize)
{

    int temp=0, i, j;

    for(i=0; i<arrSize;i++)
    {
        for(j=0;j<arrSize;j++)
        {
            if(arrVal[i]>arrVal[j])
            {
                temp = arrVal[i];
                arrVal[i]=arrVal[i+1];
                arrVal[j]=temp;
            }
        }
    }
return arrVal[2];
}



