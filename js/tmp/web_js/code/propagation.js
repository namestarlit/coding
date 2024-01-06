const para = document.querySelector("p");
const btn = document.querySelector("button");

para.addEventListener("mousedown", () =>
	{
		alert("Handler for paragraph");
	});

btn.addEventListener("mousedown", event =>
	{
		alert("Handler for button");
		
		if (event.btn == 2)
			event.stopPropagation();
	});
