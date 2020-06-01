/**
 * @param {string} ransomNote
 * @param {string} magazine
 * @return {boolean}
 */
var canConstruct = function(ransomNote, magazine) {
    let m = new Map();
    let sz = magazine.length;
    for(let i=0;i<sz;i++){
        if(!m.has(magazine[i])){
            m.set(magazine[i], 1);
        }else{
            m.set(magazine[i], m.get(magazine[i])+1);
        }
    }
    let sz1 = ransomNote.length;
    for(let j=0; j<sz1;j++){
        // console.log(m.has(ransomNote[j]))
        if(m.has(ransomNote[j])){
          console.log(m.get(ransomNote[j]))
            if(m.get(ransomNote[j])<=0) return false;
          else{
              m.set(ransomNote[j],m.get(ransomNote[j])-1)
             // console.log(m.get(ransomNote[j]))
          }
            
        }else{
           return false
        }
        
        
    }
    return true;
    
};
