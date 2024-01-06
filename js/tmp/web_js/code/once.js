const button = document.querySelector("button");

function once()
{
	alert("Done");
	button.removeEventListener("click", once);
}
button.addEventListener("click", once);
