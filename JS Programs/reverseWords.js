function reverseWords(string) {
  let wordsArr = string.split(" ");
  let reverseWordsArr = [];
  wordsArr.forEach(word => {
    let letterArr = word.split("");
    let reverseWord = "";
    for (let i = letterArr.length - 1; i >= 0; i--) {
      reverseWord += letterArr[i];
    }
    reverseWordsArr.push(reverseWord);
  });
  return reverseWordsArr.join(" ");
}

console.log(reverseWords("Hello my name is Abid"));
