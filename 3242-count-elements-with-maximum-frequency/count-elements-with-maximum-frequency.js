/**
 * @param {number[]} nums
 * @return {number}
 */
var maxFrequencyElements = function(nums) {
    let max = 0, num = 1, mynums = {}
    for(let i=0; i<nums.length; i++){
        if(mynums[nums[i]]) mynums[nums[i]]++
        else mynums[nums[i]] = 1
    }
    
    for(let n in mynums){
        if(mynums[n] > max){
            max = mynums[n]
            num = 1
        }else if(mynums[n] == max){
            num += 1
        }
    }
    return num * max
};