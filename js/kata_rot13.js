/**
 * ROT13 is a simple letter substitution cipher that replaces a letter with the letter 13 letters
 * after it in the alphabet. ROT13 is an example of the Caesar cipher.
 *
 * Create a function that takes a string and returns the string ciphered with Rot13.
 * If there are numbers or special characters included in the string,
 * they should be returned as they are. Only letters from the latin/english alphabet should be shifted,
 * like in the original Rot13 "implementation".
 */

function rot13(msg) {
  let ret = "";
  // We take the modulo of ASCII 65 - 90 (big chars)
  // and the modulo of ASCII 97 - 122 (small chars)
  // All the rest stays the same.
  for (let i = 0; i < msg.length; i++) {
    if (msg.charCodeAt(i) >= 65 && msg.charCodeAt(i) <= 90) {
      ret += String.fromCharCode(((msg.charCodeAt(i) - 65 + 13) % 26) + 65);
    } else if (msg.charCodeAt(i) >= 97 && msg.charCodeAt(i) <= 122) {
      ret += String.fromCharCode(((msg.charCodeAt(i) - 97 + 13) % 26) + 97);
    } else ret += msg[i];
  }
  return ret;
}

console.log(`test should become grfg: ${rot13("test")}`);
console.log(`Test should become Grfg: ${rot13("Test")}`);
console.log(`AbCd should become NoPq: ${rot13("AbCd")}`);
console.log(`Alex1! should become Nyrk1!: ${rot13("Alex!")}`);
