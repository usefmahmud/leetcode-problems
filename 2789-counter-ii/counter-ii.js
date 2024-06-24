/**
 * @param {integer} init
 * @return { increment: Function, decrement: Function, reset: Function }
 */
var createCounter = function(init) {
    let x = init;
    return {
        increment: () => {
            return ++x;
        },
        reset: () => {
            x = init;
            return x;
        },
        decrement: () => {
            return --x;
        }
    }
};

/**
 * const counter = createCounter(5)
 * counter.increment(); // 6
 * counter.reset(); // 5
 * counter.decrement(); // 4
 */