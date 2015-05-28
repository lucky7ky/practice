var fs = require("fs")

//function callback(err, data) {
    //console.log(err)
    //console.log(data);
    //fs.readFile("./data/2", "utf-8", callback2);
//}

//function callback2(err, data) {
    //console.log(err)
    //console.log(data);
    //fs.readFile("./data/3","utf-8",callback3);
//}
//function callback3(err,data) {
    //console.log(err);
    //console.log(data);
//}

//console.log("before")
//fs.readFile("./data/1", "utf-8", callback);
//console.log("after")

fs.readFile("./data/1","utf-8",function(err,data){
    if (err == null) {
        console.log(data);
        fs.readFile("./data/22","utf-8",function(err,data) {
            if ( err == null) {
                console.log(data);
                fs.readFile("./data/3","utf-8",function(err,data){
                    if ( err == null) {
                        console.log(data);
                    } else {
                        console.log(err);
                    }
                } )

            } else {
                console.log(err);
            }
        })
    } else {
        console.log(err);
    }
})
//fs.readFile('./data/1',"utf-8",function(){
//callback(err,data);
//fs.readFile('./data/2',"utf-8",function(){
        //callback(err,data);
        //fs.readFile('./data/3',"utf-8",callback)
    //})
//})
