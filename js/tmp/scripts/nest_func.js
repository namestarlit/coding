#!/usr/bin/node

const hummus = function (factor) {
  const ingredient = function (amount, unit, name) {
    const ingredient_amount = amount * factor;

    if (ingredient_amount > 1) { unit += 's'; }

    console.log(`${ingredient_amount} ${unit} of ${name}`);
  };

  ingredient(1, 'can', 'chickenpeas');
  ingredient(0.25, 'cup', 'tahani');
};

hummus(2);
