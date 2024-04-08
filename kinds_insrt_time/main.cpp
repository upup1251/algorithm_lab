#include<iostream>
#include<ctime> //记录时间
using namespace std;

void InsertSort(int*,int);
void quickSort(int*,int,int);
void heapSort(int*,int);
void MergeSort(int*,int);
void merge_sort(int*,int);
int main(){
    //产生实验所需的数据
    int a[101];for(int i=1;i<101;i++)a[i] = random();
    int b[1001];for(int i=1;i<1001;i++)b[i] = random();
    int c[5001];for(int i=1;i<5001;i++)c[i] = random();
    int d[10001];for(int i=1;i<10001;i++)d[i] = random();
    int e[50001];for(int i=1;i<50001;i++)e[i] = random();
    int f[100001];for(int i=1;i<100001;i++)f[i] = random();
    int g[500001];for(int i=1;i<500001;i++)g[i] = random();
    cout<<"InsertSort for 100 use ";
    clock_t start = clock();
    InsertSort(a,100);
    clock_t end = clock();
    cout<<end - start<<"ms"<<endl;
    cout<<"InsertSort for 1000 use ";
    start = clock();
    InsertSort(b,1000);
    end = clock();
    cout<<end - start<<"ms"<<endl;
    cout<<"InsertSort for 5000 use ";
    start = clock();
    InsertSort(c,5000);
    end = clock();
    cout<<end - start<<"ms"<<endl;
    cout<<"InsertSort for 10000 use ";
    start = clock();
    InsertSort(d,10000);
    end = clock();
    cout<<end - start<<"ms"<<endl;
    cout<<"InsertSort for 50000 use ";
    start = clock();
    InsertSort(e,50000);
    end = clock();
    cout<<end - start<<"ms"<<endl;
    cout<<"InsertSort for 100000 use ";
    start = clock();
    InsertSort(f,100000);
    end = clock();
    cout<<end - start<<"ms"<<endl;
    cout<<"InsertSort for 500000 use ";
    start = clock();
    InsertSort(g,500000);
    end = clock();
    cout<<end - start<<"ms"<<endl;
    for(int i=1;i<101;i++)a[i] = random();
    for(int i=1;i<1001;i++)b[i] = random();
    for(int i=1;i<5001;i++)c[i] = random();
    for(int i=1;i<10001;i++)d[i] = random();
    for(int i=1;i<50001;i++)e[i] = random();
    for(int i=1;i<100001;i++)f[i] = random();
    for(int i=1;i<500001;i++)g[i] = random();

    cout<<"merge_sort for 100 use ";
    start = clock();
    merge_sort(a,100);
    end = clock();
    cout<<end - start<<"ms"<<endl;
    cout<<"merge_sort for 1000 use ";
    start = clock();
    merge_sort(b,1000);
    end = clock();
    cout<<end - start<<"ms"<<endl;
    cout<<"merge_sort for 5000 use ";
    start = clock();
    merge_sort(c,5000);
    end = clock();
    cout<<end - start<<"ms"<<endl;
    cout<<"merge_sort for 10000 use ";
    start = clock();
    merge_sort(d,10000);
    end = clock();
    cout<<end - start<<"ms"<<endl;
    cout<<"merge_sort for 50000 use ";
    start = clock();
    merge_sort(e,50000);
    end = clock();
    cout<<end - start<<"ms"<<endl;
    cout<<"merge_sort for 100000 use ";
    start = clock();
    merge_sort(f,100000);
    end = clock();
    cout<<end - start<<"ms"<<endl;
    cout<<"merge_sort for 500000 use ";
    start = clock();
    merge_sort(g,400000);
    end = clock();
    cout<<end - start<<"ms"<<endl;
    for(int i=1;i<101;i++)a[i] = random();
    for(int i=1;i<1001;i++)b[i] = random();
    for(int i=1;i<5001;i++)c[i] = random();
    for(int i=1;i<10001;i++)d[i] = random();
    for(int i=1;i<50001;i++)e[i] = random();
    for(int i=1;i<100001;i++)f[i] = random();
    for(int i=1;i<500001;i++)g[i] = random();

    cout<<"quickSort for 100 use ";
    start = clock();
    quickSort(a,1,100);
    end = clock();
    cout<<end - start<<"ms"<<endl;
    cout<<"quickSort for 1000 use ";
    start = clock();
    quickSort(b,1,1000);
    end = clock();
    cout<<end - start<<"ms"<<endl;
    cout<<"quickSort for 5000 use ";
    start = clock();
    quickSort(c,1,5000);
    end = clock();
    cout<<end - start<<"ms"<<endl;
    cout<<"quickSort for 10000 use ";
    start = clock();
    quickSort(d,1,10000);
    end = clock();
    cout<<end - start<<"ms"<<endl;
    cout<<"quickSort for 50000 use ";
    start = clock();
    quickSort(e,1,50000);
    end = clock();
    cout<<end - start<<"ms"<<endl;
    cout<<"quickSort for 100000 use ";
    start = clock();
    quickSort(f,1,100000);
    end = clock();
    cout<<end - start<<"ms"<<endl;
    cout<<"quickSort for 500000 use ";
    start = clock();
    quickSort(g,1,500000);
    end = clock();
    cout<<end - start<<"ms"<<endl;
    for(int i=1;i<101;i++)a[i] = random();
    for(int i=1;i<1001;i++)b[i] = random();
    for(int i=1;i<5001;i++)c[i] = random();
    for(int i=1;i<10001;i++)d[i] = random();
    for(int i=1;i<50001;i++)e[i] = random();
    for(int i=1;i<100001;i++)f[i] = random();
    for(int i=1;i<500001;i++)g[i] = random();

    cout<<"heapSort for 100 use ";
    start = clock();
    heapSort(a,100);
    end = clock();
    cout<<end - start<<"ms"<<endl;
    cout<<"heapSort for 1000 use ";
    start = clock();
    heapSort(b,1000);
    end = clock();
    cout<<end - start<<"ms"<<endl;
    cout<<"heapSort for 5000 use ";
    start = clock();
    heapSort(c,5000);
    end = clock();
    cout<<end - start<<"ms"<<endl;
    cout<<"heapSort for 10000 use ";
    start = clock();
    heapSort(d,10000);
    end = clock();
    cout<<end - start<<"ms"<<endl;
    cout<<"heapSort for 50000 use ";
    start = clock();
    heapSort(e,50000);
    end = clock();
    cout<<end - start<<"ms"<<endl;
    cout<<"heapSort for 100000 use ";
    start = clock();
    heapSort(f,100000);
    end = clock();
    cout<<end - start<<"ms"<<endl;
    cout<<"heapSort for 500000 use ";
    start = clock();
    heapSort(g,500000);
    end = clock();
    cout<<end - start<<"ms"<<endl;
    for(int i=1;i<101;i++)a[i] = random();
    for(int i=1;i<1001;i++)b[i] = random();
    for(int i=1;i<5001;i++)c[i] = random();
    for(int i=1;i<10001;i++)d[i] = random();
    for(int i=1;i<50001;i++)e[i] = random();
    for(int i=1;i<100001;i++)f[i] = random();
    for(int i=1;i<500001;i++)g[i] = random();
    return 0;
}

