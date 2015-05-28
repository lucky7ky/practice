var najax = require("najax")

//najax('http://www.baidu.com', function(html) { 
    //console.log(html.length); 
//}); // "awesome"

//najax('http://www.luckykaiyi.com', function(html) { 
    //console.log(html.length); 

//}); // "awesome"
najax({
    url:'http://www.baidu.com',
}).success(function (html) {
    console.log(html.length);
    najax({
        url:'http://www.luckykaiyi.com'
    }).success(function(html) {
        console.log(html.length)
    }).error(function(err){
        console.log(err)
    })
}).error(function(err){
    console.log(err)
})

//najax('http://www.baidu.com', { type:'POST' }, function(html){ console.log(html); }); // "awesome"
//najax({ url:'http://www.baidu.com', type:'POST', success: function(html){ console.log(html); }); // "awesome"
//najax({ url:'http://www.baidu.com', type:'POST' }).success(function(resp){}).error(function(err){}); // "awesome"})
