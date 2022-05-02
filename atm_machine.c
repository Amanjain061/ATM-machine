int main(){
    printf("insert you card in correct way");
    int a;
    int z;
    int money,d,p,di,np;
    printf("choose the value between 1 to 4 for\n1 as request money\n2 as deposit money\n3 as change pin\n4 as disable atm\n");
    scanf("%d",&a);
    if(a<=4){
    printf("are you sure with your option\nyou can verify again\npress 1 for confirm\npress 0 for change\n");
    scanf("%d",&z);
    if(z==1){
        if(a==1){
        printf("enter the money needed in multiples of 500 only");
        scanf("%d",&money);
        printf("\nmoney deducted from your bank account");
        }
        else if(a==2){
        printf("enter the money to be deposited in notes of 500 only\n");
        scanf("%d",&d);
        printf("\nmoney added succefully");}
        else if(a==3){
        printf("\nenter the new pin\n");
        scanf("%d\n",&p);
        printf("enter new pin\n");
        scanf("%d\n",&np);
        printf("new pin inderted succesfully\n");}
        else if(a==4)
        printf("atm disabled successfully\n");
        else 
        printf("plz hoose the right digit between 1 yo 4\n");}

    }
    else
    {printf("plz hoose the right digit between 1 yo 4\n");}
return 0;
}
