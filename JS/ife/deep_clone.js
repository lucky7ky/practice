function deepClone(obj) {
    var newobj = {}
    for (var k in obj) {
        if(typeof obj[k] == "object") {
            newobj[k] = deepClone(obj[k]);
        } else {
            newobj[k] = obj[k];
        }
    }
    return newobj
}

var a = {
    "k1":1,
    "k2":2,
    "k3": {
        "k4": 4,
        "k5": 5,
    }
};

var b = deepClone(a);

console.log(a);
console.log(b);

a.k1 = 11;

console.log(a);
console.log(b);

a.k3.k4 = 44;

console.log(a);
console.log(b);
