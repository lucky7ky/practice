//学习作用域
//易错点 看下面小栗子
//参考鸟哥：【Javascript作用域原理】http://www.laruence.com/2009/05/28/863.html
var a = "hi";
function test() {
    console.log(a);//注意这里的结果是undefined而不是hi
    //var a = "hello";
    //console.log(a);//hello
    //console.log(b);//脚本错误
}
//test();

//var a = 5;
//function fn() {
    //console.log(a);
//} 
//fn();
//学习原型
//工厂模式

//function createObject(name,age) {
    //var obj = new Object(); //创建对象
    //obj.name = name;//添加属性
    //obj.age = age;
    //obj.run = function() { //添加方法
        //return this.name + this.age + '运行中...';
    //};
    //return obj;//返回对象引用
//}

//构造函数
//构造函数也是函数，但函数名第一个字母大写，必须使用new运算符
//function Box(name,age) {   //创建一个对象
    //this.name = name; //添加一个属性
    //this.age = age;
    //this.run = function() {
        //return this.name + this.age + '运行中...';
    //};
//}
//var box1 = new Box('Lee',100);//实例化
//var box2 = new Box('Jack',200);//实例化
//console.log(box1.run());
//console.log(box2.run());
//console.log(box1.run == box2.run);
//var o = new Object();
//Box.call(o,'Allen','30');//对象冒充 可以使用Box里的属性和方法
//console.log(o.run());
//原型

//function Box() {};//构造函数函数体内什么都没有，如果有，叫做实例属性/实例方法
//Box.prototype.name = "Lee";
//Box.prototype.age = 100;
//Box.prototype.run = function() {
    //return this.name + this.age + '运行中...';
//};

//var box1 = new Box();
//var box2 = new Box();
////console.log(box1.run());
////console.log(box1.run == box2.run);
//console.log(Box.prototype);
//console.log(box1.prototype);
//console.log(box1.__proto__);
//console.log(box1.constructor);
//console.log(Box.prototype.constructor);



function Box(){};
Box.prototype={ //使用字面量的方式
    constructor:Box,
    name:'Lee',
    age:100,
    number:[1,2,3],
    run:function(){
        returnthis.name+this.age+'运行中...';
    }
};
var box1 = new Box();
var box2 = new Box();
//box1.number=[1,2];
//console.log(box1.number);
//console.log(box2.number);
box1.number.push(4);
console.log(box1.number);
console.log(box2.number);

