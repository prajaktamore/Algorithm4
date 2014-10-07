/*
All three algorithms i.e. Brute Force, Greedy Algorithm (4 different types) and Dynamic Programming algorithms are written in the single file
Generate random input and respective weight and profit for each.
*/
#include <sys/time.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAXWEIGHT 100

int num_vertices=0;
int capacity=0, max=0 , sumW=0, sumP = 0; ;
int profit[50], weight[50];
int totalCapacity=0;
/*Dynamic Programming technique Method*/
void knapsack(int, int*, int*, int);
/*Brute Force Technique Method*/
void bruteForce();
/*Brute Force Internal method call Method*/
int solve2( int ans);
/*Greedy Technique MaxBenefit Method*/
void maxBenefitFirst();
/*Greedy Technique MinWeight Method*/
void minWeightFirst();
/*Greedy Technique MAxWeight Method*/
void maxWeightFirst();
/*Greedy Technique MaxBenefitPerUnit Method*/
void maxBenefitPerUnit();

/*Brute Force Technique Method*/
void bruteForce()
{
    int ans = 1;
    int m;
    for (m = 0; m < num_vertices+1 ; ++m)    /* LOOP BEGINS */
    {
        if (m == 0)
            ans = 1;
        else
            ans = ans * 2;
    }

    max = solve2(ans);

    printf("\n\n The maxProfit is :  %d \n",max);
}
/*Brute Force Internal method call Method*/
int solve2( int ans)
{
    int j,k=0,t=0;
    int S[num_vertices],Q[ans];
	int i = 0;
    int enumerate[50];
    int count=0;
    //int myMax=0;

    capacity = 0.6 * totalCapacity;
    printf("\n\n capacity=%d", capacity);

    for(t=0;t<=num_vertices;t++)
	{
		S[t]=0;
	}


	max = sumP;

  // considered all items
   for(j=0;j<ans;j++)
	{
        sumW=sumP=0;
        max = 0;
        count = 0;

        for(i=0; i<num_vertices ; i++ )
        {
            if(S[i] ==1)
            {
				sumW = sumW + weight[i];
                if((sumW) <= capacity)
                {
                    if((sumP+profit[i]) > max)
                    {
                        sumP = profit[i]+sumP;
                        max=sumP;
                        printf("\n\tNode selected:%d profit:%d weight:%d",i,profit[i],weight[i]);
				    }
				  }
            }
        }

         printf("\n\nMaximum capacity for this set is %d\n",max);
        Q[j] = max;

        //increment S[k]
        k=0;
        while(k<num_vertices &&  S[k] == 1)
        {
            S[k] = 0;
            k = k + 1;
        }

        if(k<num_vertices)
            S[k]=1;

    }


    int final_max = Q[0];
    for (i = 1; i < ans; i++)
    {
        if (Q[i] > final_max)
            //if(Q[i] <= capacity)
                final_max = Q[i];
    }

    printf("\n\nfinal max = %d ",final_max);

    int k1=0;
    for(k1=0;k1<count;k1++)
    {
        printf("\nThe benefits included are %d",enumerate[k1]);
    }

    return(final_max);
}

/*Greedy Method in turns call all 4 technique*/
void greedyMethod()
{
    capacity = 0.6 * totalCapacity;
    //fill_sack();
    maxBenefitFirst();
    minWeightFirst();
    maxWeightFirst();
    maxBenefitPerUnit();
}

