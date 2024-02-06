#include<stdio.h>
#include<unistd.h>
#include<string.h>
#include<dirent.h>
#include<time.h>

char s[1000];
char ripasitory[1000];
char stage[1000];
char ripasitoryname[1000];
char currentcomit[1000];
char currentposition[1000];
char parentcommit[1000];
char commitid[1000];
char s0[1000];
char s1[1000];
char s2[1000];
char s3[1000];
char s4[1000];
char s5[1000];
char s6[1000];

void clear (char sa[]);
void addgit (char stage0[],char ripasitoryname0[],char sb[]);


//tabe haye avalie stringi s
int vazheyabdarstring(char m[],char sa[]){
    int m0=strlen(m);
    int sa0=strlen(sa);
    int pasokh=-1;
    int flag=0;
    int a[m0];
    if(m0>sa0){}
    else{
        for(int i=0;i<sa0-m0+1;i++){
            flag=1;
            for(int j=0;j<m0;j++){
                if(sa[i+j]==m[j]){}
                else{
                    flag=0;
                }
            }
            if(flag==1){
                pasokh=i;
            }
            else{}
        }
    }
    return pasokh;
}
int sanjeshbarabaryazebteda(int n,char sa[],char st[]){
    int i=0;
    for(int j=0;j<n;j++){
        if(sa[j]==st[j]){}
        else{
            i=1;
        }
    }
    return i;
}

