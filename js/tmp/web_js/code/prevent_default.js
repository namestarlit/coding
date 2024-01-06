const link = document.querySelector("a");

link.addEventListener("click", event =>
	{
		alert("Nope");
		event.preventDefault();
	});
