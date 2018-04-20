#include<iostream>

int nr;
int V[100];
using namespace std;

int read_data(){
    cout<<"nr = ";cin>>nr;
    for(int i=1;i<=nr;i++){
        cout<<"V["<<i<<"] = ";
        cin>>V[i];}}

int make_heaps(){
    for(int i=1;i<=nr;i++){
        int dad=i/2;
        int son=i;
        while((dad)&&(V[dad]<V[son])){
            swap(V[dad],V[son]);
            son=dad;
            dad=son/2;}}}

int print_data(){
    for(int i;i<=nr;i++){
        cout<<V[i]<<endl;}}

int main(){
    read_data();
    make_heaps();
    print_data();
    return 1;}
