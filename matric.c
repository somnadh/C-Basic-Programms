void main()
{

    int n,j,i,r,c,r1,c1;
    printf("enter rows u want to need\n");
    scanf("%d",&r);
    printf("enter cols u want to need\n");
    scanf("%d",&c);
    n=r*c;
    int a[r][c];
    printf("entet %d elemets for first Matrix\n",n);
    for(i=0;i<r;i++)
    {
          for(j=0;j<c;j++)
    {
         scanf("%d",&a[i][j]);

    }
    }

    printf("First matrix is\n");
    for(i=0;i<r;i++)
    {
          for(j=0;j<c;j++)
    {
         printf("%d\t",a[i][j]);

    }
    printf("\n");
    }
    printf("enter rows u want to need for 2nd matrix\n");
    scanf("%d",&r1);
    printf("enter cols u want to need for 2nd matrix\n");
    scanf("%d",&c1);
    n=r1*c1;
    int b[r1][c1];
    printf("entet %d elemets for second Matrix row and cols\n",n);
    for(i=0;i<r1;i++)
    {
          for(j=0;j<c1;j++)
    {
         scanf("%d",&b[i][j]);

    }
    }

    printf("Second matrix is\n");
    for(i=0;i<r1;i++)
    {
          for(j=0;j<c1;j++)
    {
         printf("%d\t",b[i][j]);

    }
    printf("\n");
    }
    printf("addition of two matrix is\n");
    for(i=0;i<r1;i++)
    {
          for(j=0;j<c1;j++)
    {
         printf("%d\t",b[i][j]+a[i][j]);

    }
    printf("\n");
    }

    printf("\n");
    }

