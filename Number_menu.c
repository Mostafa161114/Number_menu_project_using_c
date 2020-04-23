#include<stdio.h>

int main()
{
     int i,j,Length_data,Data[100],Temp,Choice_item,Insert_number,Compare=0,Delete_number,Compere_1,Search_number,Search_index,Search_identity=0;
    printf("enter how many data do u want? \n");
    scanf("%d",&Length_data);
    printf("enter the %d values :\n",Length_data);
    for(i=0; i<Length_data; i++)
    {
        scanf("%d",&Data[i]);
    }

    for(i=0; i<Length_data-1; i++)
    {
        for(j=i+1; j<Length_data; j++)
        {
            if(Data[i]>Data[j])
            {
                Temp=Data[i];
                Data[i]=Data[j];
                Data[j]=Temp;
            }
        }
    }
      printf("the sorted data are :\n");
    for(i=0; i<Length_data; i++)
    {
        printf("%d\t",Data[i]);
    }
printf("\n\n");
printf("enter your choice:\n\n(1).insert\n(2).delete\n(3).search\n(4).display\n(5).exit\n");


      while(1)
{
    scanf("%d",&Choice_item);
 if(Choice_item==5)
    break;
  else if(Choice_item==1)
    {
        Compare=0;
          printf("enter the number which do u want to insert\n");
  scanf("%d",&Insert_number);
    for(i=0; i<Length_data; i++)
  {
      if(Data[i]<Insert_number)
      {
        Compare=Compare+1;
      }

  }

 for(i=Length_data; i>=Compare; i--)
  {
      Data[i+1]=Data[i];
  }
  Data[Compare]=Insert_number;
  Length_data++;
 printf("insert completed:\n");
    }

    else if(Choice_item==2)
    {
        Compere_1=0;
         printf("enter which number do want to deleted :\n");
     scanf("%d",&Delete_number);

      for(i=0; i<Length_data; i++)
  {
      if(Data[i]==Delete_number)
      {
         Compere_1=i;
        break;
      }
    }


     for(i=Compere_1; i<=Length_data; i++)
  {
     Data[i]=Data[i+1];
  }
 Length_data=Length_data-1;
 printf("deleted completed:\n");
    }

    else if(Choice_item==3)
    {
        Search_identity=0;
        Search_index=0;
         printf("enter which number do u want to search :\n");
     scanf("%d",&Search_number);
     for(i=0; i<Length_data; i++)
     {
         if(Data[i]==Search_number)
         {
             Search_index=i;
             Search_identity=1;
         }
     }
     if(Search_identity==0)
         printf("search unsucessful\n");
     else
        printf("search sucessful\n the index number is %d",Search_index+1);

        printf("search is completed:\n");
    }

    else if(Choice_item==4)
    {
        for(i=0; i<Length_data; i++)
        {
            printf("%d\t",Data[i]);
        }
        printf("\ndisplay is completed:\n");
    }
    else
    {
        printf("your choose is out of menu:\n");
    }
    printf("u can choose menu again :\n");
}

return 0;

}
