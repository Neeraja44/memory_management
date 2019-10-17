26 of 423
Fwd:
Inbox
	x
Andria Maria Ajai
	
	AttachmentsSep 5, 2019, 9:47 AM
---------- Forwarded message --------- From: Abhiram Pai <abhirampai1999@gmail.com> Date: Thu, Sep 5, 2019 at 8:57 AM Subject: Fwd: To: Andria Maria ajai <andri
Amala Abraham
	
	AttachmentsSep 6, 2019, 3:14 PM
---------- Forwarded message --------- From: Andria Maria Ajai <andriaajai17@gmail.com> Date: Thu, Sep 5, 2019 at 9:47 AM Subject: Fwd: To: angelin Mary Jose <a
Andria Maria Ajai <andriaajai17@gmail.com>
	
AttachmentsSep 6, 2019, 3:15 PM
	
to csemits2k17


---------- Forwarded message ---------
From: Abhiram Pai <abhirampai1999@gmail.com>
Date: Thu, Sep 5, 2019 at 8:57 AM
Subject: Fwd:
To: Andria Maria ajai <andriaajai17@gmail.com>




---------- Forwarded message ---------
From: Akshay KH <akshaykh1999@gmail.com>
Date: Thu, Sep 5, 2019 at 8:54 AM
Subject:
To: Akshay KH <akshaykh1999@gmail.com>, Abhiram R PAI (AbHI Pai) <abhirampai1999@gmail.com>, <aashnananu@gmail.com>, <ajilpaul.268@gmail.com>, Alisha Antony <alisha.antony98@gmail.com>


Disk schedule


-- 
Yours Faithfully,

ABHIRAM PAI 
abhirampai1999@gmail.com

 

-- 
You received this message because you are subscribed to the Google Groups "CSE MITS 2017" group.
To unsubscribe from this group and stop receiving emails from it, send an email to csemits2k17+unsubscribe@googlegroups.com.
To view this discussion on the web visit https://groups.google.com/d/msgid/csemits2k17/CAFN5w7juG2iQ4yRQwpVjjDpGwfMW1bXsdL%3DAetpcV3m__xs8qA%40mail.gmail.com.

Attachments area
	
	
	

#include <stdlib.h>
#include <stdio.h>

void sort(int a[],int n)
{
    int i,temp=0,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
}

void fcfs(int m,int q_size,int h,int queue[])
{
    int i,thm=0,diff=0,head;
    head=h;

    for(i=0;i<q_size;i++)
    {
     	  diff=abs(queue[i]-head);
     	  thm+=diff;
     	  head=queue[i];
    }
    printf("\nTotal head movement : %d\n",thm);          
}

void scan(int m,int q_size,int h,int queue[])
{
    max=m;head=h;

    printf("\nEnter the previous position of head :");
    scanf("%",&prehead);

    for (i=0;i<q_size;i++) array[i]=queue[i];
    sort(arra,q_size)

    

    if(head>prhead)
    {
        thm=abs(max-head+max-array[0]);
    }
    else
    {
        
    }
    print("\nTotal head movement : %d\n",thm);
}

void cscan(int m, int q_size,int h,int queue[])
{
  int i,j,array[20],thm=0,prehead=0,head=0,max=0;
  head=h;max=m;

  for (i=0;i<q_size;i++) array[i]=queue[i];
  sort(array,q_size);

  printf("\nEnter the previous position of head :");
  scanf("%d",&prehead);

    if(head>prehead)
    {
        thm=abs(head-max)+abs(max-0);
        for(i=0;i<q_size;i++)
        {
            if(array[i]>head)
            {
                thm+=abs(0-array[i-1]);
                break;
            }
        }
    }
    else
    {
        thm=abs(head-0)+abs(max-0);
        for(i=q_size-1;i>=0;i--)
        {
            if(array[i]<head)
            {
                thm+=abs(max-array[i+1]);
                break;
            }
        }
    }

    printf("\nTotal head movement : %d\n",thm);
}


int main(){
int ans,max,n,head,queue[20];

printf("Enter the max range of disk\n");
scanf("%d",&max);
max=max-1;
printf("Enter the size of queue request\n");
scanf("%d",&n);
printf("Enter the queue of disk positions to be read\n");
    for(int i=0;i<n;i++)
    scanf("%d",&queue[i]);
printf("Enter initial head position\n");
scanf("%d",&head);

do{
    printf("----------------\n");
    printf("1\t FCFS\n");
    printf("2\t SCAN\n");
    printf("3\t CSCAN\n");
    printf("4\t EXIT\n");
    printf("----------------\n");
    scanf("%d",&ans);

    switch (ans)
    {
     case 1: fcfs(max,n,head,queue);
        break;

     case 2: scan(max,n,head,queue);
        break;

     case 3: cscan(max,n,head,queue);
        break;

    case 4: exit(0);
        break;

    default:
        break;
    }
}while(1);
return 0;}




