#include<iostream>
#include <ctime>
#include <vector>
#include<random>
using namespace std;

int* add(vector<int>,int);
int* mid_sum(vector<int>,int,int,int);
int* divide(vector<int>,int,int);
int* bao_li(vector<int>,int);
int main(){
    vector<int> array1;
    for(int i=0;i<5000;i++){
        array1.push_back(random()%100-50);
    }
    cout<<"bao_li,mid_sum,add;"<<endl;
    cout<<"sum,start,end,time;"<<endl;
    cout<<"5000:"<<endl;
    clock_t start = clock();
    int* tempt=bao_li(array1,5000);
    clock_t end = clock();
    cout<<tempt[0]<<' '<<tempt[1]<<' '<<tempt[2]<<' '<<end-start<<endl;;
    start = clock();
    tempt = divide(array1,0,4999);
    end = clock();
    cout<<tempt[0]<<' '<<tempt[1]<<' '<<tempt[2]<<' '<<end-start<<endl;;
    start = clock();
    tempt = add(array1,5000);
    end = clock();
    cout<<tempt[0]<<' '<<tempt[1]<<' '<<tempt[2]<<' '<<end-start<<endl;;

    array1.clear();
    for(int i=0;i<10000;i++){
        array1.push_back(random()%100-50);
    }
    cout<<"10000:"<<endl;
    start = clock();
    tempt=bao_li(array1,10000);
    end = clock();
    cout<<tempt[0]<<' '<<tempt[1]<<' '<<tempt[2]<<' '<<end-start<<endl;;
    start = clock();
    tempt = divide(array1,0,9999);
    end = clock();
    cout<<tempt[0]<<' '<<tempt[1]<<' '<<tempt[2]<<' '<<end-start<<endl;;
    start = clock();
    tempt=add(array1,10000);
    end = clock();
    cout<<tempt[0]<<' '<<tempt[1]<<' '<<tempt[2]<<' '<<end-start<<endl;;

    array1.clear();
    for(int i=0;i<100000;i++){
        array1.push_back(random()%100-50);
    }
    cout<<"100000:"<<endl;
    start = clock();
    tempt=bao_li(array1,100000);
    end = clock();
    cout<<tempt[0]<<' '<<tempt[1]<<' '<<tempt[2]<<' '<<end-start<<endl;
    start = clock();
    tempt = divide(array1,0,99999);
    end = clock();
    cout<<tempt[0]<<' '<<tempt[1]<<' '<<tempt[2]<<' '<<end-start<<endl;
    start = clock();
    tempt = add(array1,100000);
    end = clock();
    cout<<tempt[0]<<' '<<tempt[1]<<' '<<tempt[2]<<' '<<end-start<<endl;;

    array1.clear();
    for(int i=0;i<1000000;i++){
        array1.push_back(random()%100-50);
    }
    cout<<"1000000:"<<endl;
    start = clock();
    tempt=bao_li(array1,1000000);
    end = clock();
    cout<<tempt[0]<<' '<<tempt[1]<<' '<<tempt[2]<<' '<<end-start<<endl;;
    start = clock();
    tempt = divide(array1,0,999999);
    end = clock();
    cout<<tempt[0]<<' '<<tempt[1]<<' '<<tempt[2]<<' '<<end-start<<endl;;
    start = clock();
    tempt = add(array1,1000000);
    end = clock();
    cout<<tempt[0]<<' '<<tempt[1]<<' '<<tempt[2]<<' '<<end-start<<endl;;
}

int* bao_li(vector<int> array,int length){
    int bigest_sum=0,sum,start=0,end=0;
    for(int i=0;i<length;i++){
        sum=0;
        for(int j=i;j<length;j++){
            sum+=array[j];
            if(sum>bigest_sum){
                bigest_sum=sum;
                start=i,end=j;
            }
        }
    }
    int* outcome = new int[3];
    outcome[0]=bigest_sum;
    outcome[1]=start;
    outcome[2]=end;
    return outcome;
}

int* mid_sum(vector<int> array,int start,int mid,int end){
    int sum=0;
    int bigest_sum=array[mid];
    int r_est=mid,l_est=mid;
    for(int i=mid;i>=start;i--){
        sum+=array[i];
        if(sum>bigest_sum){
            bigest_sum=sum;
            l_est=i;
        }
    }
    sum=bigest_sum;
    for(int i=mid+1;i<=end;i++){
        sum+=array[i];
        if(sum>bigest_sum){
            bigest_sum=sum;
            r_est=i;
        }
    }
    int* outcome = new int[3];
    outcome[0]=bigest_sum;
    outcome[1]=l_est;
    outcome[2]=r_est;
    return outcome;
}

int* divide(vector<int> array,int start,int end){
    if(start==end){
        int* a = new int[3];
        a[0]=array[start];
        a[1]=start;
        a[2]=end;
        return a;
    }
    int mid = (start+end)/2;
    int* left = divide(array,start,mid);
    int* right = divide(array,mid+1,end);
    int* midsum = mid_sum(array,start,mid,end);
    if(left[0]>=right[0]&&left[0]>=midsum[0]) return left;
    else if (right[0] >= left[0]&&right[0] >=midsum[0]) return right;
    else return midsum;
    return 0;
}

int* add(vector<int> array,int length){
    int* pre_son_sum = new int[length];
    int* pre_son_start = new int[length];
    int largest_sum=0;
    pre_son_sum[0]=array[0];
    pre_son_start[0]=0;
    largest_sum=array[0];
    int start=0,end=0;
    for(int i=1;i<length;i++){
        if(pre_son_sum[i-1]+array[i]>array[i]){
            pre_son_sum[i]=pre_son_sum[i-1]+array[i];
            pre_son_start[i]=pre_son_start[i-1];
        }
        else {
            pre_son_sum[i]=array[i];
            pre_son_start[i]=i;
        }
        if(pre_son_sum[i]>largest_sum){
            largest_sum = pre_son_sum[i];
            end = i;
            start = pre_son_start[i];
        }
    }
    int* a = new int[3];
    a[0]=largest_sum;
    a[1]=start;
    a[2]=end;
    return a;
}
