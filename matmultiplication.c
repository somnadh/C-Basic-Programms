void main()
{

    int n,j,i,r,c,r1,c1,n1,k=0;
    int c2[10][10];
    printf("enter rows for 1st matrix\n");
    scanf("%d",&r);
    printf("enter cols for 1st matrix\n");
    scanf("%d",&c);
    printf("enter rows for 2nd matrix\n");
    scanf("%d",&r1);
    printf("enter cols for 2nd matrix\n");
    scanf("%d",&c1);
    n=r*c;
    n1=r1*c1;
    int a[r][c];
    printf("entet %d elemets for first Matrix\n",n);
    for(i=0;i<r;i++)
    {
          for(j=0;j<c;j++)
    {
         scanf("%d",&a[i][j]);

    }
    }
    int b[r1][c1];
    printf("entet %d elemets for first Matrix\n",n1);
    for(i=0;i<r1;i++)
    {
          for(j=0;j<c1;j++)
    {
         scanf("%d",&b[i][j]);

    }
    }
    for(i=0;i<r;i++)
    {

          for(j=0;j<c1;j++)
            {
             c2[i][j]=0;

            for(k=0;k<c1;k++){


         c2[i][j]+=a[i][k]*b[k][j];
        }

    }
    }
    for(i=0;i<r;i++)
    {
          for(j=0;j<c1;j++)
    {
         printf("%d\t",c2[i][j]);

    }
    printf("\n");
    }}
