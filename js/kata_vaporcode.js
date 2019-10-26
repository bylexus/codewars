function vaporcode(str) {
  let first = true;
  let ret = "";

  str.split("").forEach(char => {
    if (!char.match(/\s/)) {
      if (!first) {
        ret += "  ";
      }
      first = false;
      ret += char.toUpperCase();
    }
  });
  return ret;
}

console.log(`Let's go to the movies: ${vaporcode("Let's go to the movies")}`);
