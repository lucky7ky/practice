function Foo() {
//    this.name = "kaiyizhang";
}
alert(typeof Foo);
function Bar() {
    this.name2 = "name bar";
}

Bar.prototype = new Foo();
var bar = new Bar;
alert(bar.constructor);

////Bar.prototype.xx = "xx";

//alert(Bar.prototype);
//var bar = new Bar()

//alert(bar.xx); // "xx"
//alert(Bar.xx); // "xx"
//alert(Bar.prototype.xx); // "xx"

////alert(Bar.constructor); //Foo
////alert(Bar.prototype.constructor); //Foo

////Bar.prototype.constructor = Foo;
////
////alert(Bar.constructor);
////alert(Bar.prototype.constructor);

