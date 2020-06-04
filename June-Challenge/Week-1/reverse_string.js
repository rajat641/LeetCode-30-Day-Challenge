/**
 * @param {character[]} s
 * @return {void} Do not return anything, modify s in-place instead.
 */
var reverseString = function(s) {
        var star = 0;
        var t = s;
        var en = s.length-1;
        while(star<=en){
            let j= t[star];
            t[star] = t[en];
            t[en] = j;
            star++;
            en--;
            
        }
    return t;
};
