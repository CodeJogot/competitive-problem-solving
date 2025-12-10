var map = function(arr, fn) {
    const ret = [];
    for(let i = 0; i<arr.length; i++) {
        ret[i] = fn(arr[i], i);
    }
    return ret;
};

/*
console.log(map([1, 2, 3], function plusOne(n, i) {
    return n + i;
}));
*/