void maxBenefitFirst()
{
    int localProfit[num_vertices];
    int localWeight[num_vertices];
    int temp=0;
    int i=0,j=0;

    printf("\n\n capacity=%d", capacity);

    for(i=0; i<num_vertices; i++)
    {
        localProfit[i] = profit[i];
        localWeight[i] = weight[i];
    }


    for(i=0;i<num_vertices;i++)
    {
        for(j=i;j<num_vertices;j++)
        {
            if(localProfit[i] < localProfit[j])
            {
                temp=localProfit[i];
                localProfit[i]=localProfit[j];
                localProfit[j]=temp;

                temp=localWeight[i];
                localWeight[i]=localWeight[j];
                localWeight[j]=temp;
            }
        }
    }


    printf("\n\n ----------Greedy Method Maximum Benefit First-----------");

    int w=0,p=0, enumerator[num_vertices], enumerator1[num_vertices] , count=0;
    for(i=0; i<num_vertices; i++)
    {
        printf("\n Profit: %d Weight:%d", localProfit[i], localWeight[i]);
        if(w<capacity)
        {
            w = w + localWeight[i];
            if(w<capacity)
            {
                p = p + localProfit[i];
                enumerator[count] = localProfit[i];
                enumerator1[count] = localWeight[i];
                count++;
            }
        }
    }

    printf("\nMaximum profit:%d", p);

    printf("\n\n ------------------------------------------------------------");

}


void minWeightFirst()
{
    int localProfit[num_vertices];
    int localWeight[num_vertices];
    int temp=0;
    int i=0,j=0;

    printf("\n\n capacity=%d", capacity);

    for(i=0; i<num_vertices; i++)
    {
        localProfit[i] = profit[i];
        localWeight[i] = weight[i];
    }


    for(i=0;i<num_vertices;i++)
    {
        for(j=i;j<num_vertices;j++)
        {
            if(localWeight[i] > localWeight[j])
            {
                temp=localProfit[i];
                localProfit[i]=localProfit[j];
                localProfit[j]=temp;

                temp=localWeight[i];
                localWeight[i]=localWeight[j];
                localWeight[j]=temp;
            }
        }
    }


    printf("\n\n ----------Greedy Method Minimun Weight First-----------");

    int w=0,p=0, enumerator[num_vertices], enumerator1[num_vertices] , count=0;
    for(i=0; i<num_vertices; i++)
    {
        printf("\n Profit: %d Weight:%d", localProfit[i], localWeight[i]);
        if(w<capacity)
        {
            w = w + localWeight[i];
            if(w<capacity)
            {
                p = p + localProfit[i];
                enumerator[count] = localProfit[i];
                enumerator1[count] = localWeight[i];
                count++;
            }
        }
    }

    printf("\nMaximum profit:%d", p);

    printf("\n\n ------------------------------------------------------------");

}


void maxWeightFirst()
{
    int localProfit[num_vertices];
    int localWeight[num_vertices];
    int temp=0;
    int i=0,j=0;

    printf("\n\n capacity=%d", capacity);

    for(i=0; i<num_vertices; i++)
    {
        localProfit[i] = profit[i];
        localWeight[i] = weight[i];
    }


    for(i=0;i<num_vertices;i++)
    {
        for(j=i;j<num_vertices;j++)
        {
            if(localWeight[i] < localWeight[j])
            {
                temp=localProfit[i];
                localProfit[i]=localProfit[j];
                localProfit[j]=temp;

                temp=localWeight[i];
                localWeight[i]=localWeight[j];
                localWeight[j]=temp;
            }
        }
    }


    printf("\n\n ----------Greedy Method Maximum Weight First-----------");

    int w=0,p=0, enumerator[num_vertices], enumerator1[num_vertices] , count=0;
    for(i=0; i<num_vertices; i++)
    {
        printf("\n Profit: %d Weight:%d", localProfit[i], localWeight[i]);
        if(w<capacity)
        {
            w = w + localWeight[i];
            if(w<capacity)
            {
                p = p + localProfit[i];
                enumerator[count] = localProfit[i];
                enumerator1[count] = localWeight[i];
                count++;
            }
        }
    }

    printf("\nMaximum profit:%d", p);


    printf("\n\n ------------------------------------------------------------");

}