void InsertSort(int* array,int num){
    //将第一个位置作为哨兵，从第二个开始比较
    for(int waitingPos = 2;waitingPos<num;waitingPos++){
        //如果将插入有序队列中的数据比有序序列中最大的还大，则无需比较,直接加入有序序列
        if(array[waitingPos]<array[waitingPos-1]){
            //设置哨兵
            array[0] = array[waitingPos];
            //寻找将插入的位置
            int insertPos = waitingPos-1;
            for(;array[0]<array[insertPos];insertPos--){
                //遍历寻找将插入的位置时，顺便将大于插入数据的数据后移
                array[insertPos+1] = array[insertPos];
            }
            array[insertPos+1] = array[0];
        }
    }
}

//快速排序
//一次快速排序，确定一个枢纽，枢纽左侧的比枢纽小，右侧比枢纽大
int quickSortOnce(int* array,int low,int high){
    //将枢纽存放在0号位置，枢纽原本的位置将被覆盖，枢纽的位置最后确定
    array[0] = array[low];
    int key = array[low];
    while(low<high){
        //high向中间减少，遇到比枢纽小的值(应该摆在low那边，枢纽左侧)，进行交换
        while(low<high&&array[high]>=key)high--;
        //枢纽取的是low处的值，在此处可直接覆盖low
        array[low] = array[high];
        //跳转至low处，进行与high同样的操作
        while(low<high&&array[low]<=key)low++;
        array[high] = array[low];
    }
    //low和high相遇，此处便是枢纽的正确位置，执行一次确认一个数的正确位置
    array[low] = array[0];
    //返回枢纽的位置，用于枢纽两侧进行快速排序
    return low;
}
void quickSort(int *array,int low,int high){
    if(low<high){
    int keyNum = quickSortOnce(array,low,high);
    quickSort(array,low,keyNum-1);
    quickSort(array,keyNum+1,high);
    }
}

