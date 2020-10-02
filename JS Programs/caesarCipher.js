function caesarCipher(string, num) {
  let lowerCaseString = string.toLowerCase();
  let alphabetArr = "abcdefghijklmnopqrstuvwxyz".split("");
  let newString = "";

  for (let i = 0; i < lowerCaseString.length - 1; i++) {
    let currentLetter = lowerCaseString[i];
    if (currentLetter === " ") {
      newString += currentLetter;
      continue;
    }
    let currentIndex = alphabetArr.indexOf(currentLetter);
    let newIndex = currentIndex + num;
    if (newIndex > 25) newIndex = newIndex - 26;
    if (newIndex < 0) newIndex = 26 + newIndex;
    if (string[i] === string[i].toUpperCase())
      newString += alphabetArr[newIndex]
        ? alphabetArr[newIndex].toUpperCase()
        : "";
    else
      newString += alphabetArr[newIndex]
        ? alphabetArr[newIndex]
        : "";
  }
  return newString;
}
console.log(caesarCipher("Javascript", -900));
