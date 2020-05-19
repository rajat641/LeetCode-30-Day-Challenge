/**
 * @param {number[]} A
 * @return {number}
 */
var maxSubarraySumCircular = function(A) {
    var local_max =0;
    var global_max = -30000;
    var local_min =0;
    var global_min = 30000;
    var total =0;
    var sz = A.length;
    for(var i=0;i<sz;i++){
        local_max=  Math.max(local_max+A[i], A[i]);
        global_max = Math.max(global_max, local_max);
        local_min=  Math.min(local_min+A[i], A[i]);
        global_min = Math.min(global_min, local_min);
        total+=A[i];
    }
    if(global_max<0) return global_max;
    return global_max > total-global_min ? global_max :total-global_min; 
};
