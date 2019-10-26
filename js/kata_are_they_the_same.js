function comp(a, b) {
    {
        // Preliminary condition tests:
        if (a === b) return true;
        if (!a || !b) return false;
        if (a.length !== b.length) return false;

        // map a to square a, and sort both arrays:
        a = a.map(item => item*item).sort();
        b = b.sort();

        // compare each element of a and b:
        for (let i = 0; i< a.length; i++) {
            if (a[i] !== b[i]) {
                return false;
            }
        }

        return true;
    }
}

let a = [121, 144, 19, 161, 19, 144, 19, 11];
let b = [14641, 20736, 361, 25921, 361, 20736, 361, 121];

let test = comp(a, b);
console.log(`Test 1: ${test}`);

a = [121, 144, 19, 161, 19, 144, 19, 11];
b = [14641, 20736, 361, 25921, 361, 20736, 362, 121];
test = comp(a, b);
console.log(`Test 2: ${test}`);