void maxBenefitPerUnit()
{
    int localProfit[num_vertices];
    int localWeight[num_vertices];
    int BenefitPerUnit[num_vertices];
    int temp=0;
    int i=0,j=0;

    printf("\n\n capacity=%d", capacity);

    for(i=0; i<num_vertices; i++)
    {
        localProfit[i] = profit[i];
        localWeight[i] = weight[i];
        BenefitPerUnit[i] = profit[i] / weight[i];
    }


    for(i=0;i<num_vertices;i++)
    {
        for(j=i;j<num_vertices;j++)
        {
            if(BenefitPerUnit[i] < BenefitPerUnit[j])
            {
                temp=BenefitPerUnit[i];
                BenefitPerUnit[i]=BenefitPerUnit[j];
                BenefitPerUnit[j]=temp;

                temp=localProfit[i];
                localProfit[i]=localProfit[j];
                localProfit[j]=temp;

                temp=localWeight[i];
                localWeight[i]=localWeight[j];
                localWeight[j]=temp;
            }
        }
    }


    printf("\n\n ----------Greedy Method Maximum Benefit Per Unit-----------");

    int w=0,p=0, enumerator[num_vertices], enumerator1[num_vertices] , count=0;
    for(i=0; i<num_vertices; i++)
    {
        printf("\n BenefitPerUnit:%d \tProfit:%d \tWeight:%d", BenefitPerUnit[i], localProfit[i], localWeight[i] );
        if(w<capacity)
        {
            w = w + localWeight[i];
            if(w<capacity)
            {
                p = p + localProfit[i];
                enumerator[count] = localProfit[i];
                enumerator1[count] = localWeight[i];
                count++;
            }
        }
    }

    printf("\n\nMaximum profit:%d", p);

    printf("\n\n ------------------------------------------------------------");

}


void dynamicProgramming()
{
    capacity = 0.6 * totalCapacity;
    //printf("\n\n%d\t%d", num_vertices, capacity);
    knapsack(capacity,weight,profit,num_vertices);
}


int maximum(int a, int b)
{
   return (a>b)? a : b;
}

/*Dynamic Programming technique Method*/
void knapsack(int W, int wt[], int b[], int N)
{
   int i, w, enumerate[150];
   int j=0;
   int K[N+1][W+1];
   int c=0;

   for(i=0;i<=N;i++)
    {
        for(w=0;w<=W;w++)
        {
            if(i==0 || w==0)
            K[i][w]=0;
            else if(wt[i-1] <= w)
                K[i][w]=maximum(b[i-1]+K[i-1][w-wt[i-1]] , K[i-1][w]);
            else
                K[i][w]=K[i-1][w];
        }
    }

    printf("\n\nMaximum Profit is %d",K[N][W]);


  while(N>0)
  {
        if(K[N][W]!=K[N-1][W])
        {
            enumerate[j]=N;
            N=N-1;
            W=W-wt[enumerate[j]];
            j++;
        }
        else
        {
            N=N-1;
        }
    }
    printf("\nWeights: ");
    int locWt;

    for(c=0;c<j;c++)
    {
        //printf(" %d ",enumerate[c]-1);
        locWt = enumerate[c]-1;
        printf(" %d",weight[locWt]);
    }

    printf("\nProfit : ");

    for(c=0;c<j;c++)
    {
        printf(" %d",b[enumerate[c]-1]);
    }

    printf("\n\n");


}


int main()
{

    //rand()%(max-min)+min
    num_vertices = rand() % (8-4) + 4 ;
    printf ("Selected random number of vertices is: %d\n", num_vertices);

    int i=0;
    for(i=0; i<num_vertices;i++)
    {
        profit[i] = rand() % (30-10) + 10 ;
        weight[i] = rand() % (20-5) + 5 ;
    }

    for(i=0; i<num_vertices;i++)
    {
        printf("\n profit[%d] = %d", i, profit[i]);
        printf("\t weight[%d] = %d", i, weight[i]);
    }



    for(i=0; i<num_vertices;i++)
    {
        totalCapacity = totalCapacity + weight[i];
    }

    int c = totalCapacity *0.6;

    printf("\n\nCapacity=%d", c);

    printf("\n===============================Brute Force==========================\n");
    bruteForce();
    printf("\n====================================================================\n");

    printf("\n===============================Greedy Method========================\n");
    greedyMethod();
    printf("\n====================================================================\n");

    printf("\n===============================Dynamic Programming==================\n");
    dynamicProgramming();
    printf("\n====================================================================\n");

   
    return 0;

}
