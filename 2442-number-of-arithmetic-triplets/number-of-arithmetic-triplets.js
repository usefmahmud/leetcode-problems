/**
 * @param {number[]} nums
 * @param {number} diff
 * @return {number}
 */
var arithmeticTriplets = function(nums, diff) {
    let n = 0

    for(let i=0; i<nums.length; i++){
        for(let j=0; j<nums.length; j++){
            for(let k=0; k<nums.length; k++){
                if((nums[j] - nums[i] === diff) && (nums[k] - nums[j] === diff)){
                    n++
                }
            }
        }
    }

    return n
};