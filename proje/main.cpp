#include <allegro.h>
#include <stdio.h>
#include <stdlib.h>
//170201079 Emircan AYDIN-170201122 Salim Evtimov KRUMOV
BITMAP *image1,*image2,*ax,*ate,*bx,*by,*dy,*dz,*ct,*cz,*ax2,*ate2,*bx2,*by2,*dy2,*dz2,*ct2,*cz2,*et2,*ey2;
void main(){
int harita,i,p;
char giris[2];
char cikis[2];
char giris1,giris2;
char cikis1,cikis2;

printf("Harita secimi yapiniz [1 veya 2]: ");
allegro_init();
set_color_depth(15);
set_gfx_mode(GFX_AUTODETECT_WINDOWED,640,480,0,0);
image1 = load_bitmap("p1.bmp",NULL);
image2 = load_bitmap("p2.bmp",NULL);
draw_sprite(screen,image1,0,0);
draw_sprite(screen,image2,305,0);
scanf("%d",&harita);
if(harita!=1 && harita!=2){
    printf("Hatali giris yaptiniz!\n");
}
clear(screen);
printf("%d.harita secildi \n",harita);
if(harita==1){
p=1;
draw_sprite(screen,image1,0,0);

n1:
for(i=0;i<2;i++){
printf("%d.Girisi giriniz [x,y,z ve t'den biri]: ",i+1);
scanf("%s",&giris[i]);
printf("%d.Giris: %c \n",i+1,giris[i]);

}
giris1=giris[0];
giris2=giris[1];

for(i=0;i<=0;i++){
    if(giris[i]==giris[i+1]){
        printf("Iki tane ayni girisi girdiniz.\n");
        goto n1;
    }else{
    goto n2;
    }
}
n2:
for (i=0;i<2;i++){
    printf("%d.Cikisi giriniz [x,y,z ve t'den biri]: ",i+1);
    scanf("%s",&cikis[i]);
    printf("%d.Cikis: %c \n",i+1,cikis[i]);
    if(giris[i]==cikis[i] || giris[i+1]==cikis[i]){
        printf("giris ve cikis icin ayni noktayi sectiniz.\n");
        goto n2;
    }
}
cikis1=cikis[0];
cikis2=cikis[1];
for(i=0;i<=0;i++){
        if(cikis[i]==cikis[i+1]){
    printf("Iki tane ayni cikisi girdiniz.\n");
    goto n2;
}else{
goto n3;
}
}
}
n3:

if(harita==2){
p=2;
draw_sprite(screen,image2,0,0);
clear_keybuf();
n4:
for(i=0;i<2;i++){
printf("%d.Girisi giriniz [x,y,z ve t'den biri]: ",i+1);
scanf("%s",&giris[i]);
printf("%d.Giris: %c \n",i+1,giris[i]);
}
giris1=giris[0];
giris2=giris[1];
    for(i=0;i<2;i++){
    if(giris[i]==giris[i+1]){
        printf("Iki tane ayni girisi girdiniz.\n");
        goto n4;
    }else{
    goto n5;
    }
    }
n5:
for(i=0;i<2;i++){
printf("%d.Cikisi giriniz [x,y,z ve t'den biri]: ",i+1);
scanf("%s",&cikis[i]);
printf("%d.Cikis: %c \n",i+1,cikis[i]);
if(giris[i]==cikis[i] || giris[i+1]==cikis[i]){
        printf("giris ve cikis icin ayni noktayi sectiniz.\n");
        goto n5;
    }
}
cikis1=cikis[0];
cikis2=cikis[1];
for(i=0;i<=0;i++){
        if(cikis[i]==cikis[i+1]){
    printf("Iki tane ayni cikisi girdiniz.\n");
    goto n5;
}else{
goto n6;
}
}
}
n6:
int j,t=2,y;
char yol[5][4];
char yol1[5]={'a','b','c','d','e'};
yol[0][0]='a';
yol[1][0]='b';
yol[2][0]='c';
yol[3][0]='d';
yol[4][0]='e';
int YonKontrol[4];
int AracYogunlugu[5];
int GcYogunlugu[4];
int AracYogunluguT[8];

if(p==1){
    n7:
        for(i=0;i<4;i++){
                printf("%c yolu icin baslangic noktasini giriniz [%c veya %c]:",yol[i][0],giris1,giris2);
                scanf("%s",&yol[i][1]);
                            if(yol[i][1]!=giris1 && yol[i][1]!=giris2){
                                printf("Lutfen baslangic noktasini giris noktalarindan seciniz:\n");
                                goto n7;
                                }
        }

    n8:
        for(i=0;i<4;i++){
                    if(yol[i][1]==giris1){
                    if(giris1=='x'){
                    printf("%c icin yonu giriniz:(t veya y)",yol[i][0]);
                    scanf("%s",&yol[i][2]);
                    if(yol[i][2]!='t' && yol[i][2] != 'y'){
                        printf("Lutfen yonu x'in komsularindan seciniz:(t veya y)\n");
                        goto n8;
                    }
                    }
                    if(giris1=='y'){
                    printf("%c icin yonu giriniz:(x veya z)",yol[i][0]);
                    scanf("%s",&yol[i][2]);
                    if(yol[i][2]!='x' && yol[i][2] != 'z'){
                        printf("Lutfen yonu y'in komsularindan seciniz:(x veya z)\n");
                        goto n8;
                    }
                    }
                     if(giris1=='z'){
                    printf("%c icin yonu giriniz:(t veya y)",yol[i][0]);
                    scanf("%s",&yol[i][2]);
                    if(yol[i][2]!='t' && yol[i][2] != 'y'){
                        printf("Lutfen yonu y'in komsularindan seciniz:(t veya y)\n");
                        goto n8;
                    }
                    }
                    if(giris1=='t'){
                    printf("%c icin yonu giriniz:(x veya z)",yol[i][0]);
                    scanf("%s",&yol[i][2]);
                    if(yol[i][2]!='x' && yol[i][2] != 'z'){
                        printf("Lutfen yonu t'in komsularindan seciniz:(x veya z)\n");
                        goto n8;
                    }

                    }
                                                                                        if(yol[i][0]=='a'){
                    if(giris1=='x' && yol[i][2]=='t'){
                        clear(screen);
                    ate=load_bitmap("p1at.bmp",NULL);
                    draw_sprite(screen,ate,0,0);
                    YonKontrol[i]=-1;
                    }
                    if(giris1=='x' && yol[i][2]=='y'){
                        clear(screen);
                        ax=load_bitmap("p1ax.bmp",NULL);
                        draw_sprite(screen,ax,0,0);
                        YonKontrol[i]=1;
                    }
                    if(giris1=='y' && yol[i][2]=='x'){
                    clear(screen);
                    ate=load_bitmap("p1at.bmp",NULL);
                    draw_sprite(screen,ate,0,0);
                    YonKontrol[i]=-1;
                    }
                    if(giris1=='y' && yol[i][2]=='z'){
                     clear(screen);
                        ax=load_bitmap("p1ax.bmp",NULL);
                        draw_sprite(screen,ax,0,0);
                        YonKontrol[i]=1;
                    }
                    if(giris1=='z' && yol[i][2]=='y'){
                          clear(screen);
                    ate=load_bitmap("p1at.bmp",NULL);
                    draw_sprite(screen,ate,0,0);
                    YonKontrol[i]=-1;
                    }
                    if(giris1=='z' && yol[i][2]=='t'){
                             clear(screen);
                        ax=load_bitmap("p1ax.bmp",NULL);
                        draw_sprite(screen,ax,0,0);
                        YonKontrol[i]=1;
                    }
                    if(giris1=='t' && yol[i][2]=='z'){
                    clear(screen);
                    ate=load_bitmap("p1at.bmp",NULL);
                    draw_sprite(screen,ate,0,0);
                    YonKontrol[i]=-1;
                    }
                    if(giris1=='t' && yol[i][2]=='x'){
                        clear(screen);
                        ax=load_bitmap("p1ax.bmp",NULL);
                        draw_sprite(screen,ax,0,0);
                        YonKontrol[i]=1;
                    }
                        }
                                                                                        if(yol[i][0]=='b'){
                    if(giris1=='x' && yol[i][2]=='t'){
                    clear(screen);
                    bx=load_bitmap("p1bx.bmp",NULL);
                    draw_sprite(screen,bx,0,0);
                    YonKontrol[i]=-1;
                    }
                    if(giris1=='x' && yol[i][2]=='y'){
                        clear(screen);
                        by=load_bitmap("p1by.bmp",NULL);
                        draw_sprite(screen,by,0,0);
                        YonKontrol[i]=1;
                    }
                    if(giris1=='y' && yol[i][2]=='x'){
                    clear(screen);
                    bx=load_bitmap("p1bx.bmp",NULL);
                    draw_sprite(screen,bx,0,0);
                    YonKontrol[i]=-1;
                    }
                    if(giris1=='y' && yol[i][2]=='z'){
                     clear(screen);
                        by=load_bitmap("p1by.bmp",NULL);
                        draw_sprite(screen,by,0,0);
                        YonKontrol[i]=1;
                    }
                    if(giris1=='z' && yol[i][2]=='y'){
                          clear(screen);
                        by=load_bitmap("p1by.bmp",NULL);
                        draw_sprite(screen,by,0,0);
                        YonKontrol[i]=-1;
                    }
                    if(giris1=='z' && yol[i][2]=='t'){
                             clear(screen);
                    bx=load_bitmap("p1bx.bmp",NULL);
                    draw_sprite(screen,bx,0,0);
                    YonKontrol[i]=1;
                    }
                    if(giris1=='t' && yol[i][2]=='z'){
                    clear(screen);
                    bx=load_bitmap("p1bx.bmp",NULL);
                    draw_sprite(screen,bx,0,0);
                    YonKontrol[i]=-1;
                    }
                    if(giris1=='t' && yol[i][2]=='x'){
                        clear(screen);
                        by=load_bitmap("p1by.bmp",NULL);
                        draw_sprite(screen,by,0,0);
                        YonKontrol[i]=1;
                    }

                    }
                                                                                        if(yol[i][0]=='c'){
                    if(giris1=='x' && yol[i][2]=='t'){
                    clear(screen);
                    cz=load_bitmap("p1cz.bmp",NULL);
                    draw_sprite(screen,cz,0,0);
                    YonKontrol[i]=-1;
                    }
                    if(giris1=='x' && yol[i][2]=='y'){
                        clear(screen);
                        ct=load_bitmap("p1ct.bmp",NULL);
                        draw_sprite(screen,ct,0,0);
                        YonKontrol[i]=1;
                    }
                    if(giris1=='y' && yol[i][2]=='x'){
                    clear(screen);
                    cz=load_bitmap("p1cz.bmp",NULL);
                    draw_sprite(screen,cz,0,0);
                    YonKontrol[i]=-1;
                    }
                    if(giris1=='y' && yol[i][2]=='z'){
                     clear(screen);
                        ct=load_bitmap("p1ct.bmp",NULL);
                        draw_sprite(screen,ct,0,0);
                        YonKontrol[i]=1;
                    }
                    if(giris1=='z' && yol[i][2]=='y'){
                          clear(screen);
                    cz=load_bitmap("p1cz.bmp",NULL);
                    draw_sprite(screen,cz,0,0);
                    YonKontrol[i]=-1;
                    }
                    if(giris1=='z' && yol[i][2]=='t'){
                             clear(screen);
                        ct=load_bitmap("p1ct.bmp",NULL);
                        draw_sprite(screen,ct,0,0);
                        YonKontrol[i]=1;
                    }
                    if(giris1=='t' && yol[i][2]=='z'){
                    clear(screen);
                    cz=load_bitmap("p1cz.bmp",NULL);
                    draw_sprite(screen,cz,0,0);
                    YonKontrol[i]=-1;
                    }
                    if(giris1=='t' && yol[i][2]=='x'){
                        clear(screen);
                        ct=load_bitmap("p1ct.bmp",NULL);
                        draw_sprite(screen,ct,0,0);
                        YonKontrol[i]=1;
                    }
}
                                                                                        if(yol[i][0]=='d'){
                    if(giris1=='x' && yol[i][2]=='t'){
                        clear(screen);
                    dy=load_bitmap("p1dy.bmp",NULL);
                    draw_sprite(screen,dy,0,0);
                    YonKontrol[i]=-1;
                    }
                    if(giris1=='x' && yol[i][2]=='y'){
                        clear(screen);
                        dz=load_bitmap("p1dz.bmp",NULL);
                        draw_sprite(screen,dz,0,0);
                        YonKontrol[i]=1;
                    }
                    if(giris1=='y' && yol[i][2]=='x'){
                    clear(screen);
                    dy=load_bitmap("p1dy.bmp",NULL);
                    draw_sprite(screen,dy,0,0);
                    YonKontrol[i]=-1;
                    }
                    if(giris1=='y' && yol[i][2]=='z'){
                     clear(screen);
                        dz=load_bitmap("p1dz.bmp",NULL);
                        draw_sprite(screen,dz,0,0);
                        YonKontrol[i]=1;
                    }
                    if(giris1=='z' && yol[i][2]=='y'){
                          clear(screen);
                    dy=load_bitmap("p1dy.bmp",NULL);
                    draw_sprite(screen,dy,0,0);
                    YonKontrol[i]=-1;
                    }
                    if(giris1=='z' && yol[i][2]=='t'){
                             clear(screen);
                        dz=load_bitmap("p1dz.bmp",NULL);
                        draw_sprite(screen,dz,0,0);
                        YonKontrol[i]=1;
                    }
                    if(giris1=='t' && yol[i][2]=='z'){
                    clear(screen);
                    dy=load_bitmap("p1dy.bmp",NULL);
                    draw_sprite(screen,dy,0,0);
                    YonKontrol[i]=-1;
                    }
                    if(giris1=='t' && yol[i][2]=='x'){
                        clear(screen);
                        dz=load_bitmap("p1dz.bmp",NULL);
                        draw_sprite(screen,dz,0,0);
                        YonKontrol[i]=1;
                    }
                                                                                        }
                    }
                    }
            for(i=0;i<4;i++){
                if(yol[i][1]==giris2){
                         if(giris2=='x'){
                    printf("%c icin yonu giriniz:(t veya y)",yol[i][0]);
                    scanf("%s",&yol[i][2]);
                    if(yol[i][2]!='t' && yol[i][2] != 'y'){
                        printf("Lutfen yonu x'in komsularindan seciniz:(t veya y)\n");
                        goto n8;
                    }
                    }
                     if(giris2=='y'){
                    printf("%c icin yonu giriniz:(x veya z)",yol[i][0]);
                    scanf("%s",&yol[i][2]);
                    if(yol[i][2]!='x' && yol[i][2] != 'z'){
                        printf("Lutfen yonu y'in komsularindan seciniz:(x veya z)\n");
                        goto n8;
                    }
                    }
                    if(giris2=='z'){
                    printf("%c icin yonu giriniz:(t veya y)",yol[i][0]);
                    scanf("%s",&yol[i][2]);
                    if(yol[i][2]!='t' && yol[i][2] != 'y'){
                        printf("Lutfen yonu z'in komsularindan seciniz:(t veya y)\n");
                        goto n8;
                    }
                    }
                    if(giris2=='t'){
                    printf("%c icin yonu giriniz:(x veya z)",yol[i][0]);
                    scanf("%s",&yol[i][2]);
                    if(yol[i][2]!='x' && yol[i][2] != 'z'){
                        printf("Lutfen yonu t'in komsularindan seciniz:(x veya z)\n");
                        goto n8;
                    }
                    }
                   }
                                                if(yol[i][0]=='a'){
                    if(giris2=='x' && yol[i][2]=='t'){
                        clear(screen);
                    ate=load_bitmap("p1at.bmp",NULL);
                    draw_sprite(screen,ate,0,0);
                    YonKontrol[i]=-1;
                    }
                    if(giris2=='x' && yol[i][2]=='y'){
                        clear(screen);
                        ax=load_bitmap("p1ax.bmp",NULL);
                        draw_sprite(screen,ax,0,0);
                        YonKontrol[i]=1;
                    }
                    if(giris2=='y' && yol[i][2]=='x'){
                    clear(screen);
                    ate=load_bitmap("p1at.bmp",NULL);
                    draw_sprite(screen,ate,0,0);
                    YonKontrol[i]=-1;
                    }
                    if(giris2=='y' && yol[i][2]=='z'){
                     clear(screen);
                        ax=load_bitmap("p1ax.bmp",NULL);
                        draw_sprite(screen,ax,0,0);
                        YonKontrol[i]=1;
                    }
                    if(giris2=='z' && yol[i][2]=='y'){
                          clear(screen);
                    ate=load_bitmap("p1at.bmp",NULL);
                    draw_sprite(screen,ate,0,0);
                    YonKontrol[i]=-1;
                    }
                    if(giris2=='z' && yol[i][2]=='t'){
                             clear(screen);
                        ax=load_bitmap("p1ax.bmp",NULL);
                        draw_sprite(screen,ax,0,0);
                        YonKontrol[i]=1;
                    }
                    if(giris2=='t' && yol[i][2]=='z'){
                    clear(screen);
                    ate=load_bitmap("p1at.bmp",NULL);
                    draw_sprite(screen,ate,0,0);
                    YonKontrol[i]=-1;
                    }
                    if(giris2=='t' && yol[i][2]=='x'){
                        clear(screen);
                        ax=load_bitmap("p1ax.bmp",NULL);
                        draw_sprite(screen,ax,0,0);
                        YonKontrol[i]=1;
                    }
                        }
                                                if(yol[i][0]=='b'){
                    if(giris2=='x' && yol[i][2]=='t'){
                    clear(screen);
                    bx=load_bitmap("p1bx.bmp",NULL);
                    draw_sprite(screen,bx,0,0);
                    YonKontrol[i]=-1;
                    }
                    if(giris2=='x' && yol[i][2]=='y'){
                        clear(screen);
                        by=load_bitmap("p1by.bmp",NULL);
                        draw_sprite(screen,by,0,0);
                        YonKontrol[i]=1;
                    }
                    if(giris2=='y' && yol[i][2]=='x'){
                    clear(screen);
                    bx=load_bitmap("p1bx.bmp",NULL);
                    draw_sprite(screen,bx,0,0);
                    YonKontrol[i]=-1;
                    }
                    if(giris2=='y' && yol[i][2]=='z'){
                     clear(screen);
                        by=load_bitmap("p1by.bmp",NULL);
                        draw_sprite(screen,by,0,0);
                        YonKontrol[i]=1;
                    }
                    if(giris2=='z' && yol[i][2]=='y'){
                          clear(screen);
                        by=load_bitmap("p1by.bmp",NULL);
                        draw_sprite(screen,by,0,0);
                        YonKontrol[i]=-1;
                    }
                    if(giris2=='z' && yol[i][2]=='t'){
                             clear(screen);
                    bx=load_bitmap("p1bx.bmp",NULL);
                    draw_sprite(screen,bx,0,0);
                    YonKontrol[i]=1;
                    }
                    if(giris2=='t' && yol[i][2]=='z'){
                    clear(screen);
                    bx=load_bitmap("p1bx.bmp",NULL);
                    draw_sprite(screen,bx,0,0);
                    YonKontrol[i]=-1;
                    }
                    if(giris2=='t' && yol[i][2]=='x'){
                        clear(screen);
                        by=load_bitmap("p1by.bmp",NULL);
                        draw_sprite(screen,by,0,0);
                        YonKontrol[i]=1;
                    }

                    }
                                                if(yol[i][0]=='c'){
                    if(giris2=='x' && yol[i][2]=='t'){
                    clear(screen);
                    cz=load_bitmap("p1cz.bmp",NULL);
                    draw_sprite(screen,cz,0,0);
                    YonKontrol[i]=-1;
                    }
                    if(giris2=='x' && yol[i][2]=='y'){
                        clear(screen);
                        ct=load_bitmap("p1ct.bmp",NULL);
                        draw_sprite(screen,ct,0,0);
                        YonKontrol[i]=1;
                    }
                    if(giris2=='y' && yol[i][2]=='x'){
                    clear(screen);
                    cz=load_bitmap("p1cz.bmp",NULL);
                    draw_sprite(screen,cz,0,0);
                    YonKontrol[i]=-1;
                    }
                    if(giris2=='y' && yol[i][2]=='z'){
                     clear(screen);
                        ct=load_bitmap("p1ct.bmp",NULL);
                        draw_sprite(screen,ct,0,0);
                        YonKontrol[i]=1;
                    }
                    if(giris2=='z' && yol[i][2]=='y'){
                          clear(screen);
                    cz=load_bitmap("p1cz.bmp",NULL);
                    draw_sprite(screen,cz,0,0);
                    YonKontrol[i]=-1;
                    }
                    if(giris2=='z' && yol[i][2]=='t'){
                             clear(screen);
                        ct=load_bitmap("p1ct.bmp",NULL);
                        draw_sprite(screen,ct,0,0);
                        YonKontrol[i]=1;
                    }
                    if(giris2=='t' && yol[i][2]=='z'){
                    clear(screen);
                    cz=load_bitmap("p1cz.bmp",NULL);
                    draw_sprite(screen,cz,0,0);
                    YonKontrol[i]=-1;
                    }
                    if(giris2=='t' && yol[i][2]=='x'){
                        clear(screen);
                        ct=load_bitmap("p1ct.bmp",NULL);
                        draw_sprite(screen,ct,0,0);
                        YonKontrol[i]=1;
                    }
}
                                                if(yol[i][0]=='d'){
                    if(giris2=='x' && yol[i][2]=='t'){
                        clear(screen);
                    dy=load_bitmap("p1dy.bmp",NULL);
                    draw_sprite(screen,dy,0,0);
                    YonKontrol[i]=-1;
                    }
                    if(giris2=='x' && yol[i][2]=='y'){
                        clear(screen);
                        dz=load_bitmap("p1dz.bmp",NULL);
                        draw_sprite(screen,dz,0,0);
                        YonKontrol[i]=1;
                    }
                    if(giris2=='y' && yol[i][2]=='x'){
                    clear(screen);
                    dy=load_bitmap("p1dy.bmp",NULL);
                    draw_sprite(screen,dy,0,0);
                    YonKontrol[i]=-1;
                    }
                    if(giris2=='y' && yol[i][2]=='z'){
                     clear(screen);
                        dz=load_bitmap("p1dz.bmp",NULL);
                        draw_sprite(screen,dz,0,0);
                        YonKontrol[i]=1;
                    }
                    if(giris2=='z' && yol[i][2]=='y'){
                          clear(screen);
                    dy=load_bitmap("p1dy.bmp",NULL);
                    draw_sprite(screen,dy,0,0);
                    YonKontrol[i]=-1;
                    }
                    if(giris2=='z' && yol[i][2]=='t'){
                             clear(screen);
                        dz=load_bitmap("p1dz.bmp",NULL);
                        draw_sprite(screen,dz,0,0);
                        YonKontrol[i]=1;
                    }
                    if(giris2='t' && yol[i][2]=='z'){
                    clear(screen);
                    dy=load_bitmap("p1dy.bmp",NULL);
                    draw_sprite(screen,dy,0,0);
                    YonKontrol[i]=-1;
                    }
                    if(giris2=='t' && yol[i][2]=='x'){
                        clear(screen);
                        dz=load_bitmap("p1dz.bmp",NULL);
                        draw_sprite(screen,dz,0,0);
                        YonKontrol[i]=1;
                    }
                                                                                        }
            }

            s1:
    giris[0]=giris1;
    for(i=0;i<2;i++){

        printf("%c icin arac yogunlugunu giriniz(Eger deger girmek istemiyorsaniz -1 giriniz.):",giris[i]);
        scanf("%d",&GcYogunlugu[i]);
        if(GcYogunlugu[i]<-1){
            printf("Lutfen gecerli bir deger giriniz.(0 veya 0'dan buyuk):");
            goto s1;
        }
    }
    s2:
    for(i=0;i<2;i++){
        printf("%c icin arac yogunlugunu giriniz(Eger deger girmek istemiyorsaniz -1 giriniz.):",cikis[i]);
        scanf("%d",&GcYogunlugu[i+2]);
        if(GcYogunlugu[i+2]<-1){
            printf("Lutfen gecerli bir deger giriniz.(0 veya 0'dan buyuk):");
            goto s2;
        }
    }
    int girisT=0;
    int cikisT=0;
    for(i=0;i<4;i++){
        if(GcYogunlugu[i]==-1){
            goto g4;
        }
        if(i==0 || i==1){
            girisT=girisT+GcYogunlugu[i];
        }
        if(i==2 || i==3){
            cikisT=cikisT+GcYogunlugu[i];
        }
    }
    if(girisT!=cikisT){
        printf("Girislerdeki arac yogunlugu, cikislardaki arac yogunluguna esit degil yeniden giriniz.\n");
        goto s1;
    }


   g4:
    for(i=0;i<4;i++){
        printf("%c icin arac yogunlugunu giriniz:(Eger deger girmek istemiyorsaniz -1 giriniz.)\n",yol[i][0]);
        scanf("%d",&AracYogunlugu[i]);
        if(AracYogunlugu[i]<-1){
            printf("Lutfen gecerli deger giriniz.\n");
            goto g4;
        }

    }
    for(i=0;i<4;i++){
            if(YonKontrol[i]!=YonKontrol[i+1]){
                if(AracYogunlugu[i+1]==-1){
                    AracYogunlugu[i+1]=AracYogunlugu[i+1]*(-1);
                }
                AracYogunlugu[i+1]=AracYogunlugu[i+1]*(-1);
            }
            }

    for(i=0;i<8;i++){
        AracYogunluguT[i]=GcYogunlugu[i];
            if(i>=4){
             AracYogunluguT[i]=AracYogunlugu[i-4];
            }
    }
    for(i=0;i<8;i++){
        if(AracYogunluguT[i]==-1){
            goto e1;
        }
    }
    printf("En az bir cadde bilgisi -1 girilmelidir.\n");
    goto s1;





}
    if(p==2){
            h1:
        for(i=0;i<5;i++){
                printf("%c yolu icin baslangic noktasini giriniz [%c veya %c]:",yol[i][0],giris1,giris2);
                scanf("%s",&yol[i][1]);
                            if(yol[i][1]!=giris1 && yol[i][1]!=giris2){
                                printf("Lutfen baslangic noktasini giris noktalarindan seciniz:\n");
                                goto h1;
                                }
        }

    h2:
            printf("e icin yonu giriniz:(t veya y)\n");
            scanf("%s",&yol[4][2]);
                        if(yol[4][2]=='t'){
                            clear(screen);
                        et2=load_bitmap("p2et.bmp",NULL);
                        draw_sprite(screen,et2,0,0);
                        }
                        if(yol[4][2]=='y'){
                            clear(screen);
                        ey2=load_bitmap("p2ey.bmp",NULL);
                        draw_sprite(screen,ey2,0,0);
                        }

        for(i=0;i<4;i++){
                    if(yol[i][1]==giris1){
                    if(giris1=='x'){
                    printf("%c icin yonu giriniz:(t veya y)",yol[i][0]);
                    scanf("%s",&yol[i][2]);
                    if(yol[i][2]!='t' && yol[i][2] != 'y'){
                        printf("Lutfen yonu x'in komsularindan seciniz:(t veya y)\n");
                        goto h2;
                    }
                    }
                    if(giris1=='y'){
                    printf("%c icin yonu giriniz:(x veya z)",yol[i][0]);
                    scanf("%s",&yol[i][2]);
                    if(yol[i][2]!='x' && yol[i][2] != 'z'){
                        printf("Lutfen yonu y'in komsularindan seciniz:(x veya z)\n");
                        goto h2;
                    }
                    }
                     if(giris1=='z'){
                    printf("%c icin yonu giriniz:(t veya y)",yol[i][0]);
                    scanf("%s",&yol[i][2]);
                    if(yol[i][2]!='t' && yol[i][2] != 'y'){
                        printf("Lutfen yonu y'in komsularindan seciniz:(t veya y)\n");
                        goto h2;
                    }
                    }
                    if(giris1=='t'){
                    printf("%c icin yonu giriniz:(x veya z)",yol[i][0]);
                    scanf("%s",&yol[i][2]);
                    if(yol[i][2]!='x' && yol[i][2] != 'z'){
                        printf("Lutfen yonu t'in komsularindan seciniz:(x veya z)\n");
                        goto h2;
                    }

                    }

                                                                                        if(yol[i][0]=='a'){
                    if(giris1=='x' && yol[i][2]=='t'){
                        clear(screen);
                    ate=load_bitmap("p2at.bmp",NULL);
                    draw_sprite(screen,ate,0,0);
                    YonKontrol[i]=-1;
                    }
                    if(giris1=='x' && yol[i][2]=='y'){
                        clear(screen);
                        ax=load_bitmap("p2ax.bmp",NULL);
                        draw_sprite(screen,ax,0,0);
                        YonKontrol[i]=1;
                    }
                    if(giris1=='y' && yol[i][2]=='x'){
                    clear(screen);
                    ate=load_bitmap("p2at.bmp",NULL);
                    draw_sprite(screen,ate,0,0);
                    YonKontrol[i]=-1;
                    }
                    if(giris1=='y' && yol[i][2]=='z'){
                     clear(screen);
                        ax=load_bitmap("p2ax.bmp",NULL);
                        draw_sprite(screen,ax,0,0);
                        YonKontrol[i]=1;
                    }
                    if(giris1=='z' && yol[i][2]=='y'){
                          clear(screen);
                    ate=load_bitmap("p2at.bmp",NULL);
                    draw_sprite(screen,ate,0,0);
                    YonKontrol[i]=-1;
                    }
                    if(giris1=='z' && yol[i][2]=='t'){
                             clear(screen);
                        ax=load_bitmap("p2ax.bmp",NULL);
                        draw_sprite(screen,ax,0,0);
                        YonKontrol[i]=1;
                    }
                    if(giris1=='t' && yol[i][2]=='z'){
                    clear(screen);
                    ate=load_bitmap("p2at.bmp",NULL);
                    draw_sprite(screen,ate,0,0);
                    YonKontrol[i]=-1;
                    }
                    if(giris1=='t' && yol[i][2]=='x'){
                        clear(screen);
                        ax=load_bitmap("p2ax.bmp",NULL);
                        draw_sprite(screen,ax,0,0);
                        YonKontrol[i]=1;
                    }
                        }
                                                                                        if(yol[i][0]=='b'){
                    if(giris1=='x' && yol[i][2]=='t'){
                    clear(screen);
                    bx=load_bitmap("p2bx.bmp",NULL);
                    draw_sprite(screen,bx,0,0);
                    YonKontrol[i]=-1;
                    }
                    if(giris1=='x' && yol[i][2]=='y'){
                        clear(screen);
                        by=load_bitmap("p2by.bmp",NULL);
                        draw_sprite(screen,by,0,0);
                        YonKontrol[i]=1;
                    }
                    if(giris1=='y' && yol[i][2]=='x'){
                    clear(screen);
                    bx=load_bitmap("p2bx.bmp",NULL);
                    draw_sprite(screen,bx,0,0);
                    YonKontrol[i]=-1;
                    }
                    if(giris1=='y' && yol[i][2]=='z'){
                     clear(screen);
                        by=load_bitmap("p2by.bmp",NULL);
                        draw_sprite(screen,by,0,0);
                        YonKontrol[i]=1;
                    }
                    if(giris1=='z' && yol[i][2]=='y'){
                          clear(screen);
                        by=load_bitmap("p2by.bmp",NULL);
                        draw_sprite(screen,by,0,0);
                        YonKontrol[i]=-1;
                    }
                    if(giris1=='z' && yol[i][2]=='t'){
                             clear(screen);
                    bx=load_bitmap("p2bx.bmp",NULL);
                    draw_sprite(screen,bx,0,0);
                    YonKontrol[i]=1;
                    }
                    if(giris1=='t' && yol[i][2]=='z'){
                    clear(screen);
                    bx=load_bitmap("p2bx.bmp",NULL);
                    draw_sprite(screen,bx,0,0);
                    YonKontrol[i]=-1;
                    }
                    if(giris1=='t' && yol[i][2]=='x'){
                        clear(screen);
                        by=load_bitmap("p2by.bmp",NULL);
                        draw_sprite(screen,by,0,0);
                        YonKontrol[i]=1;
                    }

                    }
                                                                                        if(yol[i][0]=='c'){
                    if(giris1=='x' && yol[i][2]=='t'){
                    clear(screen);
                    cz=load_bitmap("p2cz.bmp",NULL);
                    draw_sprite(screen,cz,0,0);
                    YonKontrol[i]=-1;
                    }
                    if(giris1=='x' && yol[i][2]=='y'){
                        clear(screen);
                        ct=load_bitmap("p2ct.bmp",NULL);
                        draw_sprite(screen,ct,0,0);
                        YonKontrol[i]=1;
                    }
                    if(giris1=='y' && yol[i][2]=='x'){
                    clear(screen);
                    cz=load_bitmap("p2cz.bmp",NULL);
                    draw_sprite(screen,cz,0,0);
                    YonKontrol[i]=-1;
                    }
                    if(giris1=='y' && yol[i][2]=='z'){
                     clear(screen);
                        ct=load_bitmap("p2ct.bmp",NULL);
                        draw_sprite(screen,ct,0,0);
                        YonKontrol[i]=1;
                    }
                    if(giris1=='z' && yol[i][2]=='y'){
                          clear(screen);
                    cz=load_bitmap("p2cz.bmp",NULL);
                    draw_sprite(screen,cz,0,0);
                    YonKontrol[i]=-1;
                    }
                    if(giris1=='z' && yol[i][2]=='t'){
                             clear(screen);
                        ct=load_bitmap("p2ct.bmp",NULL);
                        draw_sprite(screen,ct,0,0);
                        YonKontrol[i]=1;
                    }
                    if(giris1=='t' && yol[i][2]=='z'){
                    clear(screen);
                    cz=load_bitmap("p2cz.bmp",NULL);
                    draw_sprite(screen,cz,0,0);
                    YonKontrol[i]=-1;
                    }
                    if(giris1=='t' && yol[i][2]=='x'){
                        clear(screen);
                        ct=load_bitmap("p2ct.bmp",NULL);
                        draw_sprite(screen,ct,0,0);
                        YonKontrol[i]=1;
                    }
}
                                                                                        if(yol[i][0]=='d'){
                    if(giris1=='x' && yol[i][2]=='t'){
                        clear(screen);
                    dy=load_bitmap("p2dy.bmp",NULL);
                    draw_sprite(screen,dy,0,0);
                    YonKontrol[i]=-1;
                    }
                    if(giris1=='x' && yol[i][2]=='y'){
                        clear(screen);
                        dz=load_bitmap("p2dz.bmp",NULL);
                        draw_sprite(screen,dz,0,0);
                        YonKontrol[i]=1;
                    }
                    if(giris1=='y' && yol[i][2]=='x'){
                    clear(screen);
                    dy=load_bitmap("p2dy.bmp",NULL);
                    draw_sprite(screen,dy,0,0);
                    YonKontrol[i]=-1;
                    }
                    if(giris1=='y' && yol[i][2]=='z'){
                     clear(screen);
                        dz=load_bitmap("p2dz.bmp",NULL);
                        draw_sprite(screen,dz,0,0);
                        YonKontrol[i]=1;
                    }
                    if(giris1=='z' && yol[i][2]=='y'){
                          clear(screen);
                    dy=load_bitmap("p2dy.bmp",NULL);
                    draw_sprite(screen,dy,0,0);
                    YonKontrol[i]=-1;
                    }
                    if(giris1=='z' && yol[i][2]=='t'){
                             clear(screen);
                        dz=load_bitmap("p2dz.bmp",NULL);
                        draw_sprite(screen,dz,0,0);
                        YonKontrol[i]=1;
                    }
                    if(giris1=='t' && yol[i][2]=='z'){
                    clear(screen);
                    dy=load_bitmap("p2dy.bmp",NULL);
                    draw_sprite(screen,dy,0,0);
                    YonKontrol[i]=-1;
                    }
                    if(giris1=='t' && yol[i][2]=='x'){
                        clear(screen);
                        dz=load_bitmap("p2dz.bmp",NULL);
                        draw_sprite(screen,dz,0,0);
                        YonKontrol[i]=1;
                    }
                                                                                        }

                    }

                    }

            for(i=0;i<5;i++){
                if(yol[i][1]==giris2){
                         if(giris2=='x'){
                    printf("%c icin yonu giriniz:(t veya y)",yol[i][0]);
                    scanf("%s",&yol[i][2]);
                    if(yol[i][2]!='t' && yol[i][2] != 'y'){
                        printf("Lutfen yonu x'in komsularindan seciniz:(t veya y)\n");
                        goto h2;
                    }
                    }
                     if(giris2=='y'){
                    printf("%c icin yonu giriniz:(x veya z)",yol[i][0]);
                    scanf("%s",&yol[i][2]);
                    if(yol[i][2]!='x' && yol[i][2] != 'z'){
                        printf("Lutfen yonu y'in komsularindan seciniz:(x veya z)\n");
                        goto h2;
                    }
                    }
                    if(giris2=='z'){
                    printf("%c icin yonu giriniz:(t veya y)",yol[i][0]);
                    scanf("%s",&yol[i][2]);
                    if(yol[i][2]!='t' && yol[i][2] != 'y'){
                        printf("Lutfen yonu z'in komsularindan seciniz:(t veya y)\n");
                        goto h2;
                    }
                    }
                    if(giris2=='t'){
                    printf("%c icin yonu giriniz:(x veya z)",yol[i][0]);
                    scanf("%s",&yol[i][2]);
                    if(yol[i][2]!='x' && yol[i][2] != 'z'){
                        printf("Lutfen yonu t'in komsularindan seciniz:(x veya z)\n");
                        goto h2;
                    }
                    }
                   if(yol[i][0]=='a'){
                    if(giris2=='x' && yol[i][2]=='t'){
                        clear(screen);
                    ate=load_bitmap("p2at.bmp",NULL);
                    draw_sprite(screen,ate,0,0);
                    YonKontrol[i]=-1;
                    }
                    if(giris2=='x' && yol[i][2]=='y'){
                        clear(screen);
                        ax=load_bitmap("p2ax.bmp",NULL);
                        draw_sprite(screen,ax,0,0);
                        YonKontrol[i]=1;
                    }
                    if(giris2=='y' && yol[i][2]=='x'){
                    clear(screen);
                    ate=load_bitmap("p2at.bmp",NULL);
                    draw_sprite(screen,ate,0,0);
                    YonKontrol[i]=-1;
                    }
                    if(giris2=='y' && yol[i][2]=='z'){
                     clear(screen);
                        ax=load_bitmap("p2ax.bmp",NULL);
                        draw_sprite(screen,ax,0,0);
                        YonKontrol[i]=1;
                    }
                    if(giris2=='z' && yol[i][2]=='y'){
                          clear(screen);
                    ate=load_bitmap("p2at.bmp",NULL);
                    draw_sprite(screen,ate,0,0);
                    YonKontrol[i]=-1;
                    }
                    if(giris2=='z' && yol[i][2]=='t'){
                             clear(screen);
                        ax=load_bitmap("p2ax.bmp",NULL);
                        draw_sprite(screen,ax,0,0);
                        YonKontrol[i]=1;
                    }
                    if(giris2=='t' && yol[i][2]=='z'){
                    clear(screen);
                    ate=load_bitmap("p2at.bmp",NULL);
                    draw_sprite(screen,ate,0,0);
                    YonKontrol[i]=-1;
                    }
                    if(giris2=='t' && yol[i][2]=='x'){
                        clear(screen);
                        ax=load_bitmap("p2ax.bmp",NULL);
                        draw_sprite(screen,ax,0,0);
                        YonKontrol[i]=1;
                    }
                        }
                                                if(yol[i][0]=='b'){
                    if(giris2=='x' && yol[i][2]=='t'){
                    clear(screen);
                    bx=load_bitmap("p2bx.bmp",NULL);
                    draw_sprite(screen,bx,0,0);
                    YonKontrol[i]=-1;
                    }
                    if(giris2=='x' && yol[i][2]=='y'){
                        clear(screen);
                        by=load_bitmap("p2by.bmp",NULL);
                        draw_sprite(screen,by,0,0);
                        YonKontrol[i]=1;
                    }
                    if(giris2=='y' && yol[i][2]=='x'){
                    clear(screen);
                    bx=load_bitmap("p2bx.bmp",NULL);
                    draw_sprite(screen,bx,0,0);
                    YonKontrol[i]=-1;
                    }
                    if(giris2=='y' && yol[i][2]=='z'){
                     clear(screen);
                        by=load_bitmap("p2by.bmp",NULL);
                        draw_sprite(screen,by,0,0);
                        YonKontrol[i]=1;
                    }
                    if(giris2=='z' && yol[i][2]=='y'){
                          clear(screen);
                        by=load_bitmap("p2by.bmp",NULL);
                        draw_sprite(screen,by,0,0);
                        YonKontrol[i]=-1;
                    }
                    if(giris2=='z' && yol[i][2]=='t'){
                             clear(screen);
                    bx=load_bitmap("p2bx.bmp",NULL);
                    draw_sprite(screen,bx,0,0);
                    YonKontrol[i]=1;
                    }
                    if(giris2=='t' && yol[i][2]=='z'){
                    clear(screen);
                    bx=load_bitmap("p2bx.bmp",NULL);
                    draw_sprite(screen,bx,0,0);
                    YonKontrol[i]=-1;
                    }
                    if(giris2=='t' && yol[i][2]=='x'){
                        clear(screen);
                        by=load_bitmap("p2by.bmp",NULL);
                        draw_sprite(screen,by,0,0);
                        YonKontrol[i]=1;
                    }

                    }
                                                if(yol[i][0]=='c'){
                    if(giris2=='x' && yol[i][2]=='t'){
                    clear(screen);
                    cz=load_bitmap("p2cz.bmp",NULL);
                    draw_sprite(screen,cz,0,0);
                    YonKontrol[i]=-1;
                    }
                    if(giris2=='x' && yol[i][2]=='y'){
                        clear(screen);
                        ct=load_bitmap("p2ct.bmp",NULL);
                        draw_sprite(screen,ct,0,0);
                        YonKontrol[i]=1;
                    }
                    if(giris2=='y' && yol[i][2]=='x'){
                    clear(screen);
                    cz=load_bitmap("p2cz.bmp",NULL);
                    draw_sprite(screen,cz,0,0);
                    YonKontrol[i]=-1;
                    }
                    if(giris2=='y' && yol[i][2]=='z'){
                     clear(screen);
                        ct=load_bitmap("p2ct.bmp",NULL);
                        draw_sprite(screen,ct,0,0);
                        YonKontrol[i]=1;
                    }
                    if(giris2=='z' && yol[i][2]=='y'){
                          clear(screen);
                    cz=load_bitmap("p2cz.bmp",NULL);
                    draw_sprite(screen,cz,0,0);
                    YonKontrol[i]=-1;
                    }
                    if(giris2=='z' && yol[i][2]=='t'){
                             clear(screen);
                        ct=load_bitmap("p2ct.bmp",NULL);
                        draw_sprite(screen,ct,0,0);
                        YonKontrol[i]=1;
                    }
                    if(giris2=='t' && yol[i][2]=='z'){
                    clear(screen);
                    cz=load_bitmap("p2cz.bmp",NULL);
                    draw_sprite(screen,cz,0,0);
                    YonKontrol[i]=-1;
                    }
                    if(giris2=='t' && yol[i][2]=='x'){
                        clear(screen);
                        ct=load_bitmap("p2ct.bmp",NULL);
                        draw_sprite(screen,ct,0,0);
                        YonKontrol[i]=1;
                    }
}
                                                if(yol[i][0]=='d'){
                    if(giris2=='x' && yol[i][2]=='t'){
                        clear(screen);
                    dy=load_bitmap("p2dy.bmp",NULL);
                    draw_sprite(screen,dy,0,0);
                    YonKontrol[i]=-1;
                    }
                    if(giris2=='x' && yol[i][2]=='y'){
                        clear(screen);
                        dz=load_bitmap("p2dz.bmp",NULL);
                        draw_sprite(screen,dz,0,0);
                        YonKontrol[i]=1;
                    }
                    if(giris2=='y' && yol[i][2]=='x'){
                    clear(screen);
                    dy=load_bitmap("p2dy.bmp",NULL);
                    draw_sprite(screen,dy,0,0);
                    YonKontrol[i]=-1;
                    }
                    if(giris2=='y' && yol[i][2]=='z'){
                     clear(screen);
                        dz=load_bitmap("p2dz.bmp",NULL);
                        draw_sprite(screen,dz,0,0);
                        YonKontrol[i]=1;
                    }
                    if(giris2=='z' && yol[i][2]=='y'){
                          clear(screen);
                    dy=load_bitmap("p2dy.bmp",NULL);
                    draw_sprite(screen,dy,0,0);
                    YonKontrol[i]=-1;
                    }
                    if(giris2=='z' && yol[i][2]=='t'){
                             clear(screen);
                        dz=load_bitmap("p2dz.bmp",NULL);
                        draw_sprite(screen,dz,0,0);
                        YonKontrol[i]=1;
                    }
                    if(giris2='t' && yol[i][2]=='z'){
                    clear(screen);
                    dy=load_bitmap("p2dy.bmp",NULL);
                    draw_sprite(screen,dy,0,0);
                    YonKontrol[i]=-1;
                    }
                    if(giris2=='t' && yol[i][2]=='x'){
                        clear(screen);
                        dz=load_bitmap("p2dz.bmp",NULL);
                        draw_sprite(screen,dz,0,0);
                        YonKontrol[i]=1;
                    }
                                                                                        }
                    h4:
                        printf("e icin yonu giriniz:(t veya y)\n");
                        scanf("%d",yol[4][2]);
                        if(yol[4][2]=='t'){
                            clear(screen);
                        et2=load_bitmap("p2et.bmp",NULL);
                        draw_sprite(screen,et2,0,0);
                        }
                        if(yol[4][2]=='y'){
                            clear(screen);
                        ey2=load_bitmap("p2ey.bmp",NULL);
                        draw_sprite(screen,ey2,0,0);
                        }



                   }

            }



     g5:
    for(i=0;i<5;i++){
        printf("%c icin arac yogunlugunu giriniz:(Eger deger girmek istemiyorsaniz -1 giriniz.)\n",yol[i][0]);
        scanf("%d",&AracYogunlugu[i]);
        if(AracYogunlugu[i]<-1){
            printf("Lutfen gecerli deger giriniz.\n");
            goto g5;
        }

    }
    for(i=0;i<5;i++){
            if(YonKontrol[i]!=YonKontrol[i+1]){
                if(AracYogunlugu[i+1]==-1){
                    AracYogunlugu[i+1]=AracYogunlugu[i+1]*(-1);
                }
                AracYogunlugu[i+1]=AracYogunlugu[i+1]*(-1);
            }
            }

m1:
    giris[0]=giris1;
    for(i=0;i<2;i++){

        printf("%c icin arac yogunlugunu giriniz(Eger deger girmek istemiyorsaniz -1 giriniz.):",giris[i]);
        scanf("%d",&GcYogunlugu[i]);
        if(GcYogunlugu[i]<-1){
            printf("Lutfen gecerli bir deger giriniz.(0 veya 0'dan buyuk):");
            goto m1;
        }
    }
    m2:
    for(i=0;i<2;i++){
        printf("%c icin arac yogunlugunu giriniz(Eger deger girmek istemiyorsaniz -1 giriniz.):",cikis[i]);
        scanf("%d",&GcYogunlugu[i+2]);
        if(GcYogunlugu[i+2]<-1){
            printf("Lutfen gecerli bir deger giriniz.(0 veya 0'dan buyuk):");
            goto m2;
        }
    }
    int girisT=0;
    int cikisT=0;
    for(i=0;i<4;i++){
        if(GcYogunlugu[i]==-1){
            goto m4;
        }
        if(i==0 || i==1){
            girisT=girisT+GcYogunlugu[i];
        }
        if(i==2 || i==3){
            cikisT=cikisT+GcYogunlugu[i];
        }
    }
    if(girisT!=cikisT){
        printf("Girislerdeki arac yogunlugu, cikislardaki arac yogunluguna esit degil yeniden giriniz.\n");
        goto m1;
    }


   m4:
    for(i=0;i<4;i++){
        printf("%c icin arac yogunlugunu giriniz:(Eger deger girmek istemiyorsaniz -1 giriniz.)\n",yol[i][0]);
        scanf("%d",&AracYogunlugu[i]);
        if(AracYogunlugu[i]<-1){
            printf("Lutfen gecerli deger giriniz.\n");
            goto m4;
        }

    }
    for(i=0;i<4;i++){
            if(YonKontrol[i]!=YonKontrol[i+1]){
                if(AracYogunlugu[i+1]==-1){
                    AracYogunlugu[i+1]=AracYogunlugu[i+1]*(-1);
                }
                AracYogunlugu[i+1]=AracYogunlugu[i+1]*(-1);
            }
            }

    for(i=0;i<8;i++){
        AracYogunluguT[i]=GcYogunlugu[i];
            if(i>=4){
             AracYogunluguT[i]=AracYogunlugu[i-4];
            }
    }
    for(i=0;i<8;i++){
        if(AracYogunluguT[i]==-1){
            goto e1;
        }
    }
    printf("En az bir cadde bilgisi -1 girilmelidir.\n");
    goto m1;




}


e1:
    printf("-----------Program Sonu-----------");

}

END_OF_MAIN();
