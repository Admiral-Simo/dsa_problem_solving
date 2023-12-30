/**
 * @param {string} address
 * @return {string}
 */
var defangIPaddr = (address) => {
    return address.replace(/\./g, "[.]");
};
