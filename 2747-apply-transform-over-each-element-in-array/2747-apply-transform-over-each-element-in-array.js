/**
 * @param {number[]} arr
 * @param {Function} fn
 * @return {number[]}
 */
var map = function(arr, fn) {
    newarr=[];
    for(let i=0;i<arr.length;i++){
        newarr.push(fn(arr[i],i))
    }
    return newarr
};