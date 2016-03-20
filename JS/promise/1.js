var request = require('request');

//多层嵌套
//function log(data, cb) {
    //setTimeout(function(){
        //console.log(data);
        //if (cb) {
            //cb();
        //}
    //}, 1000);
//}
//log(1, function(){
    //log(2, function(){
        //log(3);
    //})
//})

//Promise

//function log(data) {
    //return new Promise(function(resolve) {
        //setTimeout(function() {
            //console.log(data);
            //resolve();
        //}, 1000)
    //})
//}
//log(1)
//.then(function() {
    //return log(2);
//})
//.then(function() {
    //return log(3);
//})


//function log(data) {
    //return new Promise(function(resolve) {
        //request('http://baidu.com', function(err, resp, body) {
            //resolve(body);
        //});
    //});
//}

//log(1)
//.then(function(body) {
    //console.log(body.length);
    //return body;
//})
//.then(function(body) {
//}).then(function() {
//});



function log(i) {
    return new Promise(function(resolve) {
        setTimeout(function() {
            console.log(i)
            resolve();
        }, 1000)
    })
}
function printN(n) {
    var p = log(1);
    for (var i = 2; i <= n; i++) {
        var a = function(x) {
            return function() {
                return log(x);
            }
        }
        p = p.then(a(i));
    }
}

printN(10);

