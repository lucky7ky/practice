var arr = [1,4,5,8];

function ListNode(v, n) {
    this.value = v;
    this.next = n;
}

var node = new ListNode(1, null);
console.log(node);

var node2 = new ListNode(2, node);
console.log(node2);

function makeList(arr) {
    //TODO
    var node = new ListNode(null,null);
    var a = node;
    for (var i = 0; i < arr.length; i++) {
        node.next = new ListNode(arr[i], null);
        node = node.next;
    }
    return a.next;
}

function makeArrary(nodeHead) {
    //TODO
    var arr = []; 
    while (nodeHead) {
        arr.push(nodeHead.value);
        nodeHead = nodeHead.next;
    }
    return arr;
}


var node = makeList(arr);
console.log(node);
var arr = makeArrary(node);
console.log(arr);
