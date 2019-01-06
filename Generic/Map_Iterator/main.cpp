#include <iostream>
#include <map>
#include <iterator>
#include <vector>

void display(const std::map<std::string, float>&);
void displayKeyValue(const std::map<std::vector<int>*, int>&);

int main() {

#if 0
    /* map-*/
    std::map<std::string, float> person;
    person["Jamie"] = 20000;
    person["James"] = 12000;
    display(person);

    std::map<int, int*> crs;
    int red[] = {3,7,9};
    crs[52] = red;
    std::cout << crs[52][1] << std::endl;  //prints 7
    crs[52][1] = 11;
    std::cout << crs[52][1] << std::endl;  //prints 11
#endif


#if 0
    struct Triple
    {
        int color[3];
    };


    Triple black = {1, 0, 0}, white = {0, 1, 0}, blue = {0, 0, 1};
    std::map<int,Triple> colours;

    colours.insert(std::pair<int,Triple>(0, black));
    colours.insert(std::pair<int,Triple>(1, white));
    colours.insert(std::pair<int,Triple>(2, blue));

    std::map<int, Triple>::iterator it = colours.begin();

    while(it != colours.end()) {
        int index = 0;
        std::cout << it->first <<" -> ";
        while(index <= 2) {
            std::cout << it->second.color[index];
            index++;
        }
        std::cout.put(0x0a);
        it++;
    }
#endif



    std::vector<int> v1{10,20,30};
    std::vector<int> v2{20,60,90};
    std::map<std::vector<int>*, int> solution;

    solution.insert(std::pair<std::vector<int>*, int>(&v1, 0));
    solution.insert(std::pair<std::vector<int>*, int>(&v2, 1));

    displayKeyValue(solution);

    return 0;
}

void display(const std::map<std::string, float>& prs ){
    /* display map */
    auto it = prs.begin();  /* std::map<std::string, float>::iterator it = person.begin(); */
    while(it != prs.end()) {
        std::cout << it->first << ", " << it->second << std::endl;
        it++;
    }

}

void displayKeyValue(const std::map<std::vector<int>*,int>& map){

    std::map<std::vector<int>*,int>::const_iterator it = map.begin();
    while(it != map.end()) {
        /* iterate over first segment */
        std::cout << it->second <<" -> { ";
        
        for (int i=0;i<it->first->size();i++) {
         //   std::vector<int>* f = it->first;
            int elem = it->first->at(i);
            std::cout << elem << "," << " ";
        }
        std::cout << " }" << std::endl;
        it++;
    }
}
