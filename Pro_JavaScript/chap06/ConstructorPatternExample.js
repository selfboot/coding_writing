function Person(name, age, job) {
    this.name = name;
    this.age = age;
    this.job = job;
    this.sayName = function() {
        console.log(this.name);
    };
}

// 当作构造函数使用
var person1 = new Person("Nicholas", 29, "Software Engineer");
var person2 = new Person("Greg", 27, "Doctor");

person1.sayName(); //"Nicholas"
person2.sayName(); //"Greg"

console.log(person1 instanceof Object); //true
console.log(person1 instanceof Person); //true
console.log(person2 instanceof Object); //true
console.log(person2 instanceof Person); //true

console.log(person1.constructor == Person); //true
console.log(person2.constructor == Person); //true
console.log(person1.sayName == person2.sayName); //false

// 当作普通函数使用 
// 全局作用域中调用一个函数时，this对象指向Global对象
// P146
Person('Geek', 12, 'Hack');
sayName();
