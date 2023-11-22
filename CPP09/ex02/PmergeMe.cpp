#include "PmergeMe.hpp"

// void merge(std::list<int> lt, int begin, int end){

void insertionSort(std::vector<int> &vec){
    size_t i = 1;
    while (i < vec.size())
    {
        int tmp = vec[i];
        int j = i - 1;
        while (j >= 0 && vec[j] > tmp)
        {
            vec[j+1] = vec[j];
            j--;
        }
        vec[j+1] = tmp;
        i++;
    }
    

}

std::vector<int> merge(std::vector<int> vec1,std::vector<int> vec2){
    size_t i = 0;
    size_t j = 0;

    std::vector<int> tmp;
    for(;i<vec1.size() && j < vec2.size();){
        if(vec1[i] <= vec2[j])
            tmp.push_back(vec1[i++]);
        else
            tmp.push_back(vec2[j++]);
    }
    while(i<vec1.size())
        tmp.push_back(vec1[i++]);
    while(j<vec2.size())
        tmp.push_back(vec2[j++]);
    return(tmp);
}

std::vector<int> sort(std::vector<int> vec){
    // std::vector<int> vec1;
    // std::vector<int> vec2;
    if(vec.size() > 2){
        int half = vec.size() / 2;
        std::vector<int> vec1(vec.begin(),vec.begin() + half);
        std::vector<int> vec2(vec.begin() + half,vec.end());
        vec1 = sort(vec1);
        vec2 = sort(vec2);
        vec = merge(vec1,vec2);
    }else{
        insertionSort(vec);
    }
    return(vec);
}
