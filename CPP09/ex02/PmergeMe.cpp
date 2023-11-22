#include "PmergeMe.hpp"

// void merge(std::list<int> lt, int begin, int end){
    
// }
void insertionSort(std::vector<int> &vec, int begin, int end){
    int tmp;
    int j;
    for(int i = begin; i < end; i++){
        tmp = vec[i + 1];
        j = i + 1;
        while(j > begin && vec[j - 1] > tmp){
            vec[j] = vec[j - 1];
            j--;
        }
        vec[j] = tmp;
    }
}

std::vector<int> merge(std::vector<int> vec1,std::vector<int> vec2, int size1, int size2){
    int i = 0;
    int j = 0;

    std::vector<int> tmp;
    for(;i<size1 && j < size2;){
        if(vec1[i] <= vec2[j])
            tmp.push_back(vec1[i++]);
        else
            tmp.push_back(vec2[j++]);
    }
    while(i<size1)
        tmp.push_back(vec1[i++]);
    while(j<size2)
        tmp.push_back(vec2[j++]);
    return(tmp);
}

std::vector<int> sort(std::vector<int> vec,int begin, int size){
    std::vector<int> vec1;
    std::vector<int> vec2;
    if(size - begin > 2){
        int half = (begin + size) / 2;
        vec1 = sort(vec,begin,half);
        vec2 = sort(vec,half,size - half);
        vec = merge(vec1,vec2,vec1.size(), vec2.size());
    }else{
        insertionSort(vec, begin, size);
    }
    return(vec);
}
