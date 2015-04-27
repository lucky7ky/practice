function factorial(n) {
    var total = 1;
    for (var i=1; i < n+1; i++) {
        total = total * i;
    }
    return total;
}
console.log(factorial(3)); //6
console.log(factorial(4)); //24
console.log(factorial(5)); //120

function factorial_recur(n) {
    if (n <= 1) {
        return 1;
    }
    return n * factorial_recur(n - 1)
}

console.log(factorial_recur(3));
console.log(factorial_recur(4));
console.log(factorial_recur(5));

function fibonacci(n) {
    if (n == 0) {
        return 0;
    } else if (n == 1) {
        return 1;
    } else {
        return fibonacci(n-1) + fibonacci(n-2)
    }
}


console.log(fibonacci(0)); // 0
console.log(fibonacci(1)); // 1
console.log(fibonacci(2)); // 1
console.log(fibonacci(3)); // 2
console.log(fibonacci(4)); // 3
console.log(fibonacci(5)); // 5
console.log(fibonacci(6)); // 8
console.log(fibonacci(7)); // 13

function count(obj) {
    var total = 0;
    for (var i in obj){
        if (typeof obj[i] == "number") {
            total += obj[i]
        } else {
            total += count(obj[i]);
        }
    }
    return total;
}


console.log(count({"key1":1, "key2":2, "key3":{"key31": 31, "key32": 32}})); // 1+2+31+32 = 66
var obj = {
    "key1":1, 
    "key2":2, 
    "key3":{
        "key31": 2, 
        "key32": 3,
        "key33": {
            "key331": 4,
            "key332": 5,
        }
    }
}
//for (var i in obj) {
//    console.log(i, obj[i])
//}
console.log(count(obj)); // 1+2+2+3+4+5 = 17
