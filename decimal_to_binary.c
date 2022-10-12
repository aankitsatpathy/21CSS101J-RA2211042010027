/*decimal to binary*/
main()
{  
    printf("RA2211042010027\n");
    int a[10],n;  
    printf("Enter the number");
    scanf("%d",&n);
    for(int i=0;n>0;i++)
    {
        a[i]=n%2;
        n=n/2;
        
    }   
    printf("\nBinary of Given Number is=");
    for(i=i-1;i>=0;i--)
    {
        printf("%d",a[i]);
        
    }   
}
/*output:
Enter the number to convert: 7

Binary of Given Number is=111
*/
