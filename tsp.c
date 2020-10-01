
#include<stdio.h>

void TSP(int* C, int* A, int* path, int* fpath, int *sum, int *fsum, int flag, int n, int b, int a, int *sc){
    int i,k;
    flag++;
    for(k=0;k<n;k++)
        if(*(C+n*flag+k)==0){  //Checking if any node of (flag+1)-th row is not already reached.
            *(C+n*flag+k)=k+1;   //Placing the new node in that Vertex.
            *sum=*sum+*(A+n*b+k);   //Updating total covered path distance.
            *(path+flag-1)=k;   //Adding the vertex to salesman's path.

            /*Updating the Board w.r.t. the newly covered vertex*/
            if(flag<n){
                for(i=flag+1;i<n;i++)
                    *(C+i*n+k)=k+1;
            }

            /*Recursively call TSP function*/
            if(flag<n-1)
                TSP(C,A,path,fpath,sum,fsum,flag,n,k,a,sc);

            /*Storing new solution to 'fpath'-array if found.*/
            if(flag==n-1){
                *sum=*sum+*(A+n*k+a);
                if(*sum==*fsum){
                    *sc=*sc+1;
                    for(i=0;i<n-1;i++)
                        *(fpath+(*sc)*(n-1)+i)=*(path+i);   //Updating final path direction.
                }
                else if(*sum<*fsum){
                    *fsum=*sum; //Updating covered path distance.
                    *sc=0;
                    for(i=0;i<n-1;i++)
                        *(fpath+i)=*(path+i);   //Updating final path direction.
                }
                *sum=*sum-*(A+n*k+a);
            }

            /*Removing the previous node and undoing all its effect*/
            for(i=flag;i<n;i++)
                *(C+n*i+k)=0;
            *sum=*sum-*(A+n*b+k);   //Substructing last added path distance.
        }
}

int main(){
    int n,i,j,a,sc=0;
    printf("Please enter the number of vertices:");
    scanf("%d",&n);
    int A[n][n],C[n][n],sum=0,fsum=9999,path[n-1],fpath[1000][n-1];
    printf("\nPlease enter all the values of Adjacency Matrix:\n");
    for(i=0;i<n;i++){
        printf("\n");
        for(j=0;j<n;j++)
            scanf(" %d",&A[i][j]);
    }

    printf("\nPlease enter the Source (destination as well) vertex number:");
    scanf("%d",&a);
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            C[i][j]=0;
    for(i=0;i<n;i++)
        C[i][a-1]=a;

    TSP(C,A,path,fpath,&sum,&fsum,0,n,a-1,a-1,&sc);

    printf("\n\nMinimum traveled distance = %d.",fsum);
    for(i=0;i<=sc;i++){
        printf("\n\n\tpath direction type %d: %d -->",i+1,a);
        for(j=0;j<n-1;j++)
            printf(" %d -->",fpath[i][j]+1);
        printf(" %d.",a);
    }
    printf("\n\n\n");
}
