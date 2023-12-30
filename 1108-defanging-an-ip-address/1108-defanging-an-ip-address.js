/**
 * @param {string} address
 * @return {string}
 */
var defangIPaddr = (address) => {
   let result = '';
   for (let i = 0; i < address.length; i++) {
     if (address.charAt(i) === '.') {
        result += "[.]";
        continue;
     }
     result += address.charAt(i);
   }
   return result; 
};