void strchasban (char p[] , char sa[] , char ma[]){
    int n=strlen(sa);
    int m=strlen(ma);
    int k=n+m;
    for(int i=0;i<k+1;i++){
        if(i<n){
            p[i]=sa[i];
        }
        else{
            p[i]=ma[i-n];
    }
}
}
void strcan1(char sa[],int n){
    int m=strlen(sa);
    if(n>m){}
    else{
        for(int i=0;i<n;i++){
            sa[m-i-1]='\0';
        }
    }
}
void strcan2(char sa[],int n){
    int m=strlen(sa);
    if(n>m){}
    else{
        for(int i=0;i<m-n+1;i++){
            sa[i]=sa[i+n];
        }
    }
}
void strmonasebgir1(char x[],char sa[],char c){
    int n =strlen(sa);
    int k=-1;
    for(int i=0;i<n;i++){
        if(sa[n-1-i]==c){
            if(k==-1){
            k=i;
            }
            else{}
        }
        else{}
    }
    if(k==-1){}
    else{
        for(int i=0;i<k+1;i++){
            x[i]=sa[n-k+i];
        }
        strcan1(sa,k+1);
    }
}
void strmonasebgir2(char x[],char sa[],char c){
    int n =strlen(sa);
    int k=-1;
    for(int i=0;i<n;i++){
        if(sa[i]==c){
            if(k==-1){
            k=i;
            }
            else{}
        }
        else{}
    }
    if(k==-1){}
    else{
        for(int i=0;i<k+1;i++){
            if(i==k){
                x[i]='\0';
            }
            else{
            x[i]=sa[i];
            }
        }
        strcan2(sa,k+1);
    }
}
// e
//dastoor copy
void copytostage(char x0[],char x1[]){
    char p[1000];
    FILE * file = fopen(x1,"r");
    if(file==NULL){
        //printf("null");
    }
    else{
        //printf("not null");
        FILE * file0 = fopen(x0,"w");
        while(!feof(file)){
        fgets(p,1000,file);
        fprintf(file0,"%s",p);
    }

    }
}
//e
// clear function s
void clear (char sa[]){
    char d[1000];
    char d0[1000];
    for(int i=0;i<1001;i++){
            d[i]='\0';
            d0[i]='\0';
        }
    struct dirent * a;
    DIR * b=opendir(sa);
    while((a=readdir(b))!=NULL){
        for(int i=0;i<1001;i++){
            d[i]='\0';
            d0[i]='\0';
        }
        strchasban(d0,sa,"/");
        strchasban(d,d0,a->d_name);
        printf("%s\n",d);
        if(a->d_type==16){
            if(strcmp(a->d_name,"..")==0){
            }
            else{
                if(strcmp(a->d_name,".")==0){
            }
            else{
                clear(d);
                rmdir(d);
            }
            }
        }
        else{
            remove(d);
        }
    }
}
// e
// add function s
void addgit (char stage0[],char ripasitoryname0[],char ss[]){
    char ss0[1000];
char ss1[1000];
char ss2[1000];
char ss3[1000];
char ss4[1000];
        FILE*k0=fopen(ss,"r");
        char x0[1000];
        ////////////////////////////////////////////////
        if(k0==NULL){
            int k=vazheyabdarstring(ripasitoryname0,ss);
        int a=strlen(ripasitoryname0);
        strcpy(ss0,ss);
        strcan2(ss0,k+a+1);
        char addkari[1000][1000];
        strcpy(ss4,ss);
        int ii=0;
        int number=0;
        do{
            strmonasebgir1(addkari[ii],ss4,'/');
            ii++;
            number++;
        }while(strcmp(addkari[ii-1],ripasitoryname0)!=0);
        ii=0;
        strchasban(ss0,stage0,"/");
        while(strcmp(addkari[ii],ripasitoryname0)!=0){
            strchasban(ss1,ss0,addkari[number-2-ii]);
            if((number-2-ii)>0){
            
            }
            else{
                FILE * adbd = fopen(ss1,"r");
            }
            strchasban(ss0,ss1,"/");
            ii++;
        }
        }
        ////////////////////////////////////////////////
        else{
        int k=vazheyabdarstring(ripasitoryname0,ss);
        int a=strlen(ripasitoryname0);
        strcpy(ss0,ss);
        strcan2(ss0,k+a+1);
        char addkari[1000][1000];
        strcpy(ss4,ss);
        int ii=0;
        int number=0;
        do{
            strmonasebgir1(addkari[ii],ss4,'/');
            ii++;
            number++;
        }while(strcmp(addkari[ii-1],ripasitoryname0)!=0);
        ii=0;
        strchasban(ss0,stage0,"/");
        while(strcmp(addkari[ii],ripasitoryname0)!=0){
            strchasban(ss1,ss0,addkari[number-2-ii]);
            if((number-2-ii)>0){
            DIR * a;
            if((a=opendir(ss1))==NULL){
                mkdir(ss1);
            }
            else{}
            }
            else{
                copytostage(ss1,ss);
            }
            strchasban(ss0,ss1,"/");
            ii++;
        }
        }
}
void addgitripasitory(char stage0[],char ripasitoryname0[],char ss[]){
    char ss0[1000];
    char ss1[1000];
    char ss2[1000];
    char ss3[1000];
    char ss4[1000];
    FILE * file = fopen(ss,"r");
    DIR * dir=opendir(ss);
    if( !((dir==NULL) || (file==NULL)) ){
        
    }
    else{
    if(file!=NULL){
        addgit(stage0,ripasitoryname0,ss);
    }
    else{
        DIR * d1=opendir(ss);
        if(d1==NULL){}
        else{
            struct dirent *d2;
            int k=0;
            while((d2=readdir(d1))!=NULL){
                k++;
                if(d2->d_type==16){
                    if( strcmp(d2->d_name,"..") && strcmp(d2->d_name,".") && strcmp(d2->d_name,".init") ){
                        strchasban(ss0,ss,"/");
                        strchasban(ss1,ss0,d2->d_name);
                        addgitripasitory(stage0,ripasitoryname0,ss1);
                    }
                    else{}
                }
                else{
                    strchasban(ss0,ss,"/");
                    strchasban(ss1,ss0,d2->d_name);
                    addgit(stage0,ripasitoryname0,ss1);
                }
            }
            if(k==2){
////////////////////////////////////////////////////////////////////////
            int k0=vazheyabdarstring(ripasitoryname0,ss);
            int a =strlen(ripasitoryname0);
            strcpy(ss1,ss);
            strcan2(ss1,a+k0);
            //printf(" %d %s ",k0,ss);
            strchasban(ss0,stage0,ss1);
            mkdir(ss0);
////////////////////////////////////////////////////////////////////////                
            }
            else{}
        }
    }
}
}
//e
//commit function s
void commit (char stage0[],char ripasitoryname0[],char ss[]){
    char ss0[1000];
char ss1[1000];
char ss2[1000];
char ss3[1000];
char ss4[1000];
        FILE*k=fopen(ss,"r");
        char x0[1000];
        ////////////////////////////////////////////////
        if(k==NULL){
            
        }
        ////////////////////////////////////////////////
        else{
        int k=vazheyabdarstring(ripasitoryname0,ss);
        int a=strlen(ripasitoryname0);
        strcpy(ss0,ss);
        strcan2(ss0,k+a+1);
        char addkari[1000][1000];
        strcpy(ss4,ss);
        int ii=0;
        int number=0;
        do{
            strmonasebgir1(addkari[ii],ss4,'/');
            ii++;
            number++;
        }while(strcmp(addkari[ii-1],ripasitoryname0)!=0);
        ii=0;
        strchasban(ss0,stage0,"/");
        while(strcmp(addkari[ii],ripasitoryname0)!=0){
            strchasban(ss1,ss0,addkari[number-2-ii]);
            if((number-2-ii)>0){
            DIR * a;
            if((a=opendir(ss1))==NULL){
                mkdir(ss1);
            }
            else{}
            }
            else{
                mkdir(ss1);
                strchasban(ss2,ss1,"/");
                strchasban(ss3,ss2,addkari[0]);
                strchasban(ss4,ss2,"parent.txt");
                FILE * file = fopen(ss4,"w");
                fprintf(file,"%s",currentcomit);
                copytostage(ss3,ss);
            }
            strchasban(ss0,ss1,"/");
            ii++;
        }
        }
}
void commit0(char stage0[],char ripasitoryname0[],char ss[]){
    char ss0[1000];
    char ss1[1000];
    char ss2[1000];
    char ss3[1000];
    char ss4[1000];
    FILE * file = fopen(ss,"r");
    DIR * dir=opendir(ss);
    if( !((dir==NULL) || (file==NULL)) ){
        
    }
    else{
    if(file!=NULL){
        commit(stage0,ripasitoryname0,ss);
    }
    else{
        DIR * d1=opendir(ss);
        if(d1==NULL){}
        else{
            struct dirent *d2;
            int k=0;
            while((d2=readdir(d1))!=NULL){
                k++;
                if(d2->d_type==16){
                    if( strcmp(d2->d_name,"..") && strcmp(d2->d_name,".") && strcmp(d2->d_name,".init") ){
                        strchasban(ss0,ss,"/");
                        strchasban(ss1,ss0,d2->d_name);
                        commit0(stage0,ripasitoryname0,ss1);
                    }
                    else{}
                }
                else{
                    strchasban(ss0,ss,"/");
                    strchasban(ss1,ss0,d2->d_name);
                    commit(stage0,ripasitoryname0,ss1);
                }
            }
            if(k==2){
////////////////////////////////////////////////////////////////////////
            int k0=vazheyabdarstring(ripasitoryname0,ss);
            int a =strlen(ripasitoryname0);
            strcpy(ss1,ss);
            strcan2(ss1,a+k0);
            //printf(" %d %s ",k0,ss);
            strchasban(ss0,stage0,ss1);
            mkdir(ss0);
////////////////////////////////////////////////////////////////////////                
            }
            else{}
        }
    }
}
}

