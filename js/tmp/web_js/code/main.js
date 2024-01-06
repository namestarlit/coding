#!/usr/bin/node
const my_heading = document.querySelector("#my_heading");
my_heading.textContent = "Hello world!";

const button_click = document.querySelector("#btn_click");
const greet = document.querySelector("#greet");

button_click.onclick = () =>
{
	const name = prompt("What is your name?");
	alert(`Hello ${name}, nice to meet you!`);
	greet.textContent = `Welcome ${name}`;
};
