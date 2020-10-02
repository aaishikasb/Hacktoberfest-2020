function isPalindrome(string) {
  string = string.toLowerCase();
  let characterArr = string.split("");
  let validCharArr = "abcdefghijklmnopqrstuvwxyz".split("");
  let validChars = [];
  characterArr.forEach(char => {
    if (validCharArr.indexOf(char) > -1) {
      validChars.push(char);
    }
  });
  return validChars.join() === validChars.reverse().join();
}
console.log(isPalindrome("Madam, I'm Adam"));
