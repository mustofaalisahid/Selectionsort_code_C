#include "pustaka.h"

int countArray ( int data[])
{
    int jml = 0;
    while ( data[jml] != (int)NULL )
    {
        jml++;
    }
    return jml;
}

int cekUrut (int data[])
{
    int i;
    int index = 0;
    for (i = 0 ; i < countArray(data) ; i++)
    {
        if ( data[i] < data [i+1] )
        {index++;}
    }
    if ( index+1 == countArray(data) ){return 1 ;}
    else {return 0 ;}
}


void compressArray(int data[])
{
     int c, d;
    int jumlah=0;
    for(c=0; data[c]!='n'; c++){
        jumlah=jumlah+1;
    }
    int i, temp;
    for(i=0; i<jumlah; i++){
        for(d=0; d<jumlah-1-i; d++){
            if(data[d]==0){
                temp = data[d];
                data[d] = data[d+1];
                data[d+1] = temp;
            }
        }
    }
    for(c=0; data[c]!=0; c++){printf("%d ", data[c]);};
}


void selectionSort1(int data[])
{
    int c, d, e, min, temp;

    for(c=0; c<5; c++){
        min=c;
        for(d=c+1; d<5; d++){
            if(data[d]<data[min]){min=d;}
        }
        temp = data[c];
        data[c] = data[min];
        data[min] = temp;

        for(e=0; e<5; e++){printf("%d  ", data[e]);};
        printf("\n");
    };
}


void selectionSort2(int data[])
{
    int c, d, e, min, temp;

    for(c=0; c<5; c++){
        min=c;
        for(d=c+1; d<5; d++){
            if(data[d]<data[min]){min=d;}
        }
        temp = data[c];
        data[c] = data[min];
        data[min] = temp;

        if(cekUrut(data)==0){for(e=0; e<5; e++){printf("%d  ", data[e]);};
        printf("\n");}
    }
    for(e=0; e<5; e++){printf("%d  ", data[e]);};
}


int getMedian(int data[])
{
    int c, d, min, temp;
    for(c=0; c<5; c++){
        min=c;
        for(d=c+1; d<5; d++){
            if(data[d]<data[min]){min=d;}
        }
        temp = data[c];
        data[c] = data[min];
        data[min] = temp;
    };

    int med;
    med=data[(5/2)];
    return med;
}
