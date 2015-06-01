var Promise = require("bluebird")
var fs = require("fs");
Promise.promisifyAll(fs);
// Now you can use fs as if it was designed to use bluebird promises from the beginning

fs.readFileAsync("data/fle.json")
.then(function (data) {
    return JSON.parse(data);
}).then(function(val) {
    console.log(val.success);
})
.catch(SyntaxError, function(e) {
    console.error("invalid json in file");
})
.catch(function(e) {
    console.error("unable to read file")
});

fs.readFileAsync("i")
.then (function (data) {
    console.log(data);
})
.catch(SyntaxError,function(e) {
    console.error("invalid json in file");
})
.catch(function(e) {
    console.error("unable to read file")
})
//fs.readFile("./data/1","utf-8",function(err,data){
    //if (err == null) {
        //console.log(data);
        //fs.readFile("./data/22","utf-8",function(err,data) {
            //if ( err == null) {
                //console.log(data);
                //fs.readFile("./data/3","utf-8",function(err,data){
                    //if ( err == null) {
                        //console.log(data);
                    //} else {
                        //console.log(err);
                    //}
                //} )

            //} else {
                //console.log(err);
            //}
        //})
    //} else {
        //console.log(err);
    //}
//})