//e
/////// tedad file yab s
void tedadfileyab(char sa[],int * numberoffiles){
    //printf("why why ?");
    char sa0[1000];
    char sa1[1000];
    struct  dirent * dirent0;
    DIR * dir0=opendir(sa);
    //printf(" %s \n",dir0);
    while((dirent0=readdir(dir0))!=NULL){
        //printf("hello while");
        if(dirent0->d_type==16){
            if( ( strcmp ( dirent0->d_name , "." )==0 ) || ( strcmp ( dirent0->d_name , ".." )==0 ) ){
                //printf(" we are here=%s \n",dirent0->d_name);
            }
            else{
                strchasban(sa0,sa,"/");
                strchasban(sa1,sa0,dirent0->d_name);
                //printf(" we are there=%s \n",dirent0->d_name);
                tedadfileyab(sa1,numberoffiles);
                //printf(" we are there=%s \n",dirent0->d_name);
            }
        }
        else{
            *(numberoffiles)=*(numberoffiles)+1;
        }
    } 
    
}
/////// e
/////// status and moghayesegar s
int moghayesegar(char fileadress1[],char fileadress2[]){
    FILE * file0 = fopen (fileadress1,"r");
    FILE * file1 = fopen (fileadress2,"r");
    char sa0[1000];
    char sa1[1000];
    int k=1;
    //printf(" dar shoroo moghayese :");
    //printf(" %d %d\n",feof(file0),feof(file1));
    if(feof(file0)^feof(file1)){return 0;}
    else{
        if(feof(file0)){return 1;}
        
        else{
    while(!(feof(file0)&&feof(file1))){
        //printf(" dar aval while : ");
        //printf(" %d %d\n",feof(file0),feof(file1));
        if(!feof(file0)){
        if(!feof(file1)){
            for(int i=0;i<1000;i++){
                sa0[i]='\0';
                sa1[i]='\0';
            }
        fgets(sa0,1000,file0);
        fgets(sa1,1000,file1);
        //printf(" %s %s ",sa0,sa1);
        if(strcmp(sa0,sa1)){
            return 0;
        }
        else{}
        }
        else{return 0;}
    }
    else{return 0;}
    //printf(" dar akhar while : ");
    //printf(" %d %d\n",feof(file0),feof(file1));
    }
    return k;
        }
    }
}
void status(char stage0[],char adress[],char printadress[]){
    char ss[1000];
    char ss0[1000];
    char ss1[1000];
    struct dirent * dirent0;
    DIR * dir0=opendir(adress);
    //printf("2");
    while((dirent0=readdir(dir0))!=NULL){
            if(dirent0->d_type==16){
                if( strcmp(dirent0->d_name,"..") && strcmp(dirent0->d_name,".") ){
                    strchasban(ss,adress,"/");
                    strchasban(ss1,ss,dirent0->d_name);
                    status(stage0,ss1,printadress);
                    //printf("1");
                }
                else{
                    
                }
            }
            else{
                //amaliat print s
                strchasban(ss,adress,"/");
                strchasban(ss0,ss,dirent0->d_name);
                int k=vazheyabdarstring(ripasitoryname,ss0);
                int ka=strlen(ripasitoryname);
                char ss2[1000];
                char ss3[1000];
                strcpy(ss1,ss0);
                strcan2(ss1,k+ka+1);
                //printf("%s",ss1);
                strchasban(ss2,stage0,"/");
                strchasban(ss3,ss2,ss1);
                //printf(" %s \n",ss3);
                if(moghayesegar(ss3,ss0)){
                    printf(" %s : not changed \n",ss0);
                }
                else{
                    printf(" %s : changed \n",ss0);
                }
                ///////////eslah lazem////////////////

                // e
            }
    }
}
////// e
////// commit yab ba id s
void printcommit(char adress0[]){
    char adress[1000];
    strcpy(adress,adress0);
    char price[1000];
    char ss[1000];
    strmonasebgir1(price,adress,'/');
    strchasban(ss,adress,"/");
    strchasban(adress,ss,price);
    //printf("%s",adress);
    char time[1000];
    char numberofcommitedfiles[1000];
    char branchcommit[1000];
    char commitid[1000];
    char time1[1000];
    char numberofcommitedfiles1[1000];
    char branchcommit1[1000];
    char commitid1[1000];
    strchasban(ss,adress,"/");
    strchasban(time,ss,"/committime.txt");
    strchasban(numberofcommitedfiles,ss,"/numbercommitedfiles.txt");
    strchasban(branchcommit,ss,"/branchcommit.txt");
    strchasban(commitid,ss,"commitid.txt");
    FILE * time0=fopen(time,"r");
    FILE * numberofcommitedfiles0=fopen(numberofcommitedfiles,"r");
    FILE * branchcommit0=fopen(branchcommit,"r");
    FILE * commitid0=fopen(commitid,"r");
    fgets(time1,1000,time0);
    fgets(numberofcommitedfiles1,1000,numberofcommitedfiles0);
    fgets(branchcommit1,1000,branchcommit0);
    fgets(commitid1,1000,commitid0);
    fclose(time0);
    fclose(numberofcommitedfiles0);
    fclose(branchcommit0);
    fclose(commitid0);
    printf(" name = %s\n time = %s number of files = %s\n branch = %s\n id = %s ",price,time1,numberofcommitedfiles1,branchcommit1,commitid1);
}
void commityabbkoli(char adress[],int id0,int id1,char branch0[],int branch1,char word0[],int word1){
    char sa0[1000];
    char sa1[1000];
    char sa2[1000];
    char commiti[1000];
    struct dirent * direntp;
    DIR * dirp=opendir(adress);
    
    while((direntp=readdir(dirp))!=NULL){
        
        if(id1){
            strchasban(sa1,adress,"/");
            strchasban(sa2,sa1,direntp->d_name);
            strchasban(sa0,sa2,"/commitid.txt");
            //printf(" %s \n",sa0);
            FILE * file0=fopen(sa0,"r");
            int idid=0;
            fscanf(file0,"%d",&idid);
            //printf("%d \n",idid);
            fclose(file0);
            if(idid==id0){
                printcommit(sa2);
                printf("\n/////\n");
            }
            else{}
        }
        else{
            if(branch1){
                strchasban(sa1,adress,"/");
            strchasban(sa2,sa1,direntp->d_name);
            strchasban(sa0,sa2,"/branchcommit.txt");
            //printf(" %s \n",sa0);
            FILE * file0=fopen(sa0,"r");
            char branchflag[1000];
            fgets(branchflag,1000,file0);
            //printf("%d \n",idid);
            fclose(file0);
            if(strcmp(branch0,branchflag)==0){
                printcommit(sa2);
                printf("\n/////\n");
            }
            else{}
            }
            else{
                if(word1){
                    strchasban(sa1,adress,"/");
            strchasban(sa2,sa1,direntp->d_name);
                    int clairut=vazheyabdarstring(word0,direntp->d_name);
            //printf(" %s \n",sa0);
            //FILE * file0=fopen(sa0,"r");
            //int idid=0;
            //fscanf(file0,"%d",&idid);
            //printf("%d \n",idid);
            //fclose(file0);
            if(clairut!=-1){
                printcommit(sa2);
                printf("\n/////\n");
            }
            else{}
                }
                else{}
            }
        }
    }

}
//////e
//////khodemooni berabch yab s
int khbrya(char adress[],char branch[]){
    char ss0[1000];
    char ss1[1000];
    strchasban(ss0,adress,"/branchcommit.txt");
    FILE * branchyaby=fopen(ss0,"r");
    int re=0;
    while(!feof(branchyaby)){
        fgets(ss1,1000,branchyaby);
        strcan1(ss1,1);
        if(strcmp(ss1,branch)==0){
            re=1;
        }
        else{}
    }    
    fclose(branchyaby);
    return re;
}
//////e
//////vf kari s
void vfkari(char curbra[]){
    //printf("1");
    FILE * commitid0 = fopen(commitid,"r");
    int num;
    fscanf(commitid0,"%d",&num);
    fclose(commitid0);
    int knum=0;
    char kari0[1000];
    char kari1[1000];
    char kari2[1000];
    char kari3[1000];
    char sscom[1000];
    char ss1[1000];
    char ss2[1000];
    strcpy(ss1,"\0");
    strcpy(ss2,"\0");
    strchasban(sscom,ripasitory,"/commits");
    for(int i=0;i<num;i++){
        strcpy(s0,"\0");
    struct dirent * dirnp;
    DIR * dircp=opendir(sscom);
    //printf("1");
    while((dirnp=readdir(dircp))!=NULL){
        strchasban(kari0,sscom,"/");
        strchasban(kari1,kari0,dirnp->d_name);
        strchasban(kari0,kari1,"/branchcommit.txt");
        strcpy(s0,"\0");
        strchasban(s0,kari1,"/commitid.txt");
        FILE * idea = fopen(s0,"r");
        int adad;
        fscanf(idea,"%d",&adad);
        fclose(idea);
        if(adad!=i){}
        else{
        int flag=0;
        if( strcmp(dirnp->d_name,".") && strcmp(dirnp->d_name,"..") ){
            //printf("%s \n",dirnp->d_name);
        FILE * bracomsee = fopen(kari0,"r");
        //printf("1");
        while (!feof(bracomsee))
        {
            strcpy(kari2,"\0");
            fgets(kari2,1000,bracomsee);
            strcan1(kari2,1);
            if(strcmp(kari2,curbra)){}
            else{
                flag=1;
            }
        }
        //printf("1");
        if(flag){
            strchasban(kari3,kari1,"/vf.txt");
            FILE * vf0=fopen(ss1,"w");
            fprintf(vf0,"0");
            fclose(vf0);
            strcpy(ss1,kari3);
            //printf("%s \n",ss1);
            FILE * file1 = fopen(ss1,"w");
            fprintf(file1,"1");
            fclose(file1);
            strmonasebgir1(s0,kari1,'/');
            //printf("%s",s0);

        }
        else{
            strchasban(kari3,kari1,"/vf.txt");
            FILE * amagh = fopen(kari3,"w");
            fprintf(amagh,"0");
            fclose(amagh);
        }
        }
        else{}
    }
    }
    }

}
//////e

