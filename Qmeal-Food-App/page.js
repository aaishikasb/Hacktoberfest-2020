const head = document.getElementById("head");
const mealContainer = document.getElementById("meal");
const result = document.getElementById("result");
const start = document.querySelector("btn");
const detBtn = document.querySelector("btn2");
const message = document.getElementById("message");
const allMeals = document.getElementById("allMeals");
const back = document.getElementById("back");
const resultDish = document.getElementById("result-dish");
const dishName = document.getElementById("dish-name");
const dishImage = document.getElementById("dish-image");
const dishPrep = document.getElementById("dish-prep");
const dishIng = document.getElementById("ing");
const dishYt = document.getElementById("ytv");

let loader = document.querySelector(".loader");

loader.style.display = "block";

/*  buttons events   */

const toggle = (e) => {
  if (e.target.id == "start") {
    head.style.display = "none";
    mealContainer.style.display = "block";
  }
  if (e.target.id == "search") {
    console.log("hello");
    mealContainer.style.display = "none";
    result.style.display = "block";
    filterCuisine();
  }
  if (e.target.id == "back") {
    result.style.display = "none";
    allMeals.innerHTML = " "; /* meals empty */
    mealContainer.style.display = "block";
  }
};

const filterCuisine = () => {
  /* get the element checkbox */
  message.innerHTML = "Processing your Request";
  const cuisineType = document.querySelectorAll(".type");
  let selectedCuisine = [];
  for (let i = 0; i <= 3; i++) {
    if (cuisineType[i].checked == true) {
      selectedCuisine.push(cuisineType[i].name);
    }
  }
  findMeal(selectedCuisine);
};

/* find a meal from picked Cuisines */
const findMeal = (selectedCuisine) => {
  /* function to find a random meal id and adding to mealid array  */
  const randomMeal = (type) => {
    let mealId = [];
    axios
      .get(`https://www.themealdb.com/api/json/v1/1/filter.php?a=${type}`)
      .then((resp) => {
        let itemId = 0;
        for (let i = 0; i <= 1; i++) {
          itemId = Math.floor(Math.random() * resp.data.meals.length);
          mealId.push(resp.data.meals[itemId].idMeal);
          message.innerHTML = "Picking up meals for you :)";
        }
        return mealId;
      })
      .then((mealId) => {
        generateMeal(mealId);
      })
      .catch((err) => {
        console.log(err);
      });
  };
  /* calling  */
  for (let n of selectedCuisine) {
    randomMeal(n);
  }
};

/* generate meal  */

const generateMeal = (ids) => {
  message.innerHTML = "Almost done !!";
  ids.forEach((id) => {
    axios
      .get(`https://www.themealdb.com/api/json/v1/1/lookup.php?i=${id}`)
      .then((resp) => {
        console.log(resp);
        allMeals.innerHTML += `
        <div class="each-meal">
        <button class="btn2" onclick="showDetails(${id})"></button>
        <img src=${resp.data.meals[0].strMealThumb} alt="" class="meal-image" />
        <span class="meal-name">${resp.data.meals[0].strMeal}</span>
      </div>
        `;
      })
      .catch((err) => {
        console.log(err);
      });
  });
  /* loading screen off  */
  loader.style.display = "none";
  back.style.display = "block";
};

const showDetails = (dishId) => {
  result.style.display = "none";

  const ingredients = [];
  axios
    .get(`https://www.themealdb.com/api/json/v1/1/lookup.php?i=${dishId}`)
    .then((resp) => {
      let meal = resp.data.meals[0];
      /* loop to though ingredients property */
      for (let i = 1; i <= 20; i++) {
        if (meal[`strIngredient${i}`]) {
          ingredients.push(
            `${meal[`strIngredient${i}`]} - ${meal[`strMeasure${i}`]}`
          );
        } else {
          // Stop if no more ingredients
          break;
        }
      }
      dishImage.src = meal.strMealThumb;
      dishName.innerHTML = `${meal.strMeal}`;
      dishPrep.innerHTML = `${meal.strInstructions}`;
      dishIng.innerHTML = `${ingredients
        .map(
          (ingredient) => `<span class="each-ingredient">${ingredient}</span>`
        )
        .join("")}`;
      dishYt.src = `https://www.youtube.com/embed/${meal.strYoutube.slice(
        -11
      )}`;
      resultDish.style.display = "grid";
    });
};
