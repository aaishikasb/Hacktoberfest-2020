function reverseArrayInPlace(array) {
  let temp = "";
  let mid = Math.ceil(array.length / 2);
  for (let i = 0; i < mid; i++) {
    temp = array[i];
    array[i] = array[mid - i];
    array[mid - i] = temp;
  }
  return array;
}

console.log(reverseArrayInPlace([1, 2, 3, 4, 5, 6, 7, 8, 9]));
