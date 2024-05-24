/**
 * @param {number} num
 * @return {number}
 */
var countDigits = function(num) {
    let r = 0
    num.toString().split('').forEach(n => (num % parseInt(n) == 0) && (r += 1))

    return r
};