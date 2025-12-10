var filter = function(arr, fn) {
    const filteredArr = [];
    for(let i = 0; i<arr.length; i++) {
        if(fn(arr[i], i)) filteredArr.push(arr[i]);
    }
    return filteredArr;
};

// console.log(filter([0,10,20,30], function greaterThan10(n) { return n > 10; }));