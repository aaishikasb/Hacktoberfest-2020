function harmlessRansomNote(noteText, magazineText) {
  let noteArr = noteText.split(" ");
  let magazineArr = magazineText.split(" ");
  let magazineObj = {};

  magazineArr.forEach(word => {
    if (!magazineObj[word]) magazineObj[word] = 0;
    magazineObj[word]++;
  });

  let isNotePossible = true;

  noteArr.forEach(word => {
    if (magazineObj[word]) {
      magazineObj[word]--;
      if (magazineObj[word] < 0) isNotePossible = false;
    } else isNotePossible = false;
  });

  return isNotePossible;
}
console.log(
  harmlessRansomNote(
    "This this hello my name is Abid how are you my dear let me call you my baby baby baby",
    "This is my name"
  )
);
