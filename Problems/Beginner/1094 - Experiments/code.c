#include <stdio.h>
 
int main() {
 
   int n, i, c=0, s=0, r=0, x, total=0; 
   int qc=0, qs=0, qr=0;
   float perC=0, perR=0, perS=0;
   char tipo;
   scanf("%d",&n);
   
   for(i=1; i<=n; i++){
       scanf("%d %c",&x,&tipo);
       if(tipo=='S'){
           s++;
           qs=qs+x;
       } else if(tipo=='C'){
           c++;
           qc=qc+x;
       } else if(tipo=='R'){
           r++;
           qr=qr+x;        
       }
   }

   total=qr+qc+qs;
   perC=(float)(qc*100)/total;
   perR=(float)(qr*100)/total;
   perS=(float)(qs*100)/total;
   
   printf("Total: %d cobaias\n",total);
   printf("Total de coelhos: %d\n",qc);
   printf("Total de ratos: %d\n",qr);
   printf("Total de sapos: %d\n",qs);
   printf("Percentual de coelhos: %.2f %%\n",perC);
   printf("Percentual de ratos: %.2f %%\n",perR);
   printf("Percentual de sapos: %.2f %%\n",perS);

    return 0;
}