int main(/*int argc , char * argv[]*/){
    struct tm * time0;
    time_t timet;
    timet=time(NULL);
    time0=localtime(&timet);
    strchasban(ripasitoryname,"sample project","");
    strchasban(s,"./",ripasitoryname);
    strchasban(ripasitory,s,"/.init");
    strchasban(s2,"./",ripasitoryname);
    strchasban(stage,ripasitory,"/stage");
    strchasban(currentposition,ripasitory,"/currentposition");
    strchasban(parentcommit,ripasitory,"/parentcommit.txt");
    strchasban(commitid,ripasitory,"/commitid.txt");
    FILE * caca=fopen(parentcommit,"r");
    fgets(s1,1000,caca);
    strcpy(currentcomit,s1);
    fclose(caca);
    gets(s);
    if(sanjeshbarabaryazebteda(5,s,"init")==0){
        mkdir(s2);
        mkdir(ripasitory);
        mkdir(stage);
        mkdir(currentposition);
    }else if(sanjeshbarabaryazebteda(4,s,"add ")==0){
        strchasban(s4,ripasitory,"/laststage/laststage.txt");
        strcan2(s,4);
        FILE * papapaa=fopen(s4,"w");
        fprintf(papapaa,"%s",s);
        addgitripasitory(stage,ripasitoryname,s);
    }else if(sanjeshbarabaryazebteda(6,s,"reset ")==0){
        strchasban(s4,ripasitory,"/laststage/laststage.txt");
        strcan2(s,6);
        //printf("%s ",s);
        if(sanjeshbarabaryazebteda(5,s,"-undo")==0){
            //printf("undo in");
            FILE * pppapa=fopen(s4,"r");
            fgets(s3,1000,pppapa);
            int ka=vazheyabdarstring(ripasitoryname,s3);
        int kaa=strlen(ripasitoryname);
        strcpy(s0,s3);
        strcan2(s0,ka+kaa);
        //printf(" undo :%s",s0);
        strchasban(s1,stage,s0);
        strchasban(s2,currentposition,s0);
        clear(s1);
        remove(s1);
        rmdir(s1);
        addgitripasitory(stage,"currentposition",s2);
        //printf(" undo out ");
        }
        else{
        //    printf("not undo");
        FILE * papapa=fopen(s4,"w");
        int ka=vazheyabdarstring(ripasitoryname,s);
        int kaa=strlen(ripasitoryname);
        strcpy(s0,s);
        strcan2(s0,ka+kaa);
        //printf("%s",s0);
        strchasban(s1,stage,s0);
        strchasban(s2,currentposition,s0);
        clear(s1);
        remove(s1);
        rmdir(s1);
        addgitripasitory(stage,"currentposition",s2);
        }
    }else if(sanjeshbarabaryazebteda(10,s,"commit -m ")==0){
        strcan2(s,10);
        //printf("commit area");
        strchasban(s0,ripasitory,"/commits/");
        strchasban(s1,s0,s);
        strchasban(s0,s1,"/");
        //printf(" %s ",s1);
        mkdir(s1);
        strchasban(s2,s1,"/commitid.txt");
        strchasban(s3,ripasitory,"/commitid.txt");
        strchasban(s4,s1,"/committime.txt");
        FILE * titimeme=fopen(s4,"w");
        fprintf(titimeme,"%s",asctime(time0));
        fclose(titimeme);
        FILE * commitid0 = fopen(s2,"w");
        FILE * commitid1 = fopen(s3,"r");
        int kaka;
        fscanf(commitid1,"%d",&kaka);
        fprintf(commitid0,"%d",kaka);
        fclose(commitid1);
        fclose(commitid0);
        FILE * commitid2 = fopen(s3,"w");
        fprintf(commitid0,"%d",kaka+1);
        fclose(commitid2);
        //printf("1");
        strchasban(s5,s1,"/branchcommit.txt");
        FILE * bracom = fopen(s5,"w");
        //strchasban(s2,ripasitory,"/commits/");
        //strchasban(s3,s2,currentcomit);
        strchasban(s2,ripasitory,"/currentbranch.txt");
        //printf(" %s ",s2);
        FILE * readbranchcommit = fopen(s2,"r");
        fgets(s6,1000,readbranchcommit);
        fprintf(bracom,"%s",s6);
        //printf(" %s ",s6);
        fclose(bracom);
        fclose(readbranchcommit);
        strchasban(s5,ripasitory,"/commits/");
        strchasban(s4,s5,s);
        strchasban(s5,s4,"/numbercommitedfiles.txt");
        int kakakaka=0;
        int * kakakakap=&kakakaka;
        tedadfileyab(stage,kakakakap);
        FILE * numofcommfiles = fopen(s5,"w");
        fprintf(numofcommfiles,"%d",kakakaka);
        fclose(numofcommfiles);
        strchasban(s4,ripasitory,"/commits/");
        strchasban(s5,s4,s);
        strchasban(s4,s5,"/parentcommit.txt");
        FILE * parentcommitcommit=fopen(s4,"w");
        FILE * parentcommit0=fopen(parentcommit,"r");
        fgets(s5,1000,parentcommit0);
        fprintf(parentcommitcommit,"%s",s5);
        fclose(parentcommit0);
        fclose(parentcommitcommit);
        strchasban(s4,ripasitory,"/commits/");
        strchasban(s3,s4,s5);
        strchasban(s2,s3,"/vf.txt");
        FILE * vf0=fopen(s2,"w");
        fprintf(vf0,"0");
        fclose(vf0);
        strchasban(s2,s4,s);
        strchasban(s3,s2,"/vf.txt");
        FILE * vf1=fopen(s3,"w");
        fprintf(vf1,"1");
        fclose(vf1);
        strchasban(s1,s0,s);
        mkdir(s1);
        commit0(s1,"stage",stage);
        strcpy(currentcomit,s);
        FILE * parcom = fopen(parentcommit,"w");
        fprintf(parcom,"%s",currentcomit);
        fclose(parcom);
        ///// commit yek gesmat faramoosh shode , eslah shavad
        
    }else if(strcmp(s,"log")==0){
        //printf("logisim");
        strchasban(s0,ripasitory,"/commitid.txt");
        FILE * commitid0=fopen(s0,"r");
        int id=0;
        fscanf(commitid0,"%d",&id);
        //printf("%d",id);
        for(int i=1;i<id;i++){
            //printf("%d ",i);
            commityabbkoli("./sample project/.init/commits",i,1,"",0,"",0);
        }

    }else if(sanjeshbarabaryazebteda(7,s,"log -n ")==0){
        strcan2(s,7);
        int knumber;
        FILE * inverter0=fopen("./inverter.txt","w");
        fprintf(inverter0,"%s",s);
        fclose(inverter0);
        FILE * inverter1=fopen("./inverter.txt","r");
        fscanf(inverter1,"%d",&knumber);
        fclose(inverter1);
        remove("./inverter.txt");
        //printf("%d",knumber+1);
        FILE * commitid0=fopen(commitid,"r");
        int commitidid;
        fscanf(commitid0,"%d",&commitidid);
        fclose(commitid0);
        for(int i=commitidid-knumber;i<commitidid;i++){
            commityabbkoli("./sample project/.init/commits",i,1,"",0,"",0);
        }
    }else if(0){
        //log branch
    }else if(0){
        //log search by word
    }else if(sanjeshbarabaryazebteda(7,s,"branch ")==0){
        FILE * commitid0=fopen(commitid,"r");
        int commitidid;
        fscanf(commitid0,"%d",&commitidid);
        fclose(commitid0);
        //printf("%d \n",commitidid);
        commitidid--;
        struct dirent * dirn;
        strchasban(s5,ripasitory,"/commits");
        DIR * dirc=opendir(s5);
        while((dirn=readdir(dirc))!=NULL){
            if( strcmp(dirn->d_name,".") && strcmp(dirn->d_name,"..") ){
                //printf(" %s \n",dirn->d_name);
                strchasban(s3,s5,"/");
                strchasban(s4,s3,dirn->d_name);
                strchasban(s3,s4,"/commitid.txt");
                //printf(" %s ",s3);
                FILE * ididid=fopen(s3,"r");
                int iddi;
                fscanf(ididid,"%d",&iddi);
                //printf("%d \n",iddi);
                if(commitidid==iddi){
                    strcpy(s0,dirn->d_name);
            }
            else{
                
                }
                
            }
            else{}
        }
        strcan2(s,7);
        //printf("%s",s);
        //FILE * parentcommit0 = fopen(parentcommit,"r");
        //fgets(s0,1000,parentcommit0);
        //fclose(parentcommit0);
        //printf("%s",s0);
        strchasban(s1,ripasitory,"/commits/");
        strchasban(s2,s1,s0);
        strchasban(s1,s2,"/branchcommit.txt");
        FILE * readbranch = fopen(s1,"r");
        int numkhat=0;
        while (!feof(readbranch))
        {
            fgets(s2,1000,readbranch);
            numkhat++;
        }
        //printf("%d",numkhat);
        //printf("%s",s0);
        fclose(readbranch);
        char khotoot[numkhat+1][1000];
        FILE * readbranch0 = fopen(s1,"r");
        int count=0;
        while (!feof(readbranch0))
        {
            fgets(khotoot[count],1000,readbranch0);
            //printf("%d:%s ",count,khotoot[count]);
            count++;
        }
        strcpy(khotoot[count],s);
        fclose(readbranch0);
        FILE * writebranch = fopen(s1,"w");
        for(int i=0;i<count;i++){
            fprintf(writebranch,"%s",khotoot[i]);
        }
        fprintf(writebranch,"%s\n",khotoot[count]);
        fclose(writebranch);
        strchasban(s0,ripasitory,"/currentbranch.txt");
        FILE * currentbranch=fopen(s0,"w");
        fprintf(currentbranch,"%s",s);
        fclose(currentbranch);
        vfkari(s);
        /////////////////////////////////////
        strchasban(s1,ripasitory,"/branchnames.txt");
        FILE * readbranch2 = fopen(s1,"r");
        int numkhat0=0;
        while (!feof(readbranch2))
        {
            fgets(s2,1000,readbranch2);
            numkhat0++;
        }
        //printf("%d",numkhat);
        //printf("%s",s0);
        fclose(readbranch2);
        char khotooty[numkhat0+1][1000];
        FILE * readbranch3 = fopen(s1,"r");
        int county=0;
        while (!feof(readbranch3))
        {
            fgets(khotooty[county],1000,readbranch3);
            //printf("%d:%s ",count,khotoot[count]);
            county++;
        }
        strcpy(khotooty[county],s);
        fclose(readbranch3);
        FILE * writebranch2 = fopen(s1,"w");
        for(int i=0;i<count;i++){
            fprintf(writebranch2,"%s",khotooty[i]);
        }
        fprintf(writebranch2,"%s\n",khotooty[county]);
        fclose(writebranch2);
        
    }else if(strcmp(s,"branch")==0){   
        //printf("1");
        strchasban(s0,ripasitory,"/branchnames.txt");
        FILE * branchy = fopen(s0,"r");
        while(!feof(branchy)){
            strcpy(s1,"\0");
            fgets(s1,1000,branchy);
            printf("%s",s1);
        }
        fclose(branchy);
    }else if(sanjeshbarabaryazebteda(10,s,"checkout -")==0){
        strcan2(s,10);
        if(sanjeshbarabaryazebteda(1,s,"b")==0){
            strcan2(s,2);
            vfkari(s);
            
        }else if(sanjeshbarabaryazebteda(1,s,"c")==0){
           /* strcan2(s,2);
            strchasban(s1,ripasitory,"/commits");
            int knumber0;
        FILE * inverter0=fopen("./inverter.txt","w");
        fprintf(inverter0,"%s",s);
        fclose(inverter0);
        FILE * inverter1=fopen("./inverter.txt","r");
        fscanf(inverter1,"%d",&knumber0);
        fclose(inverter1);
        remove("./inverter.txt");
        //printf("%d",knumber0+1);
        struct dirent * dirp0;
        DIR * dircp0=opendir(s1);
            while((dirp0=readdir(dircp0))!=NULL){

            }*/
        }else if(sanjeshbarabaryazebteda(1,s,"H")==0){
            strcan2(s,2);
        }else{}

    }else if(0){
        
    }else if(0){
        
    }else if(0){
        
    }else if(0){
        
    }else if(0){
        
    }else if(0){
        
    }else if(0){
        
    }else if(0){
        
    }else if(0){
        
    }else if(0){
        
    }else if(0){
        
    }else if(0){
        
    }else if(0){
        
    }else if(0){
        
    }else if(0){
        
    }else{}

    /*int are=0;
    int * arep=&are;
    tedadfileyab("./sample project/.init/stage",arep);
    printf("%d",are);*/
    //printf("%s",argv[1]);
    //addgitripasitory(stage,ripasitoryname,"./sample project");
    //printf("%d:%d",time0->tm_hour,time0->tm_min);
    //clear(stage);
    /*int intint=moghayesegar("./sample project/.init/stage/k.txt","./sample project/k.txt");
    printf("%d",intint);*/
    //status(stage,"./sample project/a","1");
    //printcommit("./sample project/.init/commits/commit2");
    //commityabbkoli("./sample project/.init/commits",1,1,"",0,"",0);
    //commityabbkoli("./sample project/.init/commits",1,0,"mastera",1,"",0);
    //commityabbkoli("./sample project/.init/commits",1,0,"",0,"comit",1);
    /*
    while (!feof(readbranch0))
        {
            fgets(khotoot[count],1000,readbranch0);
            //printf("%d:%s ",count,khotoot[count]);
            count++;
        }
        */
       //printf("%d",khbrya("./sample project/.init/commits/commit1","master"));
       //vfkari("master");

    return 0;
}