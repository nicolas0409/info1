#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *p;
    int  *aux;
    int *q;
    int i;
    p=(int*)malloc(sizeof(int)*5);
    q=(int*)calloc(5,sizeof(int));
    if(p!=NULL)
    {   if(q!=NULL)
    {
    for(i=0;i<5;i++)
    {
        scanf("%d",(p+i));
        scanf("%d",(q+i));
    }
     for(i=0;i<5;i++)
    {
        printf("%d",*(p+i));
    }
       aux=(int*)realloc(p,sizeof(int)*10);
    if(aux!=NULL)
    {
        p=aux;
    }
    for(i=5;i<10;i++)
    {
          scanf("%d",(p+i));

    }
     for(i=0;i<10;i++)
    {
        printf("%d",*(p+i));
    }

     for(i=0;i<5;i++)
    {
        printf("%d",*(q+i));
    }

        free(p);
    free(q);

    }




    }

}
