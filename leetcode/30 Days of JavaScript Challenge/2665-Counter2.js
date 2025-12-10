var createCounter = function(init) {
    let initialValue = init;
    const obj = {
        increment: function() {
            return ++initialValue;
        },
        decrement: function() {
            return --initialValue;
        },
        reset: function() {
            initialValue = init;
            return initialValue;
        }
    }
    return obj;
};
