#include <iostream>

int main(){
  std::cout << "Self isolation" << std::endl;
  bool flagError = false;
  int sumResidents = 0;
  int countResidents = 0;
  int residentsFloor = 0;
  int arr[5] = {};
  std::cout << "Enter the number of tenants" << std::endl;
  std::cin >> countResidents;
  std::cout << "Enter the number of tenants per floors" << std::endl;
  for(int i = 0; i < 5; i++){
    std::cin >> residentsFloor;
    arr[i] = residentsFloor;
    sumResidents +=residentsFloor;
  }
  if(sumResidents > countResidents){
    std::cout << "The house has more residents than registered " << sumResidents << std::endl;
    flagError = true;
  }  
  if(!flagError){
    int percentage  = (sumResidents * 100) / countResidents;
    std::cout << "Percentage of self-isolation " << percentage << std::endl;
  }
  return 0;
}

// В одной отдельно взятой пятиэтажке проживает N 
// зарегистрированных жильцов - данное число требуется ввести 
// с самого начала программы. На каждом из этажей сейчас 
// находится Ni людей. Это число также требуется ввести вначале.
// Используя все эти данные требуется вычислить 
// общий уровень самоизоляции в доме, 
// как процентное отношение общего числа людей, 
// которые сейчас находятся на этажах к общему 
// количеству жильцов, зарегистрированных в нём. 
// Для этого можно использовать формулу: (сумма Ni * 100) / N