//堆排序
//交换数组中a,b下标的位置
void swap(int* array,int a,int b){
    int tempt = array[a];
    array[a] = array[b];
    array[b] = tempt;
}
void heapAdjust(int* array,int father,int num){
    int largest = father;
    int lson = father*2+1;
    int rson = father*2+2;
    if(lson<num&&array[largest]<array[lson])largest = lson; 
    if(rson<num&&array[largest]<array[rson])largest = rson; 
    if(largest!=father){
        swap(array,largest,father);
        heapAdjust(array,largest,num);
    }
}
void heapSort(int* array,int num){
    for(int i = (num-1)/2;i>=0;i--){
        heapAdjust(array,i,num);
    }
    for(int i = num-1;i>0;i--){
        swap(array,i,0);
        heapAdjust(array,0,i);
    }
}

/*
void Merge(int* array,int* arraySorted,int i,int m,int n){
    int left = i;
    int right = n;
    int j = m+1;
    for(int k=i;i <= m&&j <= n;k++){
        if(array[j]<array[i])arraySorted[k]=array[j++];
        else arraySorted[k]=array[i++];
    }
    if(j<=n){
        for(;j<=n;j++)arraySorted[j] = array[j];
    }
    if(i<=m){
        for(;i<=m;i++)arraySorted[i] = array[i];
    }
    while(left <= right){
        array[left] = arraySorted[left];
        left++;
    }
}
void Mergesort(int *array,int *arraySorted,int i,int j){
    if(i<j){
        int m = (i+j)/2;
        Mergesort(array,arraySorted,i,m);
        Mergesort(array,arraySorted,m+1,j);
        Merge(array,arraySorted,i,m,j);
    }
}
void MergeSort(int * array,int i){
    int* tempt = new int[i];
    Mergesort(array,tempt,1,i-1);
    array = tempt;
    delete[] tempt;
}
*/

// 合并
void merge(int arr[], int tempArr[], int left, int mid, int right)
{
    // 标记左半区第一个未排序的元素
    int l_pos = left;
    // 标记右半区第一个未排序的元素
    int r_pos = mid + 1;
    // 临时数组元素的下标
    int pos = left;

    // 合并
    while (l_pos <= mid && r_pos <= right)
    {
        if (arr[l_pos] < arr[r_pos])  // 左半区第一个剩余元素更小
            tempArr[pos++] = arr[l_pos++];
        else  // 右半区第一个剩余元素更小
            tempArr[pos++] = arr[r_pos++];
    }

    // 合并左半区剩余的元素
    while (l_pos <= mid)
        tempArr[pos++] = arr[l_pos++];

    // 合并右半区剩余的元素
    while (r_pos <= right)
        tempArr[pos++] = arr[r_pos++];

    // 把临时数组中合并后的元素复制回原来的数组
    while (left <= right)
    {
        arr[left] = tempArr[left];
        left++;
    }
}
// 归并排序
void msort(int arr[], int tempArr[], int left, int right)
{
    // 如果只有一个元素，那么不需要继续划分
    // 只有一个元素的区域，本生就是有序的，只需要被归并即可
    if (left < right)
    {
        // 找中间点
        int mid = (left + right) / 2;
        // 递归划分左半区
        msort(arr, tempArr, left, mid);
        // 递归划分右半区
        msort(arr, tempArr, mid + 1, right);
        // 合并已经排序的部分
        merge(arr, tempArr, left, mid, right);
    }
}
// 归并排序入口
void merge_sort(int arr[], int n)
{
    // 分配一个辅助数组
    int tempArr[n];
    // 调用实际的归并排序
    msort(arr, tempArr, 0, n - 1);
}

