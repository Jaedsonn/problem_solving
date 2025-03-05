#include <iostream>
#include <vector>

using namespace std;

vector<int> gradingStudents(vector<int> grades) {
    int students = grades.size();
    vector<int> newGrade;
    
    for(int i = 0; i < students; i++){
        // Next five logic        
        if(grades[i] < 38){
            newGrade.push_back(grades[i]);
            continue;
        }
        int  nextFive = grades[i] + (5 - grades[i]%5);
        
            
            // Logic to create a grade
         if(nextFive - grades[i] < 3){
                newGrade.push_back(nextFive);
         } else{
                newGrade.push_back(grades[i]);
         }
    }
    
    return newGrade;
}

int main(){
	return 0;
}
