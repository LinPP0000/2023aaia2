//week17-3b.cpp 方法2:選擇排序法Selection Sort
void sortColors(int* nums, int numsSize) {
    for(int i=0;i<numsSize-1;i++){
        for(int j=i+1;j<numsSize;j++){
            if(nums[i]>nums[j]){
                int temp = nums[i];
                nums[i]=nums[j];
                nums[j]=temp;
                }
            }
        }
    }
