#include<bits/stdc++.h>
#include<thread> 
using namespace std;
int sudoko[9][9];
bool vc=false,vr=false,vg=false;
void verifyRows(){
    int i,j;
    int a[9]={0};
    for(i=0;i<9;i++){
        for(j=0;j<9;j++){
            a[sudoko[i][j]-1]++;
        }
        if(count(a,a+9,1)!=9)
            return;
        for(j=0;j<9;j++){
            a[j]=0;
        }
    }
    vr=true;
}
void verifyCols(){
    int i,j;
    int a[9]={0};
    for(i=0;i<9;i++){
        for(j=0;j<9;j++){
            a[sudoko[j][i]-1]++;
        }
        if(count(a,a+9,1)!=9)
            return;
        for(j=0;j<9;j++){
            a[j]=0;
        }
    }
    vc=true;
}
void verifyGrids(){
    int i,j,k,l;
    int a[9]={0};
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            for(k=0;k<3;k++){
                for(l=0;l<3;l++){
                    a[sudoko[3*i+k][3*j+l]-1]++;
                }
            }
            if(count(a,a+9,1)!=9)
                return;
            for(k=0;k<9;k++){
                a[k]=0;
            }
        }
    }
    vg=true;
}
int main(){
    freopen("output.txt","r",stdin);
    int i,j;
    for(i=0;i<9;i++)
        for(j=0;j<9;j++)
            cin>>sudoko[i][j];
    fclose(stdin);
    // normal method
    // verifyRows();
    // verifyCols();
    // verifyGrids();

    // with threads
    thread vrt(verifyRows);
    thread vct(verifyCols);
    thread vgt(verifyGrids);
    vrt.join();
    vct.join();
    vgt.join();
    //threads end
    if(vc&vr&vg){
        cout<<"Sudoko is valid";
    }
    else{
        cout<<"Sudoko is invalid";
    }
    return 0